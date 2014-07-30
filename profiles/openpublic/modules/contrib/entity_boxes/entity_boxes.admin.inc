<?php

/**
 * @file
 * BoxEntity editing UI.
 *
 * We make very little use of the EntityAPI interface for this - preferring instead to use
 * views. That offers more flexibility to change a UI that will, more often than not,
 * be end-user facing.
 */

/**
 * UI controller.
 */
class BoxEntityUIController extends EntityDefaultUIController {

  /**
   * Overrides hook_menu() defaults. Main reason for doing this is that
   * parent class hook_menu() is optimized for entity type administration.
   * We are simply using the boxes forms to create entities.
   */
  public function hook_menu() {
    $items = array();
    $id_count = count(explode('/', $this->path));
    $wildcard = isset($this->entityInfo['admin ui']['menu wildcard']) ? $this->entityInfo['admin ui']['menu wildcard'] : '%' . $this->entityType;

    $items['entity_boxes/getform/%'] = array (
      'title' => 'FORMS TESTER',
      'page callback' => 'entity_boxes_form_wrapper',
      'page arguments' => array(2),
      'access callback' => 'entity_boxes_access',
      'access arguments' => array('view', 1),
      'type' => MENU_CALLBACK,
    );

    // Menu item for viewing entity_boxes
    $items['entity_boxes/' . $wildcard] = array(
      //'title' => 'Title',
      'title callback' => 'entity_boxes_page_title',
      'title arguments' => array(1),
      'page callback' => 'entity_boxes_page_view',
      'page arguments' => array(1),
      'access callback' => 'entity_boxes_access',
      'access arguments' => array('view', 1),
      'type' => MENU_CALLBACK,
    );
    return $items;
  }
  
  
  /**
   * Create the markup for the add BoxEntity Entities page within the class
   * so it can easily be extended/overriden.
   */ 
  public function addPage() {
    $item = menu_get_item();
    $content = system_admin_menu_block($item);

    if (count($content) == 1) {
      $item = array_shift($content);
      drupal_goto($item['href']);
    }    
        
    return theme('entity_boxes_add_list', array('content' => $content));
  }
  
}


/**
 * Form callback wrapper: create or edit a entity_boxes.
 *
 * @param $entity_boxes
 *   The entity_boxes object being edited by this form.
 *
 * @see entity_boxes_edit_form()
 */
function entity_boxes_form_wrapper($delta) {
  // Add the breadcrumb for the form's location.
  $entity_boxes = entity_boxes_load_delta($delta);
  return drupal_get_form('entity_boxes_edit_form', $entity_boxes);
}


/**
 * Form callback wrapper: delete a entity_boxes.
 *
 * @param $entity_boxes
 *   The entity_boxes object being edited by this form.
 *
 * @see entity_boxes_edit_form()
 */
function entity_boxes_delete_form_wrapper($entity_boxes) {
  // Add the breadcrumb for the form's location.
  //entity_boxes_set_breadcrumb();
  return drupal_get_form('entity_boxes_delete_form', $entity_boxes);
}


/**
 * Form callback: create or edit a entity_boxes.
 *
 * @param $entity_boxes
 *   The entity_boxes object to edit or for a create form an empty entity_boxes object
 *     with only a entity_boxes type defined.
 */
function entity_boxes_edit_form($form, &$form_state, $entity_boxes = FALSE) {
  $form = array();
  //short out if we didn't receive any entity_boxes
  if(!$entity_boxes) {
    $entity_boxes = (!is_array($entity_boxes) || !$entity_boxes) ?
        entity_boxes_create(array('type' => $form_state['box']->plugin_key)) : array_pop($entity_boxes);
  }

  if(is_array($entity_boxes)) {
    $entity_boxes = current($entity_boxes);
  }

  $form_state['entity_boxes'] = $entity_boxes;

  $form['entity_boxes_id'] = array(
    '#type' => 'value',
    '#value' => $entity_boxes->entity_boxes_id,
  );
  
  //store our state in the form so it can be accessed on the block pages
  $form['form_state_info'] = array(
    '#type' => 'value',
    '#value' => $form_state,
  );

  return $form;
}

/**
 *  Implementation of hook_form_FORM_ID_alter().
 *  Add our form state back so fields knows what is going on.
 *  This gets lost because hook_block_configure doesn't accept form_state
 */
function entity_boxes_form_alter (&$form, &$form_state, $form_id) {
  // Break out if its not a boxes for, this isn't an entity box or we're at the beginning
  // of a 2 part form
  if (!in_array($form_id, array('block_admin_configure', 'boxes_add_form', 'boxes_box_form')) ||
      !(isset($form['settings']['options']['entity_boxes_id']) || isset($form['options']['entity_boxes_id'])) 
  ) {
    return;
  }

  //move our formstate over from the form itself (this is for bypassing hook_block_configure)
  if (isset($form['settings']['options']['form_state_info']['#value'])) {
    $form_state += $form['settings']['options']['form_state_info']['#value'];
    unset($form['settings']['options']['form_state_info']);
  } else {
    unset($form['options']['form_state_info']);
  }

  if (isset($form_state['init_form']) && $form_state['box']->use_multistep_create()) {
    return;
  }

  $entity_boxes = $form_state['entity_boxes'];
  //figure out which part of the form to attach the fields to
  if ($form_id == 'boxes_add_form' || $form_id == 'boxes_box_form') {
    $portion = &$form['options'];
  } else {
    $portion = &$form['settings']['options'];
    $portion['#parents'][] = 'settings';
    unset($form['settings']['actions']);
  }
  //set up the form with all the information so fields can work properly
  $portion['#tree'] = TRUE;
  $portion['#parents'][] = 'options';

  if(!in_array('boxes_box_form_submit', $form['#submit'])) {
    $form['#submit'][] = 'entity_boxes_edit_form_submit';
  }

  //attach our fields to the proper part of the form
  field_attach_form('entity_boxes', $entity_boxes, $portion, $form_state);
}

