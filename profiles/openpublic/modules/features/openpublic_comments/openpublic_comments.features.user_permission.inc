<?php
/**
 * @file
 * openpublic_comments.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function openpublic_comments_user_default_permissions() {
  $permissions = array();

  // Exported permission: subscribe to comments
  $permissions['subscribe to comments'] = array(
    'name' => 'subscribe to comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'comment_notify',
  );

  return $permissions;
}
