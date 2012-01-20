<?php

/**
 * Implementation of hook_field_group_default_field_groups().
 */
function openpublic_person_field_group_default_field_groups() {
  $field_groups = array();

  // Exported field_group: 'node-profile-form-group_profile_staff'
  $field_groups['node-profile-form-group_profile_staff'] = array(
    'group_name' => 'group_profile_staff',
    'entity_type' => 'node',
    'bundle' => 'profile',
    'mode' => 'form',
    'parent_name' => '',
    'label' => 'Staff Information',
    'weight' => '11',
    'children' => array(
      '0' => 'field_profile_department',
      '1' => 'field_profile_job_title',
      '2' => 'field_profile_leadership',
      '3' => 'field_profile_social_media',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Staff Information',
      'instance_settings' => array(
        'classes' => 'staff-information',
      ),
      'formatter' => 'collapsed',
    ),
  );

  return $field_groups;
}