/**
 * Form API validate callback for the entity_boxes form
 */
function entity_boxes_edit_form_validate(&$form, &$form_state) {
  $entity_boxes = $form_state['entity_boxes'];
  
  // Notify field widgets to validate their data.
  field_attach_form_validate('entity_boxes', $entity_boxes, $form, $form_state);
}


/**
 * Form API submit callback for the entity_boxes form.
 */
function entity_boxes_edit_form_submit(&$form, &$form_state) {

  if (empty($form_state['entity_boxes']) && !empty($form_state['values']['entity_boxes_id'])) {
    $id = $form_state['values']['entity_boxes_id'];
    $form_state['entity_boxes'] = entity_boxes_load($id);
  }
  //fill in the name if its missing
  if(empty($field_state['values']['name'])) {
    $form_state['values']['name'] = $form_state['values']['delta'];
  }

  if (!empty($form_state['values']['settings'])) {
    $form_state['values'] += $form_state['values']['settings'];
  }

  if (!empty($form_state['values']['options'])) {
    $form_state['values'] += $form_state['values']['options'];
  }
  

  $entity_boxes = entity_ui_controller('entity_boxes')->entityFormSubmitBuildEntity($form, $form_state);

  return entity_boxes_save($entity_boxes);
}

/**
 * Form API submit callback for the delete button.
 * 
 * @todo Remove hard-coded path
 */
function entity_boxes_form_submit_delete(&$form, &$form_state) {
  $entity_boxes = $form_state['entity_boxes'];
  return entity_boxes_delete($entity_boxes);
}

/**
 * Form callback: confirmation form for deleting a entity_boxes.
 *
 * @param $entity_boxes
 *   The entity_boxes to delete
 *
 * @see confirm_form()
 */
function entity_boxes_delete_form($form, &$form_state, $entity_boxes) {
  $form_state['entity_boxes'] = $entity_boxes;

  $form['#submit'][] = 'entity_boxes_delete_form_submit';

  $form = confirm_form($form,
    t('Are you sure you want to delete entity_boxes %name?', array('%name' => $entity_boxes->name)),
    'admin/content/entity_boxes/entity_boxes',
    '<p>' . t('This action cannot be undone.') . '</p>',
    t('Delete'),
    t('Cancel'),
    'confirm'
  );
  
  return $form;
}

/**
 * Submit callback for entity_boxes_delete_form
 */
function entity_boxes_delete_form_submit($form, &$form_state) {
  $entity_boxes = $form_state['entity_boxes'];

  entity_boxes_delete($entity_boxes);

  drupal_set_message(t('The entity_boxes %name has been deleted.', array('%name' => $entity_boxes->name)));
  watchdog('entity_boxes', 'Deleted entity_boxes %name.', array('%name' => $entity_boxes->name));

  $form_state['redirect'] = 'admin/content/entity_boxes';
}



/**
 * Page to add BoxEntity Entities.
 *
 * @todo Pass this through a proper theme function
 */
function entity_boxes_add_page() {
  $controller = entity_ui_controller('entity_boxes');
  return $controller->addPage();
}


/**
 * Displays the list of available entity_boxes types for entity_boxes creation.
 *
 * @ingroup themeable
 */
function theme_entity_boxes_add_list($variables) {
  $content = $variables['content'];
  $output = '';
  if ($content) {
    $output = '<dl class="entity_boxes-type-list">';
    foreach ($content as $item) {
      $output .= '<dt>' . l($item['title'], $item['href']) . '</dt>';
      $output .= '<dd>' . filter_xss_admin($item['description']) . '</dd>';
    }
    $output .= '</dl>';
  }
  else {
    if (user_access('administer entity_boxes types')) {
      $output = '<p>' . t('BoxEntity Entities cannot be added because you have not created any entity_boxes types yet. Go to the <a href="@create-entity_boxes-type">entity_boxes type creation page</a> to add a new entity_boxes type.', array('@create-entity_boxes-type' => url('admin/structure/entity_boxes_types/add'))) . '</p>';
    }
    else {
      $output = '<p>' . t('No entity_boxes types have been created yet for you to use.') . '</p>';
    }
  }

  return $output;
}





/**
 * Sets the breadcrumb for administrative entity_boxes pages.
 */
function entity_boxes_set_breadcrumb() {
  $breadcrumb = array(
    l(t('Home'), '<front>'),
    l(t('Administration'), 'admin'),
    l(t('Content'), 'admin/content'),
    l(t('Box Entities'), 'admin/content/entity_boxes'),
  );

  drupal_set_breadcrumb($breadcrumb);
}



