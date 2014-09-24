<?php
/**
 * @file
 * openpublic_press_release_demo.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function openpublic_press_release_demo_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_press-releases:press-releases
  $menu_links['main-menu_press-releases:press-releases'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'press-releases',
    'router_path' => 'press-releases',
    'link_title' => 'Press Releases',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_press-releases:press-releases',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Press Releases');


  return $menu_links;
}
