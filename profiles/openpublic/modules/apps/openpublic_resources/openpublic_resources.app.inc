<?php
/**
 * @file
 * App code for the openpublic resource feature.
 */

/**
 * Implements hook_apps_app_info().
 */
function openpublic_resources_apps_app_info() {
  return array(
    //Demo Content
    'demo content module' => 'openpublic_resources_demo',
    'permissions' => array(
      'create resource content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
      'delete any resource content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'delete own resource content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'edit any resource content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'edit own resource content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
    ),
  );
}

