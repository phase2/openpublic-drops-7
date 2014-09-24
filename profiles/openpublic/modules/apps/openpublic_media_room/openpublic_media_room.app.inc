<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function openpublic_media_room_apps_app_info() {
  return array(
    'demo content description' => 'Creates sample content to show multimedia.',
    'demo content module' => 'openpublic_multimedia_demo',
    'permissions' => array(
      'create media_gallery content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
      'create photo content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
      'delete any media_gallery content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'delete any photo content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'delete own media_gallery content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'delete own photo content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'edit any media_gallery content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'edit any photo content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'edit own media_gallery content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
      'edit own photo content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
    )
  );
}
