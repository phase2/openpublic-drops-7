<?php
/**
 * @file
 * openpublic_person.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openpublic_person_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'field_author_content_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Authored  Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author (field_author) */
  $handler->display->display_options['arguments']['field_author_nid']['id'] = 'field_author_nid';
  $handler->display->display_options['arguments']['field_author_nid']['table'] = 'field_data_field_author';
  $handler->display->display_options['arguments']['field_author_nid']['field'] = 'field_author_nid';
  $handler->display->display_options['arguments']['field_author_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_author_nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_author_nid']['title'] = '%1\'s Content';
  $handler->display->display_options['arguments']['field_author_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_author_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_author_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_author_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_author_nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_author_nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_author_nid']['validate_options']['types'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['arguments']['field_author_nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['arguments']['field_author_nid']['validate']['fail'] = 'access denied';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'node/%/authored-content';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $translatables['field_author_content_list'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('%1\'s Content'),
    t('Page'),
    t('Block'),
  );
  $export['field_author_content_list'] = $view;

  $view = new view();
  $view->name = 'person_reference_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Persons list (references dialog)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_profile_photo']['id'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['label'] = '';
  $handler->display->display_options['fields']['field_profile_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_profile_last_name']['id'] = 'field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['field'] = 'field_profile_last_name';
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_profile_first_name']['id'] = 'field_profile_first_name';
  $handler->display->display_options['fields']['field_profile_first_name']['table'] = 'field_data_field_profile_first_name';
  $handler->display->display_options['fields']['field_profile_first_name']['field'] = 'field_profile_first_name';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_profile_department']['id'] = 'field_profile_department';
  $handler->display->display_options['fields']['field_profile_department']['table'] = 'field_data_field_profile_department';
  $handler->display->display_options['fields']['field_profile_department']['field'] = 'field_profile_department';
  /* Field: Content: Division */
  $handler->display->display_options['fields']['field_profile_division']['id'] = 'field_profile_division';
  $handler->display->display_options['fields']['field_profile_division']['table'] = 'field_data_field_profile_division';
  $handler->display->display_options['fields']['field_profile_division']['field'] = 'field_profile_division';
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_profile_job_title']['id'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['field'] = 'field_profile_job_title';
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_profile_organization']['id'] = 'field_profile_organization';
  $handler->display->display_options['fields']['field_profile_organization']['table'] = 'field_data_field_profile_organization';
  $handler->display->display_options['fields']['field_profile_organization']['field'] = 'field_profile_organization';
  /* Sort criterion: Content: Last Name (field_profile_last_name) */
  $handler->display->display_options['sorts']['field_profile_last_name_value']['id'] = 'field_profile_last_name_value';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['field'] = 'field_profile_last_name_value';
  /* Sort criterion: Content: First Name (field_profile_first_name) */
  $handler->display->display_options['sorts']['field_profile_first_name_value']['id'] = 'field_profile_first_name_value';
  $handler->display->display_options['sorts']['field_profile_first_name_value']['table'] = 'field_data_field_profile_first_name';
  $handler->display->display_options['sorts']['field_profile_first_name_value']['field'] = 'field_profile_first_name_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Last Name (field_profile_last_name) */
  $handler->display->display_options['filters']['field_profile_last_name_value']['id'] = 'field_profile_last_name_value';
  $handler->display->display_options['filters']['field_profile_last_name_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['filters']['field_profile_last_name_value']['field'] = 'field_profile_last_name_value';
  $handler->display->display_options['filters']['field_profile_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_profile_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_profile_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_last_name_value']['expose']['operator_id'] = 'field_profile_last_name_value_op';
  $handler->display->display_options['filters']['field_profile_last_name_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_profile_last_name_value']['expose']['operator'] = 'field_profile_last_name_value_op';
  $handler->display->display_options['filters']['field_profile_last_name_value']['expose']['identifier'] = 'field_profile_last_name_value';
  $handler->display->display_options['filters']['field_profile_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: First Name (field_profile_first_name) */
  $handler->display->display_options['filters']['field_profile_first_name_value']['id'] = 'field_profile_first_name_value';
  $handler->display->display_options['filters']['field_profile_first_name_value']['table'] = 'field_data_field_profile_first_name';
  $handler->display->display_options['filters']['field_profile_first_name_value']['field'] = 'field_profile_first_name_value';
  $handler->display->display_options['filters']['field_profile_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_profile_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_profile_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_first_name_value']['expose']['operator_id'] = 'field_profile_first_name_value_op';
  $handler->display->display_options['filters']['field_profile_first_name_value']['expose']['label'] = 'First Name';
  $handler->display->display_options['filters']['field_profile_first_name_value']['expose']['operator'] = 'field_profile_first_name_value_op';
  $handler->display->display_options['filters']['field_profile_first_name_value']['expose']['identifier'] = 'field_profile_first_name_value';
  $handler->display->display_options['filters']['field_profile_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Department (field_profile_department) */
  $handler->display->display_options['filters']['field_profile_department_value']['id'] = 'field_profile_department_value';
  $handler->display->display_options['filters']['field_profile_department_value']['table'] = 'field_data_field_profile_department';
  $handler->display->display_options['filters']['field_profile_department_value']['field'] = 'field_profile_department_value';
  $handler->display->display_options['filters']['field_profile_department_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_profile_department_value']['group'] = 1;
  $handler->display->display_options['filters']['field_profile_department_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_department_value']['expose']['operator_id'] = 'field_profile_department_value_op';
  $handler->display->display_options['filters']['field_profile_department_value']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_profile_department_value']['expose']['operator'] = 'field_profile_department_value_op';
  $handler->display->display_options['filters']['field_profile_department_value']['expose']['identifier'] = 'field_profile_department_value';
  $handler->display->display_options['filters']['field_profile_department_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Division (field_profile_division) */
  $handler->display->display_options['filters']['field_profile_division_value']['id'] = 'field_profile_division_value';
  $handler->display->display_options['filters']['field_profile_division_value']['table'] = 'field_data_field_profile_division';
  $handler->display->display_options['filters']['field_profile_division_value']['field'] = 'field_profile_division_value';
  $handler->display->display_options['filters']['field_profile_division_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_profile_division_value']['group'] = 1;
  $handler->display->display_options['filters']['field_profile_division_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_division_value']['expose']['operator_id'] = 'field_profile_division_value_op';
  $handler->display->display_options['filters']['field_profile_division_value']['expose']['label'] = 'Division';
  $handler->display->display_options['filters']['field_profile_division_value']['expose']['operator'] = 'field_profile_division_value_op';
  $handler->display->display_options['filters']['field_profile_division_value']['expose']['identifier'] = 'field_profile_division_value';
  $handler->display->display_options['filters']['field_profile_division_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Email Address (field_profile_email) */
  $handler->display->display_options['filters']['field_profile_email_value']['id'] = 'field_profile_email_value';
  $handler->display->display_options['filters']['field_profile_email_value']['table'] = 'field_data_field_profile_email';
  $handler->display->display_options['filters']['field_profile_email_value']['field'] = 'field_profile_email_value';
  $handler->display->display_options['filters']['field_profile_email_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_profile_email_value']['group'] = 1;
  $handler->display->display_options['filters']['field_profile_email_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_email_value']['expose']['operator_id'] = 'field_profile_email_value_op';
  $handler->display->display_options['filters']['field_profile_email_value']['expose']['label'] = 'Email Address';
  $handler->display->display_options['filters']['field_profile_email_value']['expose']['operator'] = 'field_profile_email_value_op';
  $handler->display->display_options['filters']['field_profile_email_value']['expose']['identifier'] = 'field_profile_email_value';
  $handler->display->display_options['filters']['field_profile_email_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Job Title (field_profile_job_title) */
  $handler->display->display_options['filters']['field_profile_job_title_value']['id'] = 'field_profile_job_title_value';
  $handler->display->display_options['filters']['field_profile_job_title_value']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['filters']['field_profile_job_title_value']['field'] = 'field_profile_job_title_value';
  $handler->display->display_options['filters']['field_profile_job_title_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_profile_job_title_value']['group'] = 1;
  $handler->display->display_options['filters']['field_profile_job_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_job_title_value']['expose']['operator_id'] = 'field_profile_job_title_value_op';
  $handler->display->display_options['filters']['field_profile_job_title_value']['expose']['label'] = 'Job Title';
  $handler->display->display_options['filters']['field_profile_job_title_value']['expose']['operator'] = 'field_profile_job_title_value_op';
  $handler->display->display_options['filters']['field_profile_job_title_value']['expose']['identifier'] = 'field_profile_job_title_value';
  $handler->display->display_options['filters']['field_profile_job_title_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Organization (field_profile_organization) */
  $handler->display->display_options['filters']['field_profile_organization_value']['id'] = 'field_profile_organization_value';
  $handler->display->display_options['filters']['field_profile_organization_value']['table'] = 'field_data_field_profile_organization';
  $handler->display->display_options['filters']['field_profile_organization_value']['field'] = 'field_profile_organization_value';
  $handler->display->display_options['filters']['field_profile_organization_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_profile_organization_value']['group'] = 1;
  $handler->display->display_options['filters']['field_profile_organization_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_organization_value']['expose']['operator_id'] = 'field_profile_organization_value_op';
  $handler->display->display_options['filters']['field_profile_organization_value']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['field_profile_organization_value']['expose']['operator'] = 'field_profile_organization_value_op';
  $handler->display->display_options['filters']['field_profile_organization_value']['expose']['identifier'] = 'field_profile_organization_value';
  $handler->display->display_options['filters']['field_profile_organization_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Phone Number (field_profile_phone) */
  $handler->display->display_options['filters']['field_profile_phone_value']['id'] = 'field_profile_phone_value';
  $handler->display->display_options['filters']['field_profile_phone_value']['table'] = 'field_data_field_profile_phone';
  $handler->display->display_options['filters']['field_profile_phone_value']['field'] = 'field_profile_phone_value';
  $handler->display->display_options['filters']['field_profile_phone_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_profile_phone_value']['group'] = 1;
  $handler->display->display_options['filters']['field_profile_phone_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_profile_phone_value']['expose']['operator_id'] = 'field_profile_phone_value_op';
  $handler->display->display_options['filters']['field_profile_phone_value']['expose']['label'] = 'Phone Number';
  $handler->display->display_options['filters']['field_profile_phone_value']['expose']['operator'] = 'field_profile_phone_value_op';
  $handler->display->display_options['filters']['field_profile_phone_value']['expose']['identifier'] = 'field_profile_phone_value';
  $handler->display->display_options['filters']['field_profile_phone_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );

  /* Display: Reference dialog Search */
  $handler = $view->new_display('references_dialog', 'Reference dialog Search', 'references_dialog_1');
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attach'] = array(
    0 => 'node:field_author:blog_entry',
    1 => 'node:field_author:photo',
    2 => 'node:field_author:document',
  );
  $translatables['person_reference_list'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Last Name'),
    t('First Name'),
    t('Department'),
    t('Division'),
    t('Job Title'),
    t('Organization'),
    t('Email Address'),
    t('Phone Number'),
    t('Reference dialog Search'),
  );
  $export['person_reference_list'] = $view;

  $view = new view();
  $view->name = 'profile_list';
  $view->description = 'Displays of profile';
  $view->tag = 'content';
  $view->base_table = 'node';
  $view->human_name = 'Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Staff Directory';
  $handler->display->display_options['css_class'] = 'staff-page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Leadership';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['entity_id_9']['id'] = 'entity_id_9';
  $handler->display->display_options['fields']['entity_id_9']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['entity_id_9']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['entity_id_9']['label'] = '';
  $handler->display->display_options['fields']['entity_id_9']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_9']['element_wrapper_class'] = 'staff-photo';
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
  $handler->display->display_options['fields']['entity_id_8']['element_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_8']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id_8']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['entity_id_8']['element_wrapper_class'] = 'staff-leadership';
  $handler->display->display_options['fields']['entity_id_8']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id_8']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['entity_id_8']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title_1]';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['entity_id_6']['id'] = 'entity_id_6';
  $handler->display->display_options['fields']['entity_id_6']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['fields']['entity_id_6']['field'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['entity_id_6']['label'] = '';
  $handler->display->display_options['fields']['entity_id_6']['element_type'] = 'div';
  $handler->display->display_options['fields']['entity_id_6']['element_class'] = 'staff-position';
  $handler->display->display_options['fields']['entity_id_6']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['entity_id_5']['id'] = 'entity_id_5';
  $handler->display->display_options['fields']['entity_id_5']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['entity_id_5']['field'] = 'body';
  $handler->display->display_options['fields']['entity_id_5']['label'] = '';
  $handler->display->display_options['fields']['entity_id_5']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['entity_id_5']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['entity_id_5']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['entity_id_5']['element_type'] = 'p';
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last Name (field_profile_last_name) */
  $handler->display->display_options['sorts']['field_profile_last_name_value']['id'] = 'field_profile_last_name_value';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['field'] = 'field_profile_last_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h4';
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['entity_id_3']['label'] = '';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['entity_id_4']['id'] = 'entity_id_4';
  $handler->display->display_options['fields']['entity_id_4']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['entity_id_4']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['entity_id_4']['label'] = '';
  $handler->display->display_options['fields']['entity_id_4']['element_wrapper_class'] = 'photo';
  $handler->display->display_options['fields']['entity_id_4']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id_4']['settings'] = array(
    'image_style' => 'right-sidebar-thumbnails',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last Name (field_profile_last_name) */
  $handler->display->display_options['sorts']['field_profile_last_name_value']['id'] = 'field_profile_last_name_value';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['field'] = 'field_profile_last_name_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'by [title_1]';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_profile_organization';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_profile_organization';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['text'] = '[entity_id]';
  $handler->display->display_options['fields']['entity_id']['element_type'] = 'span';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'profile' => 'profile',
  );
  $translatables['profile_list'] = array(
    t('Defaults'),
    t('Staff Directory'),
    t('More Leadership'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('[title_1]'),
    t('All'),
    t('more'),
    t('Leadership Directory'),
    t('Leadership'),
    t('Leadership Block'),
    t('Documents author'),
    t('by [title_1]'),
    t('[entity_id]'),
  );
  $export['profile_list'] = $view;

  return $export;
}
