<?php
/**
 * @file
 * Code for the spartan theme.
 */

/**
 * Implements hook_system_themes_page_alter().
 *
 * Unset the Alpha/Omega themes from the appearance page
 * We don't want anyone enabling them directly
 *
 * Needs moved to module since theme isn't used for admin, but keeping here for reference
 */
function spartan_system_themes_page_alter(&$theme_groups) {
  $hidden = array(
    'alpha', 'omega',
  );
  foreach ($theme_groups as $state => &$group) {
    if ($state == 'disabled') {
      foreach ($theme_groups[$state] as $id => &$theme) {
        if (in_array($theme, $hidden)) {
          unset($theme_groups[$state][$id]);
        }
      }
    }
  }
}

/**
 * Implements hook_preprocess_region().
 */
function spartan_preprocess_region(&$vars) {
  global $language;

  switch ($vars['region']) {
    // Menu region.
    case 'menu':
      $footer_menu_cache = cache_get("footer_menu_data:" . $language->language) ;
      if ($footer_menu_cache) {
        $footer_menu = $footer_menu_cache->data;
      }
      else {
        $footer_menu = menu_tree_output(_spartan_menu_build_tree('main-menu', array('max_depth' => 2)));
        cache_set("footer_menu_data:" . $language->language, $footer_menu);
      }
      //set the active trail
      $active_trail = menu_get_active_trail();
      foreach ($active_trail as $trail) {
        if (isset($trail['mlid']) && isset($footer_menu[$trail['mlid'] ] )) {
          $footer_menu[$trail['mlid']]['#attributes']['class'][] = 'active-trail';
        }
      }
      $vars['dropdown_menu'] = $footer_menu;
    break;
    // Default footer content.
    case 'footer_first':
      $footer_menu_cache = cache_get("footer_menu_data:" . $language->language) ;
      if ($footer_menu_cache) {
        $footer_menu = $footer_menu_cache->data;
      }
      else {
        $footer_menu = menu_tree_output(_spartan_menu_build_tree('main-menu', array('max_depth' => 2)));
        cache_set("footer_menu_data:" . $language->language, $footer_menu);
      }
      //set the active trail
      $active_trail = menu_get_active_trail();
      foreach ($active_trail as $trail) {
        if (isset($trail['mlid']) && isset($footer_menu[$trail['mlid'] ] )) {
          $footer_menu[$trail['mlid']]['#attributes']['class'][] = 'active-trail';
        }
      }
      $vars['footer_menu'] = $footer_menu;

      $vars['site_name'] = $site_name = variable_get('site_name');
      $vars['footer_logo'] = l(theme('image', array('path' => drupal_get_path('theme', 'spartan') . "/logo-sm.png", 'alt' => "$site_name logo")), '', array("html" => TRUE, 'attributes' => array('class' => 'logo')));

      if (function_exists('defaultcontent_get_node') && ($node = defaultcontent_get_node("email_update")) ) {
        $node = node_view($node);
        $vars['subscribe_form'] = $node['webform'];
      }
      //krumo($vars['footer_menu']);
    break;
  }
}

/**
 * Overrides theme_menu_tree().
 *
 * Fix the horrid menu_tree theme function to clearfix since most LI's are floated.
 */
function spartan_menu_tree($variables) {
  return '<ul class="menu clearfix">' . $variables['tree'] . '</ul>';
}

/**
 * Implements hook_preprocess_views_view_unformatted().
 *
 * Add the 'clearfix' class to all unformatted views rows.
 */
function spartan_preprocess_views_view_unformatted(&$vars) {
  foreach ($vars['classes'] as &$rowclasses) {
    $rowclasses[] = 'clearfix';
  }
}

/**
 * Returns a menu tree, translated if available.
 */
function _spartan_menu_build_tree($menu_name, $parameters = array()) {
  $tree = menu_build_tree($menu_name, $parameters);
  if (function_exists('i18n_menu_localize_tree')) {
    $tree = i18n_menu_localize_tree($tree);
  }
  return $tree;
}
