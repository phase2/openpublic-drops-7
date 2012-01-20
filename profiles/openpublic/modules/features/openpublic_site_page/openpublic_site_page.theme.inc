<?php

/*
 * implimentation of hook_theme()
 */
function openpublic_site_page_theme($existing) {
  $item = $existing['node'];
  $item['path'] = drupal_get_path('module', 'openpublic_site_page') ."/theme";
  $item['template'] = 'node--site-page';
  return array("node__site_page" => $item);
}
function openpublic_site_page_preprocess_node($vars) {
}
