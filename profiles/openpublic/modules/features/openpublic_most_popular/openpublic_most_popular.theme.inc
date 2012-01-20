<?php

/**
 * Implementation of hook_preprocess_page().
 * Used to add javascript to pages that display the Most Popular
 * blocks and merge them.
 */
function openpublic_most_popular_preprocess_page(&$vars) {
  drupal_add_css(drupal_get_path('module', 'openpublic_most_popular') . '/theme/openpublic_most_popular.css');
}