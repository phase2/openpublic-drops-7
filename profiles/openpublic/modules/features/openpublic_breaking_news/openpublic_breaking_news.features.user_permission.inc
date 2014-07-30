<?php
/**
 * @file
 * openpublic_breaking_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openpublic_breaking_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit any breaking_news entity_boxes'.
  $permissions['edit any breaking_news entity_boxes'] = array(
    'name' => 'edit any breaking_news entity_boxes',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'staff' => 'staff',
    ),
    'module' => 'entity_boxes',
  );

  // Exported permission: 'view any breaking_news entity_boxes'.
  $permissions['view any breaking_news entity_boxes'] = array(
    'name' => 'view any breaking_news entity_boxes',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'staff' => 'staff',
    ),
    'module' => 'entity_boxes',
  );

  return $permissions;
}
