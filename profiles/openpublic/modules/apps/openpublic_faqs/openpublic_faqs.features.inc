<?php
/**
 * @file
 * openpublic_faqs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openpublic_faqs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openpublic_faqs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openpublic_faqs_node_info() {
  $items = array(
    'faqs' => array(
      'name' => t('FAQs'),
      'base' => 'node_content',
      'description' => t('text content in a question/answer format.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
