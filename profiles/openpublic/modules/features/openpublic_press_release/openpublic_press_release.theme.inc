<?php

/*
 * implimentation of hook_preprocess_node
 * we are adding our css and changing the theme function for rendering field_issues
 */
function openpublic_press_release_preprocess_node(&$vars) {
  if ($vars['node']->type == 'press_release' && $vars['page']) {
    drupal_add_css(drupal_get_path('module', 'openpublic_press_release') . '/theme/node--press-release.css', 'file');
    $vars['content']['field_taxonomy_issues']['#theme'] = 'field_issues';

  }
}
/*
 * implimentation of hook_preprocess_views_view
 * setting css for our view
 */
function openpublic_press_release_preprocess_views_view(&$vars) {
  if($vars['name'] == 'press_releases' && $vars['display_id'] == 'page_1') {
    drupal_add_css(drupal_get_path('module', 'openpublic_press_release') . '/theme/press_release.css');
  }

}

/*
 * a theme function that is a replacement for theme_field
 * it simply renders all children and returns them imploded we a , seperator
 */
function theme_field_issues($variables) {
  $output = array();
  // Render the items.
  foreach ($variables['element'] as $delta => $item) {
    if (is_numeric($delta)) {
      $output[]= drupal_render($item);
    }
  }
  return implode(", ", $output);
}

