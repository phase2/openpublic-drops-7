<?php
/**
 * @file
 * openpublic_promotion.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function openpublic_promotion_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entity_boxes-promotion-field_promotion_attachments'
  $field_instances['entity_boxes-promotion-field_promotion_attachments'] = array(
    'bundle' => 'promotion',
    'deleted' => 0,
    'description' => 'Attach files, that you might want to use in the summary.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entity_boxes',
    'field_name' => 'field_promotion_attachments',
    'label' => 'Attachments',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'txt pdf png jpg gif',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entity_boxes-promotion-field_promotion_link'
  $field_instances['entity_boxes-promotion-field_promotion_link'] = array(
    'bundle' => 'promotion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entity_boxes',
    'field_name' => 'field_promotion_link',
    'label' => 'link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 255,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entity_boxes-promotion-field_promotion_node'
  $field_instances['entity_boxes-promotion-field_promotion_node'] = array(
    'bundle' => 'promotion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(
          'entity_boxes_reference_view_mode' => 'teaser',
        ),
        'type' => 'node_reference_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entity_boxes',
    'field_name' => 'field_promotion_node',
    'label' => 'Featured Item',
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

  // Exported field_instance: 'entity_boxes-promotion-field_promotion_summary'
  $field_instances['entity_boxes-promotion-field_promotion_summary'] = array(
    'bundle' => 'promotion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entity_boxes',
    'field_name' => 'field_promotion_summary',
    'label' => 'Summary',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entity_boxes-promotion-field_promotion_thumbnail'
  $field_instances['entity_boxes-promotion-field_promotion_thumbnail'] = array(
    'bundle' => 'promotion',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'right-sidebar-thumbnails',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entity_boxes',
    'field_name' => 'field_promotion_thumbnail',
    'label' => 'Thumbnail',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attach files, that you might want to use in the summary.');
  t('Attachments');
  t('Featured Item');
  t('Summary');
  t('Thumbnail');
  t('link');

  return $field_instances;
}
