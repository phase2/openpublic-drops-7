<?php
/**
 * @file
 * openpublic_breaking_news_demo.box.inc
 */

/**
 * Implements hook_default_box().
 */
function openpublic_breaking_news_demo_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-54682cbd';
  $box->plugin_key = 'breaking_news';
  $box->title = '';
  $box->description = 'Default home page breaking news';
  $box->options = array(
    'entity_boxes_id' => '',
    'additional_classes' => '',
  );
  $box->entity_boxes = array(
    'field_breaking_news_node' => array(
      'und' => array(
        0 => array(
          'machine_name' => 'abc_agency_announces_up_top50_million_for_fuel_cell_research',
        ),
      ),
    ),
  );
  $export['box-54682cbd'] = $box;

  return $export;
}
