<?php

/**
 * Implementation of hook_field_group_default_field_groups().
 */
function openpublic_editors_choice_field_group_default_field_groups() {
  $field_groups = array();

  // Exported field_group: 'node-editors_choice-form-group_editors_choice_custom'
  $field_groups['node-editors_choice-form-group_editors_choice_custom'] = array(
    'group_name' => 'group_editors_choice_custom',
    'entity_type' => 'node',
    'bundle' => 'editors_choice',
    'mode' => 'form',
    'parent_name' => '',
    'label' => 'Custom Content',
    'weight' => '2',
    'children' => array(
      '0' => 'field_editors_choice_summary',
      '1' => 'field_editors_choice_thumbnail',
      '2' => 'field_editors_choice_attachments',
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
