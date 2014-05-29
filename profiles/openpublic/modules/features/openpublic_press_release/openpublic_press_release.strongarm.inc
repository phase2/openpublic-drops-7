<?php
/**
 * @file
 * openpublic_press_release.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function openpublic_press_release_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_press_release';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_press_release'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_press_release';
  $strongarm->value = '0';
  $export['node_preview_press_release'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_press_release';
  $strongarm->value = 0;
  $export['node_submitted_press_release'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_press_release_pattern';
  $strongarm->value = 'press-release/[node:title]';
  $export['pathauto_node_press_release_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_press_release';
  $strongarm->value = 1;
  $export['show_diff_inline_press_release'] = $strongarm;

  return $export;
}
