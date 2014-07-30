<?php
/**
 * @file
 * openpublic_calendar.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function openpublic_calendar_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_ical';
  $strongarm->value = 'Ymd\\THi\\0\\0\\Z';
  $export['date_format_ical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fullcalendar_options';
  $strongarm->value = array(
    'firstHour' => TRUE,
    'minTime' => TRUE,
    'maxTime' => TRUE,
    'slotMinutes' => TRUE,
    'defaultEventMinutes' => TRUE,
    'allDaySlot' => TRUE,
    'weekends' => TRUE,
    'lazyFetching' => TRUE,
    'disableDragging' => TRUE,
    'disableResizing' => TRUE,
    'dragRevertDuration' => TRUE,
    'dayClick' => TRUE,
  );
  $export['fullcalendar_options'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_event';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_event';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_event';
  $strongarm->value = '1';
  $export['node_preview_event'] = $strongarm;

  return $export;
}
