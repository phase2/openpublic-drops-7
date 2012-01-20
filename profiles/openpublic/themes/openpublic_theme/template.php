<?php

function openpublic_theme_preprocess_html(&$variables) {
  // Add conditional stylesheets for IE
  //drupal_add_css(path_to_theme() . '/css/ie8.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE), 'preprocess' => FALSE));
  //drupal_add_css(path_to_theme() . '/css/ie7.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
  //drupal_add_css(path_to_theme() . '/css/ie6.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 6', '!IE' => FALSE), 'preprocess' => FALSE));  
}

/*
 * implement hook_preprocess_node
 *
 * we are turning off number of reads
 */
function openpublic_theme_preprocess_node(&$variables) {
  unset($variables['content']['links']['statistics']);
}

function openpublic_theme_preprocess_page(&$variables) {

  // we have two cache for the utility menu one if logged in one if logged out.
  // also we change the name of the login if we are already logged in.
  global $user;
  global $language;
  
  $menu_utility_cache = $user->uid ? cache_get("menu_utility:". $language->language) : cache_get("menu_utility_anon:". $language->language) ;
  if($menu_utility_cache) {
    $menu_utility = $menu_utility_cache->data;
  }
  else {
    $menu_utility = _openpublic_menu_navigation_links('menu-utility');
    if ($user->uid) {
      foreach($menu_utility as $key => $item) {
        if ($item['href'] == 'user') {
          $menu_utility[$key]['title'] = 'My Account';
        }
      }
    }
    $menu_utility = theme(
      'links', 
      array(
        'links' => $menu_utility,
        'attributes' => array(
          'id' => 'user-menu',
          'class' => array('links', 'clearfix'),
        ),
        'heading' => array(
          'text' => t('User menu'),
          'level' => 'h2',
          'class' => array('element-invisible'),
        ),
      )
    );
    cache_set( $user->uid ? "menu_utility:".$language->language : "menu_utility_anon:". $language->language , $menu_utility);
  }
  $variables['menu_utility'] = $menu_utility;

  $footer_utility_cache = cache_get("footer_utility:". $language->language) ;
  if($footer_utility_cache) {
    $footer_utility = $footer_utility_cache->data;
  }
  else {
    $footer_utility = _openpublic_menu_navigation_links('menu-footer-utility');
    $footer_utility = theme(
      'links', 
      array(
        'links' => $footer_utility,
        'attributes' => array(
          'id' => 'footer-utility',
          'class' => array('links', 'clearfix'),
        ),
        'heading' => array(
          'text' => t('Utility Links'),
          'level' => 'h2',
          'class' => array('element-invisible'),
        ),
      )
    );
    cache_set("footer_utility:". $language->language, $footer_utility);
  }
  $variables['footer_utility'] = $footer_utility;

  // We are caching the footer_menu render array for performance 
  $footer_menu_cache = cache_get("footer_menu_data:". $language->language) ;
  if ($footer_menu_cache) {
    $footer_menu = $footer_menu_cache->data;
  }
  else {
    $footer_menu = menu_tree_output(_openpublic_menu_build_tree('main-menu', array('max_depth'=>2)));
    cache_set("footer_menu_data:". $language->language, $footer_menu);
  }
  //set the active trail
  $active_trail = menu_get_active_trail();
  foreach($active_trail as $trail) {
    if (isset($trail['mlid']) && isset($footer_menu[$trail['mlid'] ] )) {
      $footer_menu[$trail['mlid']]['#attributes']['class'][] = 'active-trail';
    }
  }
  $variables['footer_menu'] = $footer_menu;
  $variables['main_menu'] = $footer_menu;
  
  
  $frontpage = variable_get('site_frontpage', 'node');

  $logo = $variables['logo'];
  $site_name = $variables['site_name'];
  if (preg_match("|^.*/files/(.*)|", $logo, $m)) {
    $file = "public://" . $m[1];
    $header_logo = l(theme('image_style', array('style_name'=>'logo', 'path'=>$file, 'alt'=>"$site_name logo")), '', array("html"=>TRUE, 'attributes'=>array('class'=>'logo')));
    $footer_logo = l(theme('image_style', array('style_name'=>'logo-small', 'path'=>$file, 'alt'=>"$site_name logo")), '', array("html"=>TRUE, 'attributes'=>array('class'=>'logo')));
  }
  elseif ($logo == url(drupal_get_path('theme', 'openpublic_theme') . "/logo.png", array('absolute'=>TRUE))) {
    $header_logo = l(theme('image', array('path'=>$logo, 'alt'=>"$site_name logo")), '', array("html"=>TRUE, 'attributes'=>array('class'=>'logo')));
    $footer_logo = l(theme('image', array('path'=>drupal_get_path('theme', 'openpublic_theme') . "/logo-sm.png", 'alt'=>"$site_name logo")), '', array("html"=>TRUE, 'attributes'=>array('class'=>'logo')));
  }
  else {
    $header_logo = l(theme('image', array('path'=>$logo, 'alt'=>"$site_name logo")), '', array("html"=>TRUE, 'attributes'=>array('class'=>'logo')));
    $footer_logo = l(theme('image', array('path'=>$logo, 'alt'=>"$site_name logo")), '', array("html"=>TRUE, 'attributes'=>array('class'=>'logo')));
  }

  $variables['footer_logo'] = $footer_logo;
  $variables['header_logo'] = $header_logo;
  $variables['front_page'] = $frontpage;
  if(function_exists('defaultcontent_get_node') &&
     ($node = defaultcontent_get_node("email_update")) ) {
    $node = node_view($node);
    $variables['subscribe_form'] = $node['webform'];
  }
}

function _openpublic_menu_navigation_links($menu_name, $level = 0) {
  // check for i18n_menu presence
  if (function_exists('i18n_menu_navigation_links')) {
    return i18n_menu_navigation_links($menu_name, $level);
  }
  else {
    return menu_navigation_links($menu_name, $level);
  }
}

function _openpublic_menu_build_tree($menu_name, $parameters = array()) {
  $tree = menu_build_tree($menu_name, $parameters);
  if (function_exists('i18n_menu_localize_tree')) {
    $tree = i18n_menu_localize_tree($tree);
  }

  return $tree;
}