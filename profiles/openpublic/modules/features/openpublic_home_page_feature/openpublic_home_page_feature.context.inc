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
        'views-f357e00a950996a5a5f114f3de9b7a5f' => array(
          'module' => 'views',
          'delta' => 'f357e00a950996a5a5f114f3de9b7a5f',
          'region' => 'header_first',
          'weight' => '-29',
        ),
        'views-breaking_news-block_1' => array(
          'module' => 'views',
          'delta' => 'breaking_news-block_1',
          'region' => 'header_first',
          'weight' => '-28',
        ),
        'views-services-block_1' => array(
          'module' => 'views',
          'delta' => 'services-block_1',
          'region' => 'header_second',
          'weight' => '-10',
        ),
        'views-press_releases-block_1' => array(
          'module' => 'views',
          'delta' => 'press_releases-block_1',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'views-blogs-block_1' => array(
          'module' => 'views',
          'delta' => 'blogs-block_1',
          'region' => 'preface_second',
          'weight' => '-29',
        ),
        'views-resources-block_1' => array(
          'module' => 'views',
          'delta' => 'resources-block_1',
          'region' => 'preface_second',
          'weight' => '-28',
        ),
        'follow-site' => array(
          'module' => 'follow',
          'delta' => 'site',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
        'twitter_pull-0' => array(
          'module' => 'twitter_pull',
          'delta' => 0,
          'region' => 'preface_third',
          'weight' => '-9',
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
      'spartan' => array(
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
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for the Home page');
  t('OpenPublic Front Page');
  $export['home'] = $context;

  return $export;
}
