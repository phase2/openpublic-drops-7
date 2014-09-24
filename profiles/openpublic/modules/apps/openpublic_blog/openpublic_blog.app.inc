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
    'permissions' => array(
      'create blog_entry content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
      'delete any blog_entry content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'delete own blog_entry content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'edit any blog_entry content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'edit own blog_entry content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
    ),
  );
}
