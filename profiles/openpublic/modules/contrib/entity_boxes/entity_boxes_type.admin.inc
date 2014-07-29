<?php

/**
 * @file
 * BoxEntity type editing UI.
 */

/**
 * UI controller.
 */
class BoxEntityTypeUIController extends EntityDefaultUIController {

  /**
   * Overrides hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();
    $items[$this->path]['description'] = 'Manage entity_boxes entity types, including adding
		and removing fields and the display of fields.';
    return $items;
  }
}

/**
 * Generates the entity_boxes type editing form.
 */
function entity_boxes_type_form($form, &$form_state, $entity_boxes_type, $op = 'edit') {
  if ($op == 'clone') {
    $entity_boxes_type->label .= ' (cloned)';
    $entity_boxes_type->type = '';
  }

  $form['label'] = array(
    '#title' => t('Label'),
    '#type' => 'textfield',
    '#default_value' => $entity_boxes_type->label,
    '#description' => t('The human-readable name of this entity_boxes type.'),
    '#required' => TRUE,
    '#size' => 30,
  );
  // Machine-readable type name.
  $form['type'] = array(
    '#type' => 'machine_name',
    '#default_value' => isset($entity_boxes_type->type) ? $entity_boxes_type->type : '',
    '#maxlength' => 32,
    '#machine_name' => array(
      'exists' => 'entity_boxes_get_types',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this entity_boxes type. It must only contain lowercase letters, numbers, and underscores.'),
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save entity_boxes type'),
    '#weight' => 40,
  );

  //Locking not supported yet
  /*if (!$entity_boxes_type->isLocked() && $op != 'add') {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete entity_boxes type'),
      '#weight' => 45,
      '#limit_validation_errors' => array(),
      '#submit' => array('entity_boxes_type_form_submit_delete')
    );
  }*/
  return $form;
}

/**
 * Form API submit callback for the type form.
 */
function entity_boxes_type_form_submit(&$form, &$form_state) {
  $entity_boxes_type = entity_ui_form_submit_build_entity($form, $form_state);
  $entity_boxes_type->save();
  $form_state['redirect'] = 'admin/structure/entity_boxes_types';
}

/**
 * Form API submit callback for the delete button.
 */
function entity_boxes_type_form_submit_delete(&$form, &$form_state) {
  $form_state['redirect'] = 'admin/structure/entity_boxes_types/manage/' . $form_state['entity_boxes_type']->type . '/delete';
}
