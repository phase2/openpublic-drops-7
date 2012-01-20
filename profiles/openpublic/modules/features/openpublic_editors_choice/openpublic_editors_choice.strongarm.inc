<?php
/**
 * @file
 * openpublic_editors_choice.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function openpublic_editors_choice_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_editors_choice';
  $strongarm->value = '';
  $export['additional_settings__active_tab_editors_choice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_nodetype_editors_choice';
  $strongarm->value = 1;
  $export['addthis_nodetype_editors_choice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_editors_choice';
  $strongarm->value = 0;
  $export['comment_anonymous_editors_choice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_editors_choice';
  $strongarm->value = 1;
  $export['comment_default_mode_editors_choice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_editors_choice';
  $strongarm->value = '50';
  $export['comment_default_per_page_editors_choice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_editors_choice';
  $strongarm->value = '2';
  $export['comment_editors_choice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_editors_choice';
  $strongarm->value = 1;
  $export['comment_form_location_editors_choice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_editors_choice';
  $strongarm->value = '1';
  $export['comment_preview_editors_choice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_editors_choice';
  $strongarm->value = 1;
  $export['comment_subject_field_editors_choice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_editors_choice';
  $strongarm->value = 1;
  $export['enable_revisions_page_editors_choice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_editors_choice';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_editors_choice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_editors_choice';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_editors_choice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_editors_choice';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_editors_choice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_editors_choice';
  $strongarm->value = '1';
  $export['node_preview_editors_choice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_editors_choice';
  $strongarm->value = 0;
  $export['node_submitted_editors_choice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeblock_editors_choice';
  $strongarm->value = '1';
  $export['nodeblock_editors_choice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_editors_choice';
  $strongarm->value = 0;
  $export['show_diff_inline_editors_choice'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_editors_choice';
  $strongarm->value = 1;
  $export['show_preview_changes_editors_choice'] = $strongarm;

  return $export;
}
