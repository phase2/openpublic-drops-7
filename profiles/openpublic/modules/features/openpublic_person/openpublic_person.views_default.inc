<?php
/**
 * @file
 * openpublic_person.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function openpublic_person_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'profiles';
  $view->description = 'Displays of profile';
  $view->tag = 'content';
  $view->base_table = 'node';
  $view->human_name = 'Profiles';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Staff Directory';
  $handler->display->display_options['css_class'] = 'staff-page';
  $handler->display->display_options['use_more_text'] = 'More Leadership';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['entity_id_9']['id'] = 'entity_id_9';
  $handler->display->display_options['fields']['entity_id_9']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['entity_id_9']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['entity_id_9']['label'] = '';
  $handler->display->display_options['fields']['entity_id_9']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_9']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_9']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_9']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_9']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_9']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_9']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_9']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_9']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_9']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_9']['element_wrapper_class'] = 'staff-photo';
  $handler->display->display_options['fields']['entity_id_9']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_9']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_9']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id_9']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id_9']['settings'] = array(
    'image_style' => 'list-page-thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Leadership */
  $handler->display->display_options['fields']['entity_id_8']['id'] = 'entity_id_8';
  $handler->display->display_options['fields']['entity_id_8']['table'] = 'field_data_field_profile_leadership';
  $handler->display->display_options['fields']['entity_id_8']['field'] = 'field_profile_leadership';
  $handler->display->display_options['fields']['entity_id_8']['label'] = '';
  $handler->display->display_options['fields']['entity_id_8']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id_8']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_8']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_8']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_8']['alter']['external'] = 0;
  $handler->display->display_options['fields']['entity_id_8']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['entity_id_8']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['entity_id_8']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['entity_id_8']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_8']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_8']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_8']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_8']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_8']['element_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_8']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_8']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_8']['element_wrapper_class'] = 'staff-leadership';
  $handler->display->display_options['fields']['entity_id_8']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_8']['hide_empty'] = 1;
  $handler->display->display_options['fields']['entity_id_8']['empty_zero'] = 1;
  $handler->display->display_options['fields']['entity_id_8']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_8']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title_1]';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['entity_id_6']['label'] = '';
  $handler->display->display_options['fields']['entity_id_6']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_6']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_6']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_6']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_6']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_6']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_6']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_6']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_6']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_6']['element_class'] = 'staff-position';
  $handler->display->display_options['fields']['entity_id_6']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_6']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_6']['hide_empty'] = 1;
  $handler->display->display_options['fields']['entity_id_6']['empty_zero'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'body';
  $handler->display->display_options['fields']['entity_id_5']['label'] = '';
  $handler->display->display_options['fields']['entity_id_5']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['entity_id_5']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_5']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_5']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['entity_id_5']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['entity_id_5']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['element_type'] = 'p';
  $handler->display->display_options['fields']['entity_id_5']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_5']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_5']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_5']['empty_zero'] = 0;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'author' => 'author',
    'profile' => 'profile',
  );

  /* Display: Staff Directory */
  $handler = $view->new_display('page', 'Staff Directory', 'page_1');
  $handler->display->display_options['path'] = 'staff-directory';

  /* Display: Leadership Directory */
  $handler = $view->new_display('page', 'Leadership Directory', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Leadership';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Leadership List';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['qids'] = array(
    'leadership' => 'leadership',
    'breaking_news' => 0,
    'home_page_rotator' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Sort criterion: Content: Last Name (field_profile_last_name) */
  $handler->display->display_options['sorts']['field_profile_last_name_value']['id'] = 'field_profile_last_name_value';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['field'] = 'field_profile_last_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'author' => 'author',
    'profile' => 'profile',
  );
  /* Filter criterion: Content: Staff Member (field_profile_staff) */
  $handler->display->display_options['filters']['field_profile_staff_value']['id'] = 'field_profile_staff_value';
  $handler->display->display_options['filters']['field_profile_staff_value']['table'] = 'field_data_field_profile_staff';
  $handler->display->display_options['filters']['field_profile_staff_value']['field'] = 'field_profile_staff_value';
  $handler->display->display_options['filters']['field_profile_staff_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Leadership (field_profile_leadership) */
  $handler->display->display_options['filters']['field_profile_leadership_value']['id'] = 'field_profile_leadership_value';
  $handler->display->display_options['filters']['field_profile_leadership_value']['table'] = 'field_data_field_profile_leadership';
  $handler->display->display_options['filters']['field_profile_leadership_value']['field'] = 'field_profile_leadership_value';
  $handler->display->display_options['filters']['field_profile_leadership_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'staff-directory/leadership';

  /* Display: Leadership Block */
  $handler = $view->new_display('block', 'Leadership Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Leadership';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'leadership-section';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Leadership List';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['qids'] = array(
    'leadership' => 'leadership',
    'breaking_news' => 0,
    'home_page_rotator' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['entity_id_3']['label'] = '';
  $handler->display->display_options['fields']['entity_id_3']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['empty_zero'] = 0;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['entity_id_4']['label'] = '';
  $handler->display->display_options['fields']['entity_id_4']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_4']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_4']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_4']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_4']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_4']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_4']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_4']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_4']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_4']['element_wrapper_class'] = 'photo';
  $handler->display->display_options['fields']['entity_id_4']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_4']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_4']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id_4']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id_4']['settings'] = array(
    'image_style' => 'right-sidebar-thumbnails',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['sorts']['position']['order'] = 'DESC';
  /* Sort criterion: Content: Last Name (field_profile_last_name) */
  $handler->display->display_options['sorts']['field_profile_last_name_value']['id'] = 'field_profile_last_name_value';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['field'] = 'field_profile_last_name_value';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'author' => 'author',
    'profile' => 'profile',
  );
  /* Filter criterion: Content: Leadership (field_profile_leadership) */
  $handler->display->display_options['filters']['field_profile_leadership_value']['id'] = 'field_profile_leadership_value';
  $handler->display->display_options['filters']['field_profile_leadership_value']['table'] = 'field_data_field_profile_leadership';
  $handler->display->display_options['filters']['field_profile_leadership_value']['field'] = 'field_profile_leadership_value';
  $handler->display->display_options['filters']['field_profile_leadership_value']['value'] = array(
    1 => '1',
  );

  /* Display: Documents author */
  $handler = $view->new_display('block', 'Documents author', 'documents_author');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'by [title_1]';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 0;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_profile_organization';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_profile_organization';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['text'] = '[entity_id]';
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id']['element_type'] = 'span';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'author' => 'author',
    'profile' => 'profile',
  );
  $export['profiles'] = $view;

  return $export;
}
