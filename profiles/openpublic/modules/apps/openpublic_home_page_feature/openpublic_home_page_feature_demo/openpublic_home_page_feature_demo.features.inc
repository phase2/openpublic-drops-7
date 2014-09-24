<?php
/**
 * @file
 * openpublic_home_page_feature_demo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openpublic_home_page_feature_demo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}
