<?php
/**
 * @file
 * openpublic_multimedia.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function openpublic_multimedia_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_views_api().
 */
function openpublic_multimedia_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_image_default_styles().
 */
function openpublic_multimedia_image_default_styles() {
  $styles = array();

  // Exported image style: media_gallery
  $styles['media_gallery'] = array(
    'name' => 'media_gallery',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '165',
          'height' => '125',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implementation of hook_node_info().
 */
function openpublic_multimedia_node_info() {
  $items = array(
    'media_gallery' => array(
      'name' => t('Media Gallery'),
      'base' => 'node_content',
      'description' => t('A collection of multimedia, such as photos and videos.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'photo' => array(
      'name' => t('Photo'),
      'base' => 'node_content',
      'description' => t('An image and its meta data.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
