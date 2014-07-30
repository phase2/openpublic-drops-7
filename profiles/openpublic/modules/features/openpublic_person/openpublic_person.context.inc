<?php
/**
 * @file
 * openpublic_person.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openpublic_person_context_default_contexts() {
  $export = array();

  $context = new stdClass();
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
        'views-profile_list-block_1' => array(
          'module' => 'views',
          'delta' => 'profile_list-block_1',
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'profile_page';
  $context->description = 'Profile node page';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'profile' => 'profile',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-dd3195512d76099b9103ee75d0e9fffb' => array(
          'module' => 'views',
          'delta' => 'dd3195512d76099b9103ee75d0e9fffb',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Profile node page');
  $export['profile_page'] = $context;

  return $export;
}
