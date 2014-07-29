<?php
/**
 * @file
 * openpublic_home_page_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openpublic_home_page_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openpublic_home_page_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entity_boxes_type().
 */
function openpublic_home_page_feature_default_entity_boxes_type() {
  $items = array();
  $items['carousel'] = entity_import('entity_boxes_type', '{
    "type" : "carousel",
    "label" : "Carousel",
    "weight" : "0",
    "data" : "",
    "rdf_mapping" : []
  }');
  $items['feature'] = entity_import('entity_boxes_type', '{
    "type" : "feature",
    "label" : "Feature",
    "weight" : "0",
    "data" : "",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_image_default_styles().
 */
function openpublic_home_page_feature_image_default_styles() {
  $styles = array();

  // Exported image style: home_page_feature.
  $styles['home_page_feature'] = array(
    'label' => 'home_page_feature',
    'name' => 'home_page_feature',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 520,
          'height' => 280,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: carousel_size.
  $styles['carousel_size'] = array(
    'label' => 'carousel_size',
    'name' => 'carousel_size',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 130,
          'height' => 80,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
