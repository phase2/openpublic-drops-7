<?php
/**
 * @file
 * openpublic_topic.features.inc
 */

/**
 * Implements hook_views_api().
 */
function openpublic_topic_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entity_boxes_type().
 */
function openpublic_topic_default_entity_boxes_type() {
  $items = array();
  $items['topic_box'] = entity_import('entity_boxes_type', '{
    "type" : "topic_box",
    "label" : "Topic Box",
    "weight" : "0",
    "data" : "",
    "rdf_mapping" : []
  }');
  return $items;
}
