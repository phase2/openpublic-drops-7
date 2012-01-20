<?php
/**
 * @file
 * openpublic_most_popular.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function openpublic_most_popular_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'popular_content';
  $context->description = 'Blocks of the Most Popular content';
  $context->tag = 'openpublic';
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
        'views-most_popular_content-block_1' => array(
          'module' => 'views',
          'delta' => 'most_popular_content-block_1',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'views-most_popular_content-block_2' => array(
          'module' => 'views',
          'delta' => 'most_popular_content-block_2',
          'region' => 'sidebar_second',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks of the Most Popular content');
  t('openpublic');
  $export['popular_content'] = $context;

  return $export;
}
