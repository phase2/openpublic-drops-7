<?php
/**
 * @file
 * openpublic_site_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openpublic_site_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
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
  drupal_alter('node_info', $items);
  return $items;
}
