<?php
/**
 * @file
 * openpublic_layouts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openpublic_layouts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nav_leader';
  $context->description = 'Navigation for a Staff Leader';
  $context->tag = 'OpenPublic Navigation';
  $context->conditions = array(
    'field_bool' => array(
      'values' => array(
        'field_person_leadership' => 'field_person_leadership',
      ),
      'options' => array(
        'bool_field_value' => '1',
      ),
    ),
    'node' => array(
      'values' => array(
        'author' => 'author',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'staff-directory/leadership',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Navigation for a Staff Leader');
  t('OpenPublic Navigation');
  $export['nav_leader'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nav_search';
  $context->description = 'Navigation for Search Results';
  $context->tag = 'OpenPublic Navigation';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search*' => 'search*',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb_current_page' => array(
      'breadcrumb_show_current_page' => 1,
      'breadcrumb_show_current_page_title' => 'Search Results',
      'breadcrumb_show_current_page_only' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Navigation for Search Results');
  t('OpenPublic Navigation');
  $export['nav_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nav_staff';
  $context->description = 'Navigation for a None Leader Staff Pages';
  $context->tag = 'OpenPublic Navigation';
  $context->conditions = array(
    'field_bool' => array(
      'values' => array(
        'field_person_leadership' => 'field_person_leadership',
      ),
      'options' => array(
        'bool_field_value' => '0',
      ),
    ),
    'node' => array(
      'values' => array(
        'author' => 'author',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'staff-directory',
    'menu' => 'node-name/about_page',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Navigation for a None Leader Staff Pages');
  t('OpenPublic Navigation');
  $export['nav_staff'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'no_sidebars';
  $context->description = '';
  $context->tag = 'OpenPublic Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'projects' => 'projects',
      ),
    ),
  );
  $context->reactions = array(
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'header' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'featured' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'triptych_first' => 0,
          'triptych_middle' => 0,
          'triptych_last' => 0,
          'footer_firstcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'openpublic_theme' => array(
        'disable' => array(
          'sidebar_second' => 'sidebar_second',
          'sidebar_first' => 0,
          'inner_first' => 0,
          'inner_second' => 0,
          'content_prefix' => 0,
          'content' => 0,
          'content_suffix' => 0,
          'header' => 0,
          'footer' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'help' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'rubik' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OpenPublic Blocks');
  $export['no_sidebars'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'open_government';
  $context->description = '';
  $context->tag = 'OpenPublic Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'open' => 'open',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-box-d4535029' => array(
          'module' => 'boxes',
          'delta' => 'box-d4535029',
          'region' => 'sidebar_second',
          'weight' => 1,
        ),
        'boxes-box-2704b136' => array(
          'module' => 'boxes',
          'delta' => 'box-2704b136',
          'region' => 'sidebar_second',
          'weight' => 2,
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
    ),
    'theme_html' => array(
      'class' => '',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OpenPublic Blocks');
  $export['open_government'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide';
  $context->description = 'Site wide blocks that appear after other blocks';
  $context->tag = 'OpenPublic Blocks';
  $context->conditions = array(
    'admin_theme' => array(
      'values' => array(
        'non_admin' => 'non_admin',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'openpublic_menu-openpublic_utility_menu' => array(
          'module' => 'openpublic_menu',
          'delta' => 'openpublic_utility_menu',
          'region' => 'user_first',
          'weight' => -25,
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'branding',
          'weight' => -25,
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'header_first',
          'weight' => -25,
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -25,
        ),
        'openpublic_menu-current_navigation' => array(
          'module' => 'openpublic_menu',
          'delta' => 'current_navigation',
          'region' => 'sidebar_second',
          'weight' => -25,
        ),
        'openpublic_menu-openpublic_footer_utility_menu' => array(
          'module' => 'openpublic_menu',
          'delta' => 'openpublic_footer_utility_menu',
          'region' => 'footer_first',
          'weight' => -25,
        ),
        'boxes-box-1c9715a5' => array(
          'module' => 'boxes',
          'delta' => 'box-1c9715a5',
          'region' => 'footer_first',
          'weight' => 25,
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
    ),
    'theme_html' => array(
      'class' => '',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OpenPublic Blocks');
  t('Site wide blocks that appear after other blocks');
  $export['site_wide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide_not_home';
  $context->description = 'All pages except for the home page';
  $context->tag = 'OpenPublic Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'follow-site' => array(
          'module' => 'follow',
          'delta' => 'site',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'preface_fourth',
          'weight' => '-5',
        ),
        'addthis-addthis' => array(
          'module' => 'addthis',
          'delta' => 'addthis',
          'region' => 'preface_fourth',
          'weight' => '-10',
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
    ),
    'theme_html' => array(
      'class' => '',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages except for the home page');
  t('OpenPublic Blocks');
  $export['site_wide_not_home'] = $context;

  return $export;
}
