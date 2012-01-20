<?php
/*
 * implementation of hook_theme()
 *
 * We are targeting view templates that cross many views
 */
function openpublic_defaults_theme($existing, $type, $theme, $path) {
  $themes = array();

  // We are taking over the path for the block template
  $item = $existing['block'];
  $item['path'] = drupal_get_path('module', 'openpublic_defaults') ."/theme";
  $item['template'] = 'block';
  $themes['block'] = $item;
  $themes['page_prefixes'] = array(
    'render element' => 'element',
  );
  
  $themes['follow_links'] = array(
    'path' => drupal_get_path('module', 'openpublic_defaults') ."/theme",
    'template' => 'block--follow-links',
    'variables' => array('link' => NULL, 'title' => NULL),
  );
  $themes['openpublic_defaults_menu_block_wrapper'] = array(
    'render element' => 'tree',
  );

  return $themes;
}

/**
* State deparment Twitter Feed Block
*
* @TODO: make this (e.g. twitter account) administrable from the user interface.
*        Will most likely be done as part of Twitter Pull's default impl. itself.
*/
function openpublic_defaults_twitter_pull_blocks() {
  return array(
    0 => (object) array(
      'delta' => 'twitter_statedep_block',
      'tweetkey' => '@StateDept',
      'title' => t('State Department Tweets:'),
      'name'  => 'U.S. Department of State Twitter Feed',    
      'number_of_items' => 5,
      'theme_key' => 'twitter_pull_listing',    
    )
  );  
}

/*
 * implementation of hook_preprocess_block
 *
 * if a block is a view block and it has a rss feed we put up a icon for it
 */
function openpublic_defaults_preprocess_block(&$variables) {
  if($variables['elements']['#block']->module == 'views') {
    $explode = explode("-", $variables['elements']['#block']->delta);
    $view = views_get_view($explode[0]);
    if ($view) {
      foreach($view->display as $display_name =>$display) {
        if ($display_name == 'feed_1') {
        $variables['rss'] = l(theme('image', array('path'=>drupal_get_path('module', 'openpublic_defaults') .'/theme/icon-rss.png', 'alt' => "RSS icon", 'title' => 'RSS icon')), $display->display_options['path'], array('html'=>TRUE));
        }
      }
    }
  }
}

function openpublic_defaults_preprocess_follow_links(&$vars) {
  drupal_add_css(drupal_get_path('module', 'openpublic_defaults') . '/theme/openpublic_defaults.css');
}

/**
 * Implementation of hook_block_view_MODULE_DELTA_alter().
 */
function openpublic_defaults_block_view_follow_site_alter(&$data, $block) {
  $data['subject'] = NULL;
}

/**
 * Implementation of hook_preprocess_page().
 * This is used to invoke the addthis block and set a template variable to the
 * contents of that block.
 */
function openpublic_defaults_preprocess_page(&$vars) {
  if (module_exists('addthis')) {
    $block = module_invoke('addthis', 'block_view', 'addthis'); 
    $vars['addthis'] = $block['content'];
  }
}

/**
 * Implementation of hook_form_FORM_ID_alter().
 * This is used to add additional markup to the search form on the search
 * results page.
 */
function openpublic_defaults_form_search_form_alter(&$form, &$form_state) {
  $form['#prefix'] = '<div id="search-box"><div id="search-box-inner">';
  $form['#prefix'] .= '<h3>Search: <span class="search-term">' . check_plain(arg(2)) . '</span></h3>';
  $form['#suffix'] = '</div></div>';
}

/**
 * Implementation of hook_prorcess_search_result().
 */
function openpublic_defaults_process_search_result(&$vars) {
  $lang = 'und';

  // Get the author link based on how "author" is determined, either a node reference or a Drupal user
  if (!empty($vars['result']['node']->field_blog_author)) {
    $author_node = $vars['result']['node']->field_blog_author[$lang][0];
    $vars['author'] = l($author_node['node']->title, 'node/' . $author_node['nid']);
  }
  else {
    $vars['author'] = $vars['result']['user'];
  }
  
  $vars['type'] = $vars['result']['type'];
  $vars['timestamp'] = format_date($vars['result']['date']);

}

