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
  );
}
