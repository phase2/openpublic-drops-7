<?php
/**
 * @file
 * openpublic_promotion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openpublic_promotion_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openpublic_promotion_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entity_boxes_type().
 */
function openpublic_promotion_default_entity_boxes_type() {
  $items = array();
  $items['promotion'] = entity_import('entity_boxes_type', '{
    "type" : "promotion",
    "label" : "Promotion",
    "weight" : "0",
    "data" : "",
    "rdf_mapping" : []
  }');
  return $items;
}
