<?php
/**
 * @file
 * openpublic_breaking_news.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function openpublic_breaking_news_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entity_boxes-breaking_news-field_breaking_news_node'
  $field_instances['entity_boxes-breaking_news-field_breaking_news_node'] = array(
    'bundle' => 'breaking_news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entity_boxes',
    'field_name' => 'field_breaking_news_node',
    'label' => 'Node',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 1,
        'references_dialog_search' => 1,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entity_boxes-breaking_news-field_breaking_news_title'
  $field_instances['entity_boxes-breaking_news-field_breaking_news_title'] = array(
    'bundle' => 'breaking_news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entity_boxes',
    'field_name' => 'field_breaking_news_title',
    'label' => 'Title Override',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Node');
  t('Title Override');

  return $field_instances;
}
