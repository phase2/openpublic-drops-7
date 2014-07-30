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
  );
}
