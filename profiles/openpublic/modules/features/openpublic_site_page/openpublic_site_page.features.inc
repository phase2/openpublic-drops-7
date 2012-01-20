<?php
/**
 * @file
 * openpublic_site_page.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function openpublic_site_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_views_api().
 */
function openpublic_site_page_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_node_info().
 */
function openpublic_site_page_node_info() {
  $items = array(
    'site_page' => array(
      'name' => t('Site Page'),
      'base' => 'node_content',
      'description' => t('A simple page of static HTML content, to be used for infrequently updated information.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
