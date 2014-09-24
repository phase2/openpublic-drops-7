<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function openpublic_site_page_apps_app_info() {
  return array(
    'demo content description' => 'Creates sample content to show site page.',
    'demo content module' => 'openpublic_site_page_demo',
    'permissions' => array(
      'create site_page content' => array(
        'administrator' => 'administrator',
      ),
      'delete any site_page content' => array(
        'administrator' => 'administrator',
      ),
      'delete own site_page content' => array(
        'administrator' => 'administrator',
      ),
      'edit any site_page content' => array(
        'administrator' => 'administrator',
      ),
      'edit own site_page content' => array(
        'administrator' => 'administrator',
      ),
    ),
  );
}
