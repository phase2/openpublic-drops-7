<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

/**
  * Unset the Alpha/Omega themes from the appearance page
  * We don't want anyone enabling them directly
  *
  * Needs moved to module since theme isn't used for admin, but keeping here for reference
  */ 
function open_omega_system_themes_page_alter(&$theme_groups) {
	$hidden = array(
	  'alpha', 'omega',
	);
	foreach ($theme_groups as $state => &$group) {
		if ($state == 'disabled') {
	    foreach ($theme_groups[$state] as $id => &$theme) {
	    	if(in_array($theme, $hidden)) {
	        unset($theme_groups[$state][$id]);
	    	}
	    }
	  }
	}
}

function openomega_preprocess_region(&$vars) {
  global $language;
  
  switch($vars['region']) {
    // menu region
    case 'menu':
      $footer_menu_cache = cache_get("footer_menu_data:". $language->language) ;
		  if ($footer_menu_cache) {
		    $footer_menu = $footer_menu_cache->data;
		  }
		  else {
		    $footer_menu = menu_tree_output(_openomega_menu_build_tree('main-menu', array('max_depth'=>2)));
		    cache_set("footer_menu_data:" .$language->language, $footer_menu);
		  }
		  //set the active trail
		  $active_trail = menu_get_active_trail();
		  foreach($active_trail as $trail) {
		    if (isset($trail['mlid']) && isset($footer_menu[$trail['mlid'] ] )) {
		      $footer_menu[$trail['mlid']]['#attributes']['class'][] = 'active-trail';
		    }
		  }
		  $vars['dropdown_menu'] = $footer_menu;
    break;
    // default footer content
    case 'footer_first':
      $footer_menu_cache = cache_get("footer_menu_data:". $language->language) ;
		  if ($footer_menu_cache) {
		    $footer_menu = $footer_menu_cache->data;
		  }
		  else {
		    $footer_menu = menu_tree_output(_openomega_menu_build_tree('main-menu', array('max_depth'=>2)));
		    cache_set("footer_menu_data", $footer_menu);
		  }
		  //set the active trail
		  $active_trail = menu_get_active_trail();
		  foreach($active_trail as $trail) {
		    if (isset($trail['mlid']) && isset($footer_menu[$trail['mlid'] ] )) {
		      $footer_menu[$trail['mlid']]['#attributes']['class'][] = 'active-trail';
		    }
		  }
		  $vars['footer_menu'] = $footer_menu;
		  
		  $vars['site_name'] = $site_name = variable_get('site_name');
		  $vars['footer_logo'] = l(theme('image', array('path'=>drupal_get_path('theme', 'openomega') . "/logo-sm.png", 'alt'=>"$site_name logo")), '', array("html"=>TRUE, 'attributes'=>array('class'=>'logo')));
		  
		  if(function_exists('defaultcontent_get_node') && ($node = defaultcontent_get_node("email_update")) ) {
			  $node = node_view($node);
			  $vars['subscribe_form'] = $node['webform'];
			}
		  //krumo($vars['footer_menu']);
    break;
  }
}
/* Fix the horrid menu_tree theme function to clearfix since most LI's are floated */
function openomega_menu_tree($variables) {
  return '<ul class="menu clearfix">' . $variables['tree'] . '</ul>';
}

/* Add the 'clearfix' class to all unformatted views rows */
function openomega_preprocess_views_view_unformatted(&$vars) {
  foreach($vars['classes'] as &$rowclasses) {
    $rowclasses[] = 'clearfix';
  }
  foreach($vars['classes_array'] as &$rowclasses) {
    $rowclasses .= ' clearfix';
  }
  foreach($vars['attributes_array']['class'] as &$rowclasses) {
    $rowclasses .= ' clearfix';
  }
}

function _openomega_menu_build_tree($menu_name, $parameters = array()) {
  $tree = menu_build_tree($menu_name, $parameters);
  if (function_exists('i18n_menu_localize_tree')) {
    $tree = i18n_menu_localize_tree($tree);
  }

  return $tree;
}