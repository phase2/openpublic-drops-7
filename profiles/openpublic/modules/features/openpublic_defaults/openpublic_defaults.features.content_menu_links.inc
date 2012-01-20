<?php
/**
 * @file
 * openpublic_defaults.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function openpublic_defaults_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:blogs
  $menu_links['main-menu:blogs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blogs',
    'router_path' => 'blogs',
    'link_title' => 'Blogs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:media-room
  $menu_links['main-menu:media-room'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media-room',
    'router_path' => 'media-room',
    'link_title' => 'Media Room',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:multimedia
  $menu_links['main-menu:multimedia'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'multimedia',
    'router_path' => 'multimedia',
    'link_title' => 'Multimedia',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '25',
    'parent_path' => 'media-room',
  );
  // Exported menu link: main-menu:press-releases
  $menu_links['main-menu:press-releases'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'press-releases',
    'router_path' => 'press-releases',
    'link_title' => 'Press Releases',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'media-room',
  );
  // Exported menu link: main-menu:staff-directory
  $menu_links['main-menu:staff-directory'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'staff-directory',
    'router_path' => 'staff-directory',
    'link_title' => 'Staff Directory',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node-name/about_page',
  );
  // Exported menu link: main-menu:staff-directory/leadership
  $menu_links['main-menu:staff-directory/leadership'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'staff-directory/leadership',
    'router_path' => 'staff-directory/leadership',
    'link_title' => 'Leadership',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node-name/about_page',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blogs');
  t('Leadership');
  t('Media Room');
  t('Multimedia');
  t('Press Releases');
  t('Staff Directory');


  return $menu_links;
}
