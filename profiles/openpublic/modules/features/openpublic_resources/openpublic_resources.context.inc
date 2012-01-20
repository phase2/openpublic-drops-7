<?php
/**
 * @file
 * openpublic_resources.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function openpublic_resources_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources';
  $context->description = 'Resources settings for OpenPublic';
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
        'views-resources-block_1' => array(
          'module' => 'views',
          'delta' => 'resources-block_1',
          'region' => 'inner_second',
          'weight' => 10,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OpenPublic Front Page');
  t('Resources settings for OpenPublic');
  $export['resources'] = $context;

  return $export;
}
