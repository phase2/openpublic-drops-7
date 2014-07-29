<?php
/**
 * @file
 * openpublic_breaking_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openpublic_breaking_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function openpublic_breaking_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entity_boxes_type().
 */
function openpublic_breaking_news_default_entity_boxes_type() {
  $items = array();
  $items['breaking_news'] = entity_import('entity_boxes_type', '{
    "type" : "breaking_news",
    "label" : "Breaking News",
    "weight" : "0",
    "data" : "",
    "rdf_mapping" : []
  }');
  return $items;
}
