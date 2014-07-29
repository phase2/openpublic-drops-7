<?php
/**
 * @file
 * openpublic_person.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openpublic_person_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create profile content'.
  $permissions['create profile content'] = array(
    'name' => 'create profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any profile content'.
  $permissions['delete any profile content'] = array(
    'name' => 'delete any profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own profile content'.
  $permissions['delete own profile content'] = array(
    'name' => 'delete own profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any profile content'.
  $permissions['edit any profile content'] = array(
    'name' => 'edit any profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own profile content'.
  $permissions['edit own profile content'] = array(
    'name' => 'edit own profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  return $permissions;
}
