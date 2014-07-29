<?php

/**
 * @file
 * Providing extra functionality for the BoxEntity UI via views.
 */


/**
 * Implements hook_views_data()
 */
function entity_boxes_views_data_alter(&$data) { 
  $data['entity_boxes']['link_entity_boxes'] = array(
    'field' => array(
      'title' => t('Link'),
      'help' => t('Provide a link to the entity_boxes.'),
      'handler' => 'entity_boxes_handler_link_field',
    ),
  );
  $data['entity_boxes']['edit_entity_boxes'] = array(
    'field' => array(
      'title' => t('Edit Link'),
      'help' => t('Provide a link to the edit form for the entity_boxes.'),
      'handler' => 'entity_boxes_handler_edit_link_field',
    ),
  );
  $data['entity_boxes']['delete_entity_boxes'] = array(
    'field' => array(
      'title' => t('Delete Link'),
      'help' => t('Provide a link to delete the entity_boxes.'),
      'handler' => 'entity_boxes_handler_delete_link_field',
    ),
  );
  // The content of this field is decided based on the menu structure that
  // follows entity_boxes/entity_boxes/%entity_boxes_id/op
  $data['entity_boxes']['operations'] = array(
    'field' => array(
      'title' => t('Operations links'),
      'help' => t('Display all operations available for this entity_boxes.'),
      'handler' => 'entity_boxes_handler_entity_boxes_operations_field',
    ),
  );
}


/**
 * Implements hook_views_default_views().
 */
function entity_boxes_views_default_views() {
  $views = array();

  $view = new view;
  $view->name = 'entity_boxes';
  $view->description = 'A list of all entity_boxes';
  $view->tag = 'entity_boxes';
  $view->base_table = 'entity_boxes';
  $view->human_name = 'Entity Boxes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Entity Boxes';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create any entity_boxes type';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'entity_boxes_id' => 'entity_boxes_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entity_boxes_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty ';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No entity_boxes have been created yet';
  /* Field: Box: Box ID */
  $handler->display->display_options['fields']['entity_boxes_id']['id'] = 'entity_boxes_id';
  $handler->display->display_options['fields']['entity_boxes_id']['table'] = 'entity_boxes';
  $handler->display->display_options['fields']['entity_boxes_id']['field'] = 'entity_boxes_id';
  $handler->display->display_options['fields']['entity_boxes_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_boxes_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_boxes_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_boxes_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['entity_boxes_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['entity_boxes_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['entity_boxes_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_boxes_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_boxes_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_boxes_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_boxes_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_boxes_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_boxes_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_boxes_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_boxes_id']['empty_zero'] = 0;
  /* Field: Box: Label */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'entity_boxes';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['description']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['description']['hide_alter_empty'] = 1;
  /* Field: Box: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'entity_boxes';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  /* Field: Box: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'entity_boxes';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  /* Field: Box: Link */
  $handler->display->display_options['fields']['link_entity_boxes']['id'] = 'link_entity_boxes';
  $handler->display->display_options['fields']['link_entity_boxes']['table'] = 'entity_boxes';
  $handler->display->display_options['fields']['link_entity_boxes']['field'] = 'link_entity_boxes';
  $handler->display->display_options['fields']['link_entity_boxes']['label'] = 'View';
  $handler->display->display_options['fields']['link_entity_boxes']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['link_entity_boxes']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['link_entity_boxes']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['link_entity_boxes']['alter']['external'] = 0;
  $handler->display->display_options['fields']['link_entity_boxes']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['link_entity_boxes']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['link_entity_boxes']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['link_entity_boxes']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['link_entity_boxes']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['link_entity_boxes']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['link_entity_boxes']['alter']['html'] = 0;
  $handler->display->display_options['fields']['link_entity_boxes']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['link_entity_boxes']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['link_entity_boxes']['hide_empty'] = 0;
  $handler->display->display_options['fields']['link_entity_boxes']['empty_zero'] = 0;
  /* Field: Box: Operations links */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'entity_boxes';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  $handler->display->display_options['fields']['operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['operations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['operations']['empty_zero'] = 0;
  
  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'entity_boxes_admin_page');
  $handler->display->display_options['path'] = 'admin/content/entity_boxes/list';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'List';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Entity Boxes';
  $handler->display->display_options['tab_options']['description'] = 'Manage entity_boxes';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';
  $translatables['entity_boxes'] = array(
    t('Master'),
    t('Entity Boxes'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Empty'),
    t('No entity_boxes have been created yet'),
    t('BoxEntity ID'),
    t('.'),
    t(','),
    t('Name'),
    t('View'),
    t('Operations links'),
    t('Page'),
  );
  $views[] = $view;
  return $views;

}
