<?php
/*
 * implimentation of hook_preporcess_views_view
 */
function openpublic_breaking_news_preprocess_views_view(&$variables) {
  if($variables['name'] == 'breaking_news' && $variables['display_id'] == 'block_1') {
  drupal_add_css(drupal_get_path("module", 'openpublic_breaking_news') . "/theme/breaking_news.css");
  }
}
