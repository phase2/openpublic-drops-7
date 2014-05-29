<?php
/**
 * @file
 * openpublic_menu_footer.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function openpublic_menu_footer_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-utility.
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
