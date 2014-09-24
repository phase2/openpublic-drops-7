<?php
/**
 * @file
 * App code for the openpublic press release feature.
 */

/**
 * Implements hook_apps_app_info().
 */
function openpublic_press_release_apps_app_info() {
  return array(
    'demo content description' => 'Creates sample content to show press releases',
    'demo content module' => 'openpublic_press_release_demo',
    'permissions' => array(
      'create press_release content' => array(
        'administrator' => 'administrator',
      ),
      'delete any press_release content' => array(
        'administrator' => 'administrator',
      ),
      'delete own press_release content' => array(
        'administrator' => 'administrator',
      ),
      'edit any press_release content' => array(
        'administrator' => 'administrator',
      ),
      'edit own press_release content' => array(
        'administrator' => 'administrator',
      ),
    ),
  );
}

