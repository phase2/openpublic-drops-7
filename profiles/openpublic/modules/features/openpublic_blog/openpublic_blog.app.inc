<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function openpublic_blog_apps_app_info() {
  return array(
    'demo content description' => 'Creates sample content to show blogs',
    'demo content module' => 'openpublic_blog_demo',
  );
}
