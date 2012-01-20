<?php
/**
 * @file
 * openpublic_home_page_feature.features.menu_custom.inc
 */

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function openpublic_home_page_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-utility
  $menus['menu-footer-utility'] = array(
    'menu_name' => 'menu-footer-utility',
    'title' => 'Footer Utility',
    'description' => 'Contains Accessibility, Feeds, Privacy, Tools',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contains Accessibility, Feeds, Privacy, Tools');
  t('Footer Utility');


  return $menus;
}
