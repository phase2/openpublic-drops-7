<?php
/**
 * @file
 * openpublic_calendar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openpublic_calendar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function event_calendars_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
