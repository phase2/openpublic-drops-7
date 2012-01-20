<?php
/**
 * @file
 * openpublic_captcha.captcha.inc
 */

/**
 * Implementation of hook_captcha_default_points().
 */
function openpublic_captcha_captcha_default_points() {
  $export = array();

  $captcha = new stdClass;
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_blog_entry_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_blog_entry_form'] = $captcha;

  $captcha = new stdClass;
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_document_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_document_form'] = $captcha;

  $captcha = new stdClass;
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_editors_choice_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_editors_choice_form'] = $captcha;

  $captcha = new stdClass;
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_home_page_feature_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_home_page_feature_form'] = $captcha;

  $captcha = new stdClass;
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_media_gallery_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_media_gallery_form'] = $captcha;

  $captcha = new stdClass;
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_photo_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_photo_form'] = $captcha;

  $captcha = new stdClass;
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_press_release_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_press_release_form'] = $captcha;

  $captcha = new stdClass;
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_profile_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_profile_form'] = $captcha;

  $captcha = new stdClass;
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_resource_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_resource_form'] = $captcha;

  $captcha = new stdClass;
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_section_front_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_section_front_form'] = $captcha;

  $captcha = new stdClass;
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_services_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_services_form'] = $captcha;

  $captcha = new stdClass;
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_site_page_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_site_page_form'] = $captcha;

  $captcha = new stdClass;
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_webform_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_webform_form'] = $captcha;

  $captcha = new stdClass;
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'user_login';
  $captcha->module = '';
  $captcha->captcha_type = '';
  $export['user_login'] = $captcha;

  $captcha = new stdClass;
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'user_login_block';
  $captcha->module = '';
  $captcha->captcha_type = '';
  $export['user_login_block'] = $captcha;

  $captcha = new stdClass;
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'user_pass';
  $captcha->module = '';
  $captcha->captcha_type = '';
  $export['user_pass'] = $captcha;

  $captcha = new stdClass;
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'user_register_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['user_register_form'] = $captcha;

  return $export;
}
