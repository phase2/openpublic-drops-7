<?php
/**
 * @file
 * openpublic_menu.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openpublic_menu_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'menu',
  );

  return $permissions;
}
