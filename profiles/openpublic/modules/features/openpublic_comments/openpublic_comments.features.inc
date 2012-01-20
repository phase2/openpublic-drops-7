<?php
/**
 * @file
 * openpublic_comments.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function openpublic_comments_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implementation of hook_views_api().
 */
function openpublic_comments_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
