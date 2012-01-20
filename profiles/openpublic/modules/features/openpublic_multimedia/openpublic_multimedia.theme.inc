<?php

function openpublic_multimedia_menu() {
  return array(
    'colorbox/node/%node' => array(
      'page callback' => 'openpublic_multimedia_colorbox_node',
      'page arguments'=> array(2),
      'access callback' => TRUE,
    ),
  );
}

function openpublic_multimedia_colorbox_node($node) {
  print render(node_view($node));
}

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
/*
 * imlement hook_preprocess_views_view_field
 *
 * we are changing the thumbnail image on media_gallery becuase we do not have relationships yet
 * we are finding the current node, then looking for the media field, and then takeing the first media and finding
 * its image 
 * NOTE this will only work with photo nodes
 */
function openpublic_multimedia_preprocess_views_view_field(&$vars) {
  
  global $language;
  if(($vars['view']->name == 'media_gallery')
    && ($vars['field']->options['ui_name'] == 'Thumbnail')
  ) {
    $field_media_gallery_media = $vars['row']->_field_data['nid']['entity']->field_media_gallery_media;
    $lang = isset($field_media_gallery_media[$language->language]) ? $language : LANGUAGE_NONE;
    $nid = isset($field_media_gallery_media[$lang]) && !empty($field_media_gallery_media[$lang]) ? $field_media_gallery_media[$lang][0]['nid'] : FALSE;
    if($nid
        && ($media = entity_load('node', array($nid)))
        && ($media = $media[$nid])
        && ($lang = isset($media->field_photo_image[$language->language]) ? $language : LANGUAGE_NONE)
        && isset($media->field_photo_image[$lang])
        && !empty($media->field_photo_image[$lang])
    ) {
      $theme_data = array(
        'style_name' => 'media_gallery',
        'path' => $media->field_photo_image[$lang][0]['uri'],
        'alt' => $media->title,
        'title' => $media->title,
        'attributes' => array(
          'class' => 'photo',
        ),
      );
      $vars['output'] = l(theme('image_style', $theme_data), "node/{$vars['row']->nid}", array("html"=>'TRUE'));
    }
  }
}
