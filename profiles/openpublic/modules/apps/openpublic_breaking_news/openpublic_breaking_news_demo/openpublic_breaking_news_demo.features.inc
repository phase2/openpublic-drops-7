<?php
/**
 * @file
 * openpublic_breaking_news_demo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openpublic_breaking_news_demo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}
