<?php
/**
 * @file
 * phase2_document.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function phase2_document_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function phase2_document_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function phase2_document_node_info() {
  $items = array(
    'document' => array(
      'name' => t('Document'),
      'base' => 'node_content',
      'description' => t('A document with information related to files such as PDFs and DOCs.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
