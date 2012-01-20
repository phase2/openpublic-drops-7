<?php
/**
 * @file
 * openpublic_defaults.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function openpublic_defaults_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:documents
  $menu_links['main-menu:documents'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'documents',
    'router_path' => 'documents',
    'link_title' => 'Documents',
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
    'parent_path' => 'resources',
  );
  // Exported menu link: main-menu:resources
  $menu_links['main-menu:resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources',
    'router_path' => 'resources',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:services
  $menu_links['main-menu:services'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'services',
    'router_path' => 'services',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
  );
  // Exported menu link: menu-utility:<front>
  $menu_links['menu-utility:<front>'] = array(
    'menu_name' => 'menu-utility',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-utility:user
  $menu_links['menu-utility:user'] = array(
    'menu_name' => 'menu-utility',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Login',
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
  );
  // Exported menu link: menu-utility:user/logout
  $menu_links['menu-utility:user/logout'] = array(
    'menu_name' => 'menu-utility',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
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
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Documents');
  t('Home');
  t('Login');
  t('Logout');
  t('Resources');
  t('Services');


  return $menu_links;
}
