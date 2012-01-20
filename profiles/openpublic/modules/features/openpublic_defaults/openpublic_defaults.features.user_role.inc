<?php
/**
 * @file
 * openpublic_defaults.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function openpublic_defaults_user_default_roles() {
  $roles = array();

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '3',
  );

  // Exported role: staff
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => '2',
  );

  return $roles;
}
