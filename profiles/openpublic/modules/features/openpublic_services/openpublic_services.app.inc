<?php
/**
 * @file
 * App code for the openpublic service feature.
 */

/**
 * Implements hook_apps_app_info().
 */
function openpublic_services_apps_app_info() {
  return array(
    //Demo Content
    'demo content description' => 'Creates sample content to show services',
    //The perfered way for an app to provide demo content is to have a module
    //that when enabled will add demo content, and when disabled will removed
    //demo content
    //this module should be a submodule or part of the manifest dependent modules
    'demo content module' => 'openpublic_services_demo',
  );
}
