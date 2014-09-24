<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function openpublic_webform_apps_app_info() {
  return array(
    'demo content description' => 'Creates sample content to show webforms.',
    'demo content module' => 'openpublic_webform_demo',
    'permissions' => array(
      'access all webform results' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'access own webform results' => array(
        'administrator' => 'administrator',
        'authenticated user' => 'authenticated user',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
      'access own webform submissions' => array(
        'administrator' => 'administrator',
        'authenticated user' => 'authenticated user',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
      'create webform content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'delete all webform submissions' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'delete any webform content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'delete own webform content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'delete own webform submissions' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'edit all webform submissions' => array(
        'administrator' => 'administrator',
      ),
      'edit any webform content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'edit own webform content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'edit own webform submissions' => array(
        'administrator' => 'administrator',
      ),
    )
  );
}
