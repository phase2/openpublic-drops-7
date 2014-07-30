<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function openpublic_promotion_apps_app_info() {
  return array(
    'demo content description' => 'Creates sample content to show promotions.',
    'demo content module' => 'openpublic_promotion_demo',
  );
}
