<?php
/**
 * @file
 * openpublic_home_page_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openpublic_home_page_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = 'Context for the Home page';
  $context->tag = 'OpenPublic Front Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-box-dc4059cc' => array(
          'module' => 'boxes',
          'delta' => 'box-dc4059cc',
          'region' => 'header_first',
          'weight' => 1,
        ),
        'boxes-box-54682cbd' => array(
          'module' => 'boxes',
          'delta' => 'box-54682cbd',
          'region' => 'header_first',
          'weight' => 2,
        ),
        'boxes-box-e826276f' => array(
          'module' => 'boxes',
          'delta' => 'box-e826276f',
          'region' => 'header_second',
          'weight' => 0,
        ),
        'views-press_release_list-block_1' => array(
          'module' => 'views',
          'delta' => 'press_release_list-block_1',
          'region' => 'preface_first',
          'weight' => 0,
        ),
        'views-blog_entry_list-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_entry_list-block_1',
          'region' => 'preface_second',
          'weight' => 0,
        ),
        'views-resource_list-block_1' => array(
          'module' => 'views',
          'delta' => 'resource_list-block_1',
          'region' => 'preface_second',
          'weight' => 1,
        ),
        'boxes-box-41ba8a2d' => array(
          'module' => 'boxes',
          'delta' => 'box-41ba8a2d',
          'region' => 'preface_third',
          'weight' => 0,
        ),
      ),
    ),
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
      'openomega' => array(
        'disable' => array(
          'content' => 'content',
          'sidebar_first' => 'sidebar_first',
          'sidebar_second' => 'sidebar_second',
          'page_top' => 0,
          'page_bottom' => 0,
          'user_first' => 0,
          'user_second' => 0,
          'branding' => 0,
          'menu' => 0,
          'header_first' => 0,
          'header_second' => 0,
          'preface_first' => 0,
          'preface_second' => 0,
          'preface_third' => 0,
          'postscript_first' => 0,
          'postscript_second' => 0,
          'postscript_third' => 0,
          'postscript_fourth' => 0,
          'footer_first' => 0,
          'footer_second' => 0,
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
  t('Context for the Home page');
  t('OpenPublic Front Page');
  $export['home'] = $context;

  return $export;
}