/**
 * Implementation of hook_preprocess_search_results().
 */
function openpublic_defaults_preprocess_search_results(&$vars) {
  $vars['classes_array'][] = 'list-page';
}

/**
 * Implementation of hook_block_info().
 */
function openpublic_defaults_block_info() {
  $blocks = array();

  $blocks['current_navigation'] = array(
    'info' => t('Current navigation'),
  );

  $blocks['openpublic_utility_menu'] = array(
    'info' => t('Utility Menu : Header'), 
  );
  
  $blocks['openpublic_footer_utility_menu'] = array(
    'info' => t('Utility Menu : Footer'), 
  );
  
  return $blocks;
}

/**
 * Implementation of hook_block_view().
 */
function openpublic_defaults_block_view($delta = '') {
  $block = array();

  switch ($delta) {
    case 'current_navigation':
      $block['subject'] = _openpublic_defaults_block_current_navigation('title');
      $block['content'] = _openpublic_defaults_block_current_navigation('content');
      if (!$block['content']) {
        return NULL;
      }
      break;
      // header utility menu
    case 'openpublic_utility_menu':
      global $user;
      // this code was moved from old openpublic_theme to a block to be placed via context
      $menu_utility_cache = $user->uid ? cache_get("menu_utility") : cache_get("menu_utility_anon") ;
		  if($menu_utility_cache) {
		    $menu_utility = $menu_utility_cache->data;
		  }
		  else {
		    $menu_utility = menu_navigation_links('menu-utility');
		    if ($user->uid) {
		      foreach($menu_utility as $key => $item) {
		        if ($item['href'] == 'user') {
		        $menu_utility[$key]['title'] ='My Account';
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
		    cache_set( $user->uid ? "menu_utility" : "menu_utility_anon" , $menu_utility);
		  }
      
      
      
      $block['subject'] = t('');
      $block['content'] = $menu_utility;
      break;
    
    // footer utility menu  
    case 'openpublic_footer_utility_menu': 
      
      $footer_utility_cache = cache_get("footer_utility") ;
		  if($footer_utility_cache) {
		    $footer_utility = $footer_utility_cache->data;
		  }
		  else {
		    $footer_utility = menu_navigation_links('menu-footer-utility');
		    $footer_utility = theme(
		      'links', 
		      array(
		        'links' => $footer_utility,
		        'attributes' => array(
		          'id' => 'footer-utility',
		          'class' => array('links', 'clearfix', 'footer-utility'),
		        ),
		        'heading' => array(
		          'text' => t('Utility Links'),
		          'level' => 'h2',
		          'class' => array('element-invisible'),
		        ),
		      )
		    );
		    cache_set("footer_utility", $footer_utility);
		  }
      $block['subject'] = t('');
      $block['content'] = $footer_utility;
      break;
  }
  return $block;
}

/**
 * Theme function to add HTML container around the block content since there's
 * currently no way to add IDs in D7.
 */
function theme_openpublic_defaults_menu_block_wrapper($variables) {
  return '<div id="right-nav">' . $variables['tree']['#children'] . '</div>';
}

/**
 * Helper function to return block elements for the right rail naviation.
 */
function _openpublic_defaults_block_current_navigation($type = 'content') {
  $menu_name = variable_get('menu_main_links_source', 'main-menu');
  $topmenu = menu_set_active_trail();
  $home = array_shift($topmenu);
  $toplevel = array_shift($topmenu);
  // if the toplevel is not something we expect exit out early
  if(!isset($toplevel['link_title'])) {
    return FALSE;
  }
  // If we specify the title, just return the title string
  if ($type == 'title') {
    return $toplevel['link_title'];
    return !empty($active_menu_tree) ? $toplevel['link_title'] : FALSE;
  }
  $menu_tree = menu_tree($menu_name);
  if (
    isset($menu_tree[$toplevel['mlid']]['#below']) &&
    ($active_menu_tree = $menu_tree[$toplevel['mlid']]['#below']) &&
    !empty($active_menu_tree)
  ) {
    $active_menu_tree['#theme_wrappers'][] = 'openpublic_defaults_menu_block_wrapper';
    return $active_menu_tree;
  }
  return FALSE;
}


/**
 * Update the skin settings for CKEditor, since the default sorting by file scan can give 
 * unpredictable results.
 */
function openpublic_defaults_wysiwyg_editor_settings_alter(&$settings, $context) {
  if ($context['profile']->editor == 'ckeditor') {
    $settings['skin'] = 'kama,' . base_path() . 'sites/all/libraries/ckeditor/skins/kama/';
  }
}

/*
 * implement hook_link_ACTION()
 *
 * here we are clearing our custom menu caches when a menu item is update
 */
function openpublic_defaults_menu_link_insert($link) {
  openpublic_defaults_menu_link_update($link);
}
function openpublic_defaults_menu_link_delete($link) {
  openpublic_defaults_menu_link_update($link);
}
function openpublic_defaults_menu_link_update($link) {
  if(in_array($link['menu_name'], array('main-menu', 'menu-utility', 'menu-footer-utility'))) {
    cache_clear_all("menu_utility_anon", 'cache');
    cache_clear_all("footer_menu_data", 'cache');
    cache_clear_all("menu_utility", 'cache');
    cache_clear_all("footer_utility", 'cache');
  }
}

function openpublic_defaults_context_load_alter(&$context) {
  if ($context->name == 'site_wide_before') {
    foreach($context->reactions['block']['blocks'] as $key => $item) {
      $context->reactions['block']['blocks'][$key]['weight'] = $item['weight'] - 100;
    }
  }
  if ($context->name == 'site_wide_after') {
    foreach($context->reactions['block']['blocks'] as $key => $item) {
      $context->reactions['block']['blocks'][$key]['weight'] = $item['weight'] + 100;
    }
  }
}

/**
 * Implementation of system_themes_page_alter().
 * Strip all of the core and default themes except for the OpenPublic-related
 * themes from the allowed list of default themes. This leaves the others as
 * options for admin theme though.
 */
function openpublic_defaults_system_themes_page_alter(&$theme_groups) {
  $disable_themes = array(
    'bartik',
    'rubik',
    'seven',
    'garland',
    'stark',
    'tao',
  );
  foreach (array('enabled', 'disabled') as $status) {
    foreach ($theme_groups[$status] as $key => $theme) {
      if(in_array($theme->name, $disable_themes)) {
        unset($theme_groups[$status][$key]);
      }
    }
  }
}

/**
 * Implementation of hook_form_FORM_ID_alter().
 * Remove the admin_theme form elements from the system themes page.
 */ 
function openpublic_defaults_form_system_themes_admin_form_alter(&$form, &$form_state, $form_id) {
  $allowed_themes = array(
    0 => 0, // default theme key
    'rubik' => 'rubik',
    'seven' => 'seven',
  );
  foreach ($form['admin_theme']['admin_theme']['#options'] as $key => $option) {
    if(empty($allowed_themes[$key])) {
      unset($form['admin_theme']['admin_theme']['#options'][$key]);
    }
  }
}

/*
 * hook_user_login
 *
 * Redirecting to the dashboard if they have perms to the dash board
 */
function openpublic_defaults_user_login(&$edit, $account) {
  if(user_access("access dashboard", $account)) {
    
    $edit['redirect'] = module_exists('overlay') ? array("/", array('fragment'=>'overlay=admin/dashboard')) : '/admin/dashboard';
  }
}
