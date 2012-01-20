<?php
/**
 * @file
 * openpublic_faqs.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function openpublic_faqs_ctools_plugin_api() {
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
function openpublic_faqs_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_node_info().
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
  return $items;
}
