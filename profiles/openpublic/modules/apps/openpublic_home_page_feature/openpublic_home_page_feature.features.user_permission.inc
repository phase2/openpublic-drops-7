<?php
/**
 * @file
 * openpublic_home_page_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openpublic_home_page_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit any carousel entity_boxes'.
  $permissions['edit any carousel entity_boxes'] = array(
    'name' => 'edit any carousel entity_boxes',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'staff' => 'staff',
    ),
    'module' => 'entity_boxes',
  );

  // Exported permission: 'edit any feature entity_boxes'.
  $permissions['edit any feature entity_boxes'] = array(
    'name' => 'edit any feature entity_boxes',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'staff' => 'staff',
    ),
    'module' => 'entity_boxes',
  );

  // Exported permission: 'view any carousel entity_boxes'.
  $permissions['view any carousel entity_boxes'] = array(
    'name' => 'view any carousel entity_boxes',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'staff' => 'staff',
    ),
    'module' => 'entity_boxes',
  );

  // Exported permission: 'view any feature entity_boxes'.
  $permissions['view any feature entity_boxes'] = array(
    'name' => 'view any feature entity_boxes',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'staff' => 'staff',
    ),
    'module' => 'entity_boxes',
  );

  return $permissions;
}
