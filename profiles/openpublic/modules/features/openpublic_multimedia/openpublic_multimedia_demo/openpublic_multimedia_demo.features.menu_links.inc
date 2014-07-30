<?php
/**
 * @file
 * openpublic_multimedia_demo.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function openpublic_multimedia_demo_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_media-room:media-room
  $menu_links['main-menu_media-room:media-room'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media-room',
    'router_path' => 'media-room',
    'link_title' => 'Media Room',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_media-room:media-room',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_multimedia:multimedia
  $menu_links['main-menu_multimedia:multimedia'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'multimedia',
    'router_path' => 'multimedia',
    'link_title' => 'Multimedia',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_multimedia:multimedia',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 25,
    'customized' => 1,
    'parent_identifier' => 'main-menu_media-room:media-room',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Media Room');
  t('Multimedia');


  return $menu_links;
}
