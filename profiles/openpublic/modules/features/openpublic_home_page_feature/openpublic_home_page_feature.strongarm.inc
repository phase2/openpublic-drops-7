<?php
/**
 * @file
 * openpublic_home_page_feature.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function openpublic_home_page_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_home_page_feature';
  $strongarm->value = 0;
  $export['comment_anonymous_home_page_feature'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_home_page_feature';
  $strongarm->value = 1;
  $export['comment_default_mode_home_page_feature'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_home_page_feature';
  $strongarm->value = '50';
  $export['comment_default_per_page_home_page_feature'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_home_page_feature';
  $strongarm->value = 1;
  $export['comment_form_location_home_page_feature'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_home_page_feature';
  $strongarm->value = '2';
  $export['comment_home_page_feature'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_home_page_feature';
  $strongarm->value = '1';
  $export['comment_preview_home_page_feature'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_home_page_feature';
  $strongarm->value = 1;
  $export['comment_subject_field_home_page_feature'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_home_page_feature';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_home_page_feature'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_home_page_feature';
  $strongarm->value = '0';
  $export['node_preview_home_page_feature'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_home_page_feature';
  $strongarm->value = 1;
  $export['show_diff_inline_home_page_feature'] = $strongarm;

  return $export;
}
