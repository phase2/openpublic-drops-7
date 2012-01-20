<?php

/**
 * Implementation of hook_preprocess_views_view_unformatted().
 * Used to add CSS to the Serices list page.
 */
function openpublic_resources_preprocess_views_view_unformatted(&$vars) {
  drupal_add_css(drupal_get_path('module', 'openpublic_resources') . '/theme/openpublic_resources.css');
}


function openpublic_resources_preprocess_node(&$vars) {
  if (isset($vars['type']) && $vars['type'] === 'resource') {
    drupal_add_css(drupal_get_path('module', 'openpublic_resources') . '/theme/openpublic_resources.css');
  }
}