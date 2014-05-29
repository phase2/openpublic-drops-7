<?php
/**
 * @file
 * openpublic_most_popular.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openpublic_most_popular_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function openpublic_most_popular_views_api() {
  return array("api" => "3.0");
}
