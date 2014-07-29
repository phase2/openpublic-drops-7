<?php
/**
 * @file
 * openpublic_breaking_news.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function openpublic_breaking_news_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_breaking_news_node'
  $field_bases['field_breaking_news_node'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_breaking_news_node',
    'foreign keys' => array(
      'nid' => array(
        'columns' => array(
          'nid' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'blog_entry' => 'blog_entry',
        'document' => 'document',
        'editors_choice' => 'editors_choice',
        'event' => 'event',
        'faqs' => 'faqs',
        'media_gallery' => 'media_gallery',
        'photo' => 'photo',
        'press_release' => 'press_release',
        'profile' => 'profile',
        'resource' => 'resource',
        'services' => 'services',
        'site_page' => 'site_page',
        'webform' => 'webform',
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_breaking_news_title'
  $field_bases['field_breaking_news_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_breaking_news_title',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
