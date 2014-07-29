<?php
/**
 * @file
 * openpublic_site_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openpublic_site_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create site_page content'.
  $permissions['create site_page content'] = array(
    'name' => 'create site_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any site_page content'.
  $permissions['delete any site_page content'] = array(
    'name' => 'delete any site_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own site_page content'.
  $permissions['delete own site_page content'] = array(
    'name' => 'delete own site_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any site_page content'.
  $permissions['edit any site_page content'] = array(
    'name' => 'edit any site_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own site_page content'.
  $permissions['edit own site_page content'] = array(
    'name' => 'edit own site_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
