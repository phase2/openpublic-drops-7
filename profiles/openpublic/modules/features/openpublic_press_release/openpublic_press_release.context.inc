<?php
/**
 * @file
 * openpublic_press_release.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openpublic_press_release_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nav_press_release';
  $context->description = 'Navigation for Individual Press Releases';
  $context->tag = 'OpenPublic Navigation';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'press_release' => 'press_release',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'press-releases',
    'menu' => 'node-name/media_room',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Navigation for Individual Press Releases');
  t('OpenPublic Navigation');
  $export['nav_press_release'] = $context;

  return $export;
}
