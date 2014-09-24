<?php
/**
 * @file
 * Provides app info for openpublic event.
 */

/**
 * Implements hook_apps_app_info().
 */
function openpublic_event_apps_app_info() {
  return array(
    'demo content description' => 'This will populate the events page with a couple of sample events for demonstration.',
    'demo content module' => 'openpublic_event_demo',
    'permissions' => array(
      'create event content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
      'delete any event content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'delete own event content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'edit any event content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'edit own event content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
    ),
  );
}