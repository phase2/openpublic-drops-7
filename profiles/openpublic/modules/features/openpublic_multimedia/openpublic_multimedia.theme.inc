<?php
/**
 * @file
 * Code for the openpublic multimedia feature.
 */

/**
 * Implements hook_menu().
 */
function openpublic_multimedia_menu() {
  return array(
    'colorbox/node/%node' => array(
      'page callback' => 'openpublic_multimedia_colorbox_node',
      'page arguments' => array(2),
      'access callback' => 'node_access',
      'access arguments' => array(2),
    ),
  );
}


/**
 * Render a node.
 */
function openpublic_multimedia_colorbox_node($node) {
  print render(node_view($node));
}

/**
 * Implements hook_preprocess_node().
 */
function openpublic_multimedia_preprocess_node(&$variables) {
  if ($variables['type'] == 'photo') {
    $variables['title'] = '';
    if (isset($variables['content']['field_photo_image'][0]['#path']['path'])) {
      $variables['content']['field_photo_image'][0]['#path']['options']['attributes']['class'] = 'colorbox-load';
      $variables['content']['field_photo_image'][0]['#path']['options']['attributes']['rel'] = 'gallery';
      $variables['content']['field_photo_image'][0]['#path']['path'] = 'colorbox/' . $variables['content']['field_photo_image'][0]['#path']['path'];
      $variables['content']['field_photo_image'][0]['#path']['options']['query']['width'] = '500px';
      $variables['content']['field_photo_image'][0]['#path']['options']['query']['height'] = '500px';
    }
  }

}
/**
 * Implements hook_preprocess_views_view_field().
 */
function openpublic_multimedia_preprocess_views_view_field(&$vars) {
  // There's not a formatter that renders just the image and cannot
  // relationships as cannot restrict to just one.
  if ($vars['view']->name == 'media_gallery_list' && $vars['view']->current_display == 'panel_pane_1' && $vars['field']->options['id'] == 'entity_id'
    && !empty($vars['row']->field_entity_id[0]['raw']['nid']) && !empty($vars['row']->field_entity_id[0]['rendered']['#access'])) {
    if (($media = node_load($vars['row']->field_entity_id[0]['raw']['nid']))
      && ($photo = reset(field_get_items('node', $media, 'field_photo_image')))) {
      $theme_data = array(
        'style_name' => 'media_gallery',
        'path' => $photo['uri'],
        'alt' => $media->title,
        'title' => $media->title,
        'attributes' => array(
          'class' => 'photo',
        ),
      );
      $vars['output'] = l(theme('image_style', $theme_data), "node/{$vars['row']->nid}", array("html" => TRUE));
    }
  }
}
