<?php
/**
 * @file
 * openpublic_person.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function openpublic_person_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'leadership';
  $context->description = 'Providing leadership block to various pages';
  $context->tag = 'OpenPublic General';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
        'about/*' => 'about/*',
        'staff-directory' => 'staff-directory',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-profiles-block_1' => array(
          'module' => 'views',
          'delta' => 'profiles-block_1',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('OpenPublic General');
  t('Providing leadership block to various pages');
  $export['leadership'] = $context;

  return $export;
}
