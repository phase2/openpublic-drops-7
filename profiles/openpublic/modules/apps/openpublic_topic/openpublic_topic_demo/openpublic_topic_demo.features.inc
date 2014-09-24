<?php
/**
 * @file
 * openpublic_topic_demo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openpublic_topic_demo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}
