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

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'menu',
  );

  return $permissions;
}
