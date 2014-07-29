<?php
/**
 * @file
 * openpublic_faqs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openpublic_faqs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create faqs content'.
  $permissions['create faqs content'] = array(
    'name' => 'create faqs content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any faqs content'.
  $permissions['delete any faqs content'] = array(
    'name' => 'delete any faqs content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own faqs content'.
  $permissions['delete own faqs content'] = array(
    'name' => 'delete own faqs content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any faqs content'.
  $permissions['edit any faqs content'] = array(
    'name' => 'edit any faqs content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own faqs content'.
  $permissions['edit own faqs content'] = array(
    'name' => 'edit own faqs content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
