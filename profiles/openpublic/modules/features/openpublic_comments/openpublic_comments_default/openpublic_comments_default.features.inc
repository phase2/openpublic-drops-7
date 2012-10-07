<?php
/**
 * @file
 * openpublic_comments_default.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openpublic_comments_default_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
