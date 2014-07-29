<?php

/**
 * Implements hook_field_group_default_field_groups().
 */
function openpublic_promotion_field_group_default_field_groups() {
  $field_groups = array();

  // Exported field_group: 'entity_boxes-promotion-form-group_promotion_custom'
  $field_groups['entity_boxes-promotion-form-group_promotion_custom'] = array(
    'group_name' => 'group_promotion_custom',
    'entity_type' => 'entity_boxes',
    'bundle' => 'promotion',
    'mode' => 'form',
    'parent_name' => '',
    'label' => 'Custom Content',
    'weight' => '2',
    'children' => array(
      '0' => 'field_promotion_summary',
      '1' => 'field_promotion_thumbnail',
      '2' => 'field_promotion_attachments',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );

  return $field_groups;
}
