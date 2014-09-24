<?php
/**
 * @file
 * openpublic_person_demo.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function openpublic_person_demo_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_leadership:staff-directory/leadership
  $menu_links['main-menu_leadership:staff-directory/leadership'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'staff-directory/leadership',
    'router_path' => 'staff-directory/leadership',
    'link_title' => 'Leadership',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_leadership:staff-directory/leadership',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_staff-directory:staff-directory',
  );
  // Exported menu link: main-menu_staff-directory:staff-directory
  $menu_links['main-menu_staff-directory:staff-directory'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'staff-directory',
    'router_path' => 'staff-directory',
    'link_title' => 'Staff Directory',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_staff-directory:staff-directory',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Leadership');
  t('Staff Directory');


  return $menu_links;
}
