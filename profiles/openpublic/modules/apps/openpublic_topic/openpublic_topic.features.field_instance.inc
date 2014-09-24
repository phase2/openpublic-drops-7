<?php
/**
 * @file
 * openpublic_topic.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function openpublic_topic_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entity_boxes-topic_box-field_topic_box_display'
  $field_instances['entity_boxes-topic_box-field_topic_box_display'] = array(
    'bundle' => 'topic_box',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entity_boxes',
    'field_name' => 'field_topic_box_display',
    'label' => 'Display',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entity_boxes-topic_box-field_topic_box_topic'
  $field_instances['entity_boxes-topic_box-field_topic_box_topic'] = array(
    'bundle' => 'topic_box',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entity_boxes',
    'field_name' => 'field_topic_box_topic',
    'label' => 'Term',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Display');
  t('Term');

  return $field_instances;
}
