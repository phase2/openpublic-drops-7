<?php
/**
 * @file
 * openpublic_password.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openpublic_password_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer password policies
  $permissions['administer password policies'] = array(
    'name' => 'administer password policies',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: force password change
  $permissions['force password change'] = array(
    'name' => 'force password change',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'password_policy',
  );

  // Exported permission: unblock expired accounts
  $permissions['unblock expired accounts'] = array(
    'name' => 'unblock expired accounts',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'password_policy',
  );

  return $permissions;
}
