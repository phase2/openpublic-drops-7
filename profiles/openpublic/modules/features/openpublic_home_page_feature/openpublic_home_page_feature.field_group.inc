<?php
/**
 * @file
 * openpublic_home_page_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function openpublic_home_page_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_carousel_slides_source|field_collection_item|field_carousel_slides|form';
  $field_group->group_name = 'group_carousel_slides_source';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_carousel_slides';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Source',
    'weight' => '0',
    'children' => array(
      0 => 'field_carousel_slides_node',
      1 => 'field_carousel_slides_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Source',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-carousel-slides-source field-group-fieldset',
        'description' => 'Provide URL *or* node for slide to link to.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_carousel_slides_source|field_collection_item|field_carousel_slides|form'] = $field_group;

  return $export;
}
