<?php
/**
 * @file
 * openpublic_defaults.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function openpublic_defaults_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-utility
  $menus['menu-utility'] = array(
    'menu_name' => 'menu-utility',
    'title' => 'Utility',
    'description' => 'List User and Feedback Links',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('List User and Feedback Links');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Utility');


  return $menus;
}
