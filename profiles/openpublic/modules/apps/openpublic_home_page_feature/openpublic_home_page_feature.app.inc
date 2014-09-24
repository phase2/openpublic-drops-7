<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function openpublic_home_page_feature_apps_app_info() {
  return array(
    'demo content description' => 'Creates sample content to show home page features.',
    'demo content module' => 'openpublic_home_page_feature_demo',
    'permissions' => array(
      'edit any carousel entity_boxes' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
      'edit any feature entity_boxes' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
      'view any carousel entity_boxes' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
      'view any feature entity_boxes' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
    ),
  );
}
