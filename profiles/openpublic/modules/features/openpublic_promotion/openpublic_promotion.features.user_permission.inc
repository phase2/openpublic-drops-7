<?php
/**
 * @file
 * openpublic_promotion.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openpublic_promotion_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit any promotion entity_boxes'.
  $permissions['edit any promotion entity_boxes'] = array(
    'name' => 'edit any promotion entity_boxes',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'staff' => 'staff',
    ),
    'module' => 'entity_boxes',
  );

  // Exported permission: 'view any promotion entity_boxes'.
  $permissions['view any promotion entity_boxes'] = array(
    'name' => 'view any promotion entity_boxes',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'staff' => 'staff',
    ),
    'module' => 'entity_boxes',
  );

  return $permissions;
}
