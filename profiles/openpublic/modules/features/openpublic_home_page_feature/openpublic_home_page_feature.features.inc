<?php
/**
 * @file
 * openpublic_home_page_feature.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function openpublic_home_page_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_views_api().
 */
function openpublic_home_page_feature_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_image_default_styles().
 */
function openpublic_home_page_feature_image_default_styles() {
  $styles = array();

  // Exported image style: home_page_feature
  $styles['home_page_feature'] = array(
    'name' => 'home_page_feature',
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
          'width' => '520',
          'height' => '280',
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
function openpublic_home_page_feature_node_info() {
  $items = array(
    'home_page_feature' => array(
      'name' => t('Home Page Feature'),
      'base' => 'node_content',
      'description' => t('Featured content to display in the main carousel atop the home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
