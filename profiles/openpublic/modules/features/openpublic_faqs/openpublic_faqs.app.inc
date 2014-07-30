<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function openpublic_faqs_apps_app_info() {
  return array(
    'demo content description' => 'Creates sample content to show faqs',
    'demo content module' => 'openpublic_faqs_demo',
  );
}
