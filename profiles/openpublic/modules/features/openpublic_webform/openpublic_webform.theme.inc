<?php
/*
 * implimentation of hook_preprocess_node
 * we are adding our css and changing the theme function for rendering field_issues
 */
function openpublic_webform_preprocess_node(&$vars) {
  if ($vars['node']->type == 'webform' && $vars['page']) {
    drupal_add_css(drupal_get_path('module', 'openpublic_webform') . '/theme/node--webform.css', 'file');
  }
}
