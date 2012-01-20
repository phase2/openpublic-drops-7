<?php

/**
 * Implementation of hook_theme().
 * Adds preprocess function and templates specific to the Services view and front page carousel.
 */
function openpublic_services_theme($existing, $type, $theme, $path) {
  $themes = array();

  $keys['views_view_unformatted__services__block_1'] = 'views_view_unformatted';
  $keys['views_view_fields__services__block_1'] = 'views_view_fields';
  
  foreach($keys as $key => $original) {
    $path = 'theme/' . str_replace('_', '-', $key); 
    $themes[$key] = array (
      'arguments' => array(),
      'template' => $path,
      'original hook' => $original,
      'preprocess functions' => array(
        'template_preprocess',
        'template_preprocess_' . $original,
        'openpublic_services_preprocess_' . $key,
      ),
    );
  }
  
  return $themes;
}

/**
 * Implementation of hook_preprocess_node().
 * Used to add CSS to the Service node.
 */
function openpublic_services_preprocess_node(&$vars) {
  if (isset($vars['type']) && $vars['type'] === 'services') {
    drupal_add_css(drupal_get_path('module', 'openpublic_services') . '/theme/openpublic_services.css');
  }
}

/**
 * Implementation of hook_preprocess_views_view_unformatted().
 * Used to add CSS to the Serices list page.
 */
function openpublic_services_preprocess_views_view_unformatted(&$vars) {
  drupal_add_css(drupal_get_path('module', 'openpublic_services') . '/theme/openpublic_services.css');
}

/**
 * Implementation of hook_preprocess_views_view_unformatted().
 * Used to add CSS and JavaScript for the front page services carousel views.
 */
function openpublic_services_preprocess_views_view_unformatted__services__block_1(&$vars) {
  $settings['openpublic_services'] = array(
    'visible' => (count($vars['rows']) < 5) ? count($vars['rows']) : 5,
  );
  drupal_add_js(drupal_get_path('module', 'openpublic_services') . '/theme/jquery.cycle.min.js');
  drupal_add_js(drupal_get_path('module', 'openpublic_services') . '/theme/jcarousellite_1.0.1.min.js');
  drupal_add_js(drupal_get_path('module', 'openpublic_services') . '/theme/jquery.easing.1.3.js');
  drupal_add_js($settings, 'setting');
  drupal_add_js(drupal_get_path('module', 'openpublic_services') . '/theme/openpublic_services.js');
  drupal_add_css(drupal_get_path('module', 'openpublic_services') . '/theme/openpublic_services.css');
}

/**
 * Implementation of hook_preprocess_views_view_fields().
 * Used to add variables used in our special views-view-fields template for the image and title.
 * Taken from House.
 */
function openpublic_services_preprocess_views_view_fields__services__block_1(&$vars) {
  $row = $vars['row'];
  $vars['title'] = filter_xss($vars['fields']['title']->content);
  $vars['fields']['entity_id']->content = str_ireplace('<img', '<img class="photo"', $vars['fields']['entity_id']->content);
  $vars['image'] = filter_xss(str_ireplace('alt=""', 'alt="' . check_plain($row->node_title) . ' ' . t('thumbnail image') . '"', $vars['fields']['entity_id']->content), array('a', 'img'));
}
