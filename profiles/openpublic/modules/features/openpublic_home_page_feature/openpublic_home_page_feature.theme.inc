<?php
/*
 * implimentation of hook_theme()
 *
 * We are targeting view templates that cross many views
 */
function openpublic_home_page_feature_theme($existing, $type, $theme, $path) {
  $themes = array();
 

  // we want to intercept all page and block rows and point them at the same
  // file we are going to uses views-view-fields--page
  // — Row-level theme for stories
  $key = 'views_view_fields__home_page_feature_rotator__block';
  $tpl_path = 'theme/' . str_replace('_', '-', $key); 
  $themes[$key] = array (
    'arguments' => array('view' => Null, 'options' => Null, 'row' => Null),
    'template' => $tpl_path,
    'original hook' => 'views_view_fields',
    
    // — According to Views Advanced Help, we either need to do this or make module weight > 10.
    'preprocess functions' => array(
          'template_preprocess',
          'template_preprocess_views_view_fields',
          "openpublic_home_page_feature_preprocess_$key",
    ),
  );
  //display
  $key = 'views_view__home_page_feature_rotator__block';
  $tpl_path = 'theme/' . str_replace('_', '-', $key); 
  $themes[$key] = array (
    'arguments' => array('view' => Null),
    'template' => $tpl_path,
    'original hook' => 'views_view',
    
    // — According to Views Advanced Help, we either need to do this or make module weight > 10.
    'preprocess functions' => array(
          'template_preprocess',
          'template_preprocess_views_view',
          "openpublic_home_page_feature_preprocess_$key",
    ),
  );
  //style
  $key = 'views_view_unformatted__home_page_feature_rotator__block';
  $tpl_path = 'theme/' . str_replace('_', '-', $key); 
  $themes[$key] = array (
    'arguments' => array('view' => Null, 'options' => Null, 'rows' => Null, 'title' => Null),
    'template' => $tpl_path,
    'original hook' => 'views_view_unformatted',
    
    // — According to Views Advanced Help, we either need to do this or make module weight > 10.
    'preprocess functions' => array(
          'template_preprocess',
          'template_preprocess_views_view_unformatted',
          "openpublic_home_page_feature_preprocess_$key",
    ),
  );
  return $themes;

}

/**
 *  Preprocess function for home page feature rotator fields
 */
function openpublic_home_page_feature_preprocess_views_view_fields__home_page_feature_rotator__block(&$vars) {
  drupal_add_css(drupal_get_path("module", 'openpublic_home_page_feature') . "/theme/home-page-rotator.css", 'file');
  drupal_add_js(drupal_get_path("module", 'openpublic_home_page_feature') . "/theme/jquery.cycle.min.js", 'file');
  $result_count = sizeof($vars['view']->result);
  if($result_count > 1) {
    drupal_add_js('
      function homepage_feature_rotator_rotate_slide(slide_no) {
        jQuery("#home-rotator").cycle("pause");
        jQuery("#home-rotator").cycle(slide_no);
      }
    ', 'inline');

    drupal_add_js(
      'jQuery("#home-rotator").cycle({
		  	fx:     "fade",
		    speed:   600,
		    timeout: 4000,
	      cleartypeNoBg: 1,
	      height: "auto",
	      width: "auto",
	      slideResize: 0,
		    pause:   true,
		    pauseOnPagerHover: 1
		  });',
      array('type' => 'inline', 'scope' => 'footer')
    );
  }
  else {
    drupal_add_css(
      '.home-rotator-slide { 
        display: block;
        margin: 0;
      }
      ',
      array('type' => 'inline', 'group' => CSS_THEME, 'weight' => 30)
    );
  }

  $nav = '';
  $counter = 0;
  $row = $vars['row'];
  
  $vars['title'] = filter_xss($row->node_title);
  
  $vars['main_image'] = filter_xss(str_ireplace('alt=""', 'alt="' . check_plain($vars['title']) . ' ' . t('feature image') . '"', $vars['fields']['entity_id_1']->content), array('a', 'img'));

  foreach ($vars['view']->result as $id => $node) {
    $active_slide = '';
    if ($node->nid == $row->nid) {
      $active_slide = 'class="activeSlide"';
    }
    $nav .= '<li><a href="#" onclick="homepage_feature_rotator_rotate_slide(' . $counter . '); return false;" ' . $active_slide . '>' . ($counter+1) . '</a></li>';
    $counter++;
  }
  
  $vars['summary'] = filter_xss($vars['fields']['entity_id']->content, array('div'));
  $vars['read_more'] = filter_xss($vars['fields']['entity_id_3']->content);
  
  if ($vars['read_more']) {
    $vars['main_image'] = l($vars['main_image'], $vars['read_more'], array('html' => TRUE));
  }

  if($result_count < 2) {
    $nav = '';
  }
  $vars['rotator_nav'] = $nav;
}

