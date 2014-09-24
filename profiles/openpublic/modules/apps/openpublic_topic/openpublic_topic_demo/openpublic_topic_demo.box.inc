<?php
/**
 * @file
 * openpublic_topic_demo.box.inc
 */

/**
 * Implements hook_default_box().
 */
function openpublic_topic_demo_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-282964a7';
  $box->plugin_key = 'topic_box';
  $box->title = 'ABC Agency';
  $box->description = 'Posts tagged with ABC Agency';
  $box->options = array(
    'entity_boxes_id' => '',
    'additional_classes' => '',
  );
  $box->entity_boxes = array(
    'field_topic_box_display' => array(
      'und' => array(
        0 => array(
          'value' => 'teaser',
        ),
      ),
    ),
    'field_topic_box_topic' => array(
      'und' => array(
        0 => array(
          'vocabulary_machine_name' => 'topic',
          'name' => 'ABC agency',
        ),
      ),
    ),
  );
  $export['box-282964a7'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-91f222e0';
  $box->plugin_key = 'topic_box';
  $box->title = 'Common Pages';
  $box->description = 'Posts tagged with Main Site Page';
  $box->options = array(
    'entity_boxes_id' => '',
    'additional_classes' => '',
  );
  $box->entity_boxes = array(
    'field_topic_box_display' => array(
      'und' => array(
        0 => array(
          'value' => 'title',
        ),
      ),
    ),
    'field_topic_box_topic' => array(
      'und' => array(
        0 => array(
          'vocabulary_machine_name' => 'topic',
          'name' => 'Main Site Page',
        ),
      ),
    ),
  );
  $export['box-91f222e0'] = $box;

  return $export;
}
