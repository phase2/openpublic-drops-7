<?php
/**
 * @file
 * phase2_document.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function phase2_document_user_default_permissions() {
  $permissions = array();

  // Exported permission: create document content
  $permissions['create document content'] = array(
    'name' => 'create document content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any document content
  $permissions['delete any document content'] = array(
    'name' => 'delete any document content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own document content
  $permissions['delete own document content'] = array(
    'name' => 'delete own document content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any document content
  $permissions['edit any document content'] = array(
    'name' => 'edit any document content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own document content
  $permissions['edit own document content'] = array(
    'name' => 'edit own document content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
    ),
    'module' => 'node',
  );

  return $permissions;
}
