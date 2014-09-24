<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function openpublic_topic_apps_app_info() {
  return array(
    'demo content description' => 'Creates sample content to show topics. Depends on either blog and site page feature and those two types having the topic field enabled.',
    'demo content module' => 'openpublic_topic_demo',
    'configure form' => 'openpublic_topic_apps_configure_form',
    'status callback' => 'openpublic_topic_apps_status',
    'permissions' => array(
      'edit any topic_box entity_boxes' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
      'view any topic_box entity_boxes' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
    ),
  );
}

/**
 * Configure the topic field.
 */
function openpublic_topic_apps_configure_form() {
  $form = array();

  $form['openpublic_topic_topic_field_content_types'] = array(
    '#title' => t('Content types that have topic field'),
    '#default_value' => variable_get('openpublic_topic_topic_field_content_types', _openpublic_topic_default_types()),
    '#type' => 'checkboxes',
    '#options' => node_type_get_names(),
    '#description' => t('Any content type check here, will have a Author field atttached to them which can be used for filtering content'),
  );

  $form['openpublic_topic_topic_field_type'] = array(
    '#title' => t('Topic field type'),
    '#default_value' => variable_get('openpublic_topic_topic_field_type', 'options_buttons'),
    '#type' => 'select',
    '#options' => array(
      'options_buttons' => t('Checkboxes'),
      'options_select' => t('Select'),
      'taxonomy_autocomplete' => t('Autocomplete'),
    ),
  );

  $form = system_settings_form($form);
  $form['#submit'][] = 'openpublic_topic_apps_configure_form_submit';
  return $form;
}

/**
 * Configure the topic field.
 */
function openpublic_topic_apps_configure_form_submit($form, &$form_state) {
  // Revert features template.
  features_template_revert();
}

/**
 * Implements pseudo hook_status().
 */
function openpublic_topic_apps_status() {
  drupal_add_library('system', 'drupal.ajax');
  $status = array(
    'title' => t('Status'),
    'headers' => array(t('severity'), t('title'), t('description'), t('action')),
    'items' => array(),
  );

  if ($vocabulary = taxonomy_vocabulary_machine_name_load('topic')) {
    $count = db_query('SELECT count(tid) FROM {taxonomy_term_data} WHERE vid = :vid', array(':vid' => $vocabulary->vid))->fetchField();
    $text = format_plural($count, '1 term.', '@count terms.');
    $link = (user_access('administer taxonomy') ? l(t('Add terms'), 'admin/structure/taxonomy/topic/add') : '');
    $severity = REQUIREMENT_INFO;
  }
  else {
    $text = t('Topic vocabulary missing.');
    $severity = REQUIREMENT_ERROR;
    $link = '';
  }

  $status['items']['count'] = array(
    'title' => t("Term Count"),
    'description' => $text,
    'severity' => $severity,
    'action' => $link ? array($link) : array(),
  );
  return $status;
}
