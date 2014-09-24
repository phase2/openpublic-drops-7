<?php
/**
 * @file
 * openpublic_home_page_feature.box.inc
 */

/**
 * Implements hook_default_box().
 */
function openpublic_home_page_feature_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-41ba8a2d';
  $box->plugin_key = 'twitter';
  $box->title = 'State Department Tweets';
  $box->description = 'Openpublic Home Twitter Block';
  $box->options = array(
    'title' => 'US State Department on Twitter',
    'search' => '@StateDept',
    'max_results' => '5',
    'additional_classes' => '',
    'rts' => 1,
    'exclude_replies' => 0,
  );
  $export['box-41ba8a2d'] = $box;

  return $export;
}
