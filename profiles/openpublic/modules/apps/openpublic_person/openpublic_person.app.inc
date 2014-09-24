<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function openpublic_person_apps_app_info() {
  return array(
    'demo content description' => 'Creates sample content to show webform.',
    'demo content module' => 'openpublic_person_demo',
    'configure form' => 'openpublic_person_apps_configure_form',
    'permissions' => array(
      'create profile content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
      'delete any profile content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'delete own profile content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'edit any profile content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'edit own profile content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
    ),
  );
}

/**
 * Configure the author field.
 */
function openpublic_person_apps_configure_form() {
  $form = array();

  $form['openpublic_person_author_field_content_types'] = array(
    '#title' => t('Content types that have an author field'),
    '#default_value' => variable_get('openpublic_person_author_field_content_types', _openpublic_person_default_types()),
    '#type' => 'checkboxes',
    '#options' => node_type_get_names(),
    '#description' => t('Any content type check here, will have a Author field atttached to them which can be used for filtering content'),
  );
  $form = system_settings_form($form);
  $form['#submit'][] = 'openpublic_person_apps_configure_form_submit';
  return $form;
}

/**
 * Configure the author field.
 */
function openpublic_person_apps_configure_form_submit($form, &$form_state) {
  // Revert features template.
  features_template_revert();
}
