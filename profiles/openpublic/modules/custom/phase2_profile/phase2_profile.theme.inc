<?php
/**
 * Implementation of hook_form_FORM_ID_alter().
 * Used to add some javascript to the node edit form to manipulate the page while editing.
 */
function phase2_profile_form_profile_node_form_alter(&$form, $form_state) {
  $settings = array();
  $settings_fields = array(
    'firstName' => 'field_profile_first_name',
    'lastName' => 'field_profile_last_name',
    'orgName' => 'field_profile_organization',
  );
  //TODO: Find a better way to get the id attribute from an input element
  foreach ($settings_fields as $js_var_name => $field_name) {
    $lang = $form[$field_name]['#language'];
    $field_id = '#edit-' . str_replace('_', '-', $form[$field_name][$lang][0]['value']['#field_name']) . '-' . $lang . '-0' . '-value';
    $settings[$js_var_name] = $field_id;
  }

  drupal_add_js(array('phase2_profile' => $settings), 'setting');
  drupal_add_js(drupal_get_path('module', 'phase2_profile') . '/theme/phase2_profile.js');
}
