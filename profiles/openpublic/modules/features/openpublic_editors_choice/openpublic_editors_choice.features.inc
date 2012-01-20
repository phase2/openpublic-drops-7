<?php
/**
 * @file
 * openpublic_editors_choice.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function openpublic_editors_choice_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_node_info().
 */
function openpublic_editors_choice_node_info() {
  $items = array(
    'editors_choice' => array(
      'name' => t('Editor\'s Choice'),
      'base' => 'node_content',
      'description' => t('A block of text/content that can be placed throughout the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
