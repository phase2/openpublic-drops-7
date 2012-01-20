<?php
/**
 * @file
 * openpublic_faqs.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function openpublic_faqs_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_faqs';
  $strongarm->value = 0;
  $export['comment_anonymous_faqs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_faqs';
  $strongarm->value = 1;
  $export['comment_default_mode_faqs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_faqs';
  $strongarm->value = '50';
  $export['comment_default_per_page_faqs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_faqs';
  $strongarm->value = '2';
  $export['comment_faqs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_faqs';
  $strongarm->value = 1;
  $export['comment_form_location_faqs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_faqs';
  $strongarm->value = '1';
  $export['comment_preview_faqs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_faqs';
  $strongarm->value = 1;
  $export['comment_subject_field_faqs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_faqs';
  $strongarm->value = array(
    0 => 'menu-footer-utility',
    1 => 'main-menu',
  );
  $export['menu_options_faqs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_faqs';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_faqs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_faqs';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_faqs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_faqs';
  $strongarm->value = '0';
  $export['node_preview_faqs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_faqs';
  $strongarm->value = 1;
  $export['show_diff_inline_faqs'] = $strongarm;

  return $export;
}
