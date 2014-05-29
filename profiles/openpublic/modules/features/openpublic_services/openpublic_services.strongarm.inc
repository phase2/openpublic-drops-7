<?php
/**
 * @file
 * openpublic_services.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function openpublic_services_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_services';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_services'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_services_pattern';
  $strongarm->value = 'service/[node:title]';
  $export['pathauto_node_services_pattern'] = $strongarm;

  return $export;
}
