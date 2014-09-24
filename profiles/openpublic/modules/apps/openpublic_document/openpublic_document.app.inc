<?php
/**
 * @file
 * App code for openpublic document feature.
 */

/**
 * Implements hook_apps_app_info().
 */
function openpublic_document_apps_app_info() {
  return array(
    //Demo Content
    'demo content description' => 'Creates sample content to show services',
    //The perfered way for an app to provide demo content is to have a module
    //that when enabled will add demo content, and when disabled will removed
    //demo content
    //this module should be a submodule or part of the manifest dependent modules
    'demo content module' => 'openpublic_document_demo',
    'permissions' => array(
      'create document content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
      'delete any document content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'delete own document content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'edit any document content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
      ),
      'edit own document content' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
    ),
  );
}
