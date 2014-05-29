<?php
/**
 * @file
 * openpublic_menu_utility.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function openpublic_menu_utility_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-utility.
  $menus['menu-utility'] = array(
    'menu_name' => 'menu-utility',
    'title' => 'Utility',
    'description' => 'List User and Feedback Links',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('List User and Feedback Links');
  t('Utility');


  return $menus;
}
