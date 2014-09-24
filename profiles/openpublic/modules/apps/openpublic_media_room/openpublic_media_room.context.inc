<?php
/**
 * @file
 * openpublic_media_room.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function openpublic_media_room_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'media_room';
  $context->description = '';
  $context->tag = 'OpenPublic Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'media-room' => 'media-room',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-box-7b551df' => array(
          'module' => 'boxes',
          'delta' => 'box-7b551df',
          'region' => 'sidebar_second',
          'weight' => 1,
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
  $export['media_room'] = $context;

  return $export;
}
