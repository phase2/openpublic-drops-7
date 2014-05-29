<?php
/**
 * @file
 * openpublic_breaking_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openpublic_breaking_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function openpublic_breaking_news_views_api() {
  return array("api" => "3.0");
}
