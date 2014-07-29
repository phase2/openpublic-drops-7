<?php
/**
 * @file
 * Theme code for the openpublic home page feature.
 */

/**
 * Implements hook_theme_registery_alter().
 */
function openpublic_home_page_feature_theme_registry_alter(&$theme_registry) {
  if (!empty($theme_registry['field_collection_item'])) {
    $theme_registry['field_collection_item__field_feature_slides'] =  $theme_registry['field_collection_item'];
    $theme_registry['field_collection_item__field_feature_slides']['theme path'] = drupal_get_path('module', 'openpublic_home_page_feature') . '/theme';
    $theme_registry['field_collection_item__field_feature_slides']['template'] = $theme_registry['field_collection_item__field_feature_slides']['theme path'] . '/field-collection-item--field-feature-slides';
  }
  if (!empty($theme_registry['entity_boxes'])) {
    $theme_registry['entity_boxes__feature'] =  $theme_registry['entity_boxes'];
    $theme_registry['entity_boxes__feature']['theme path'] = drupal_get_path('module', 'openpublic_home_page_feature') . '/theme';
    $theme_registry['entity_boxes__feature']['template'] = $theme_registry['entity_boxes__feature']['theme path'] . '/entity-boxes--feature';
  }
  if (!empty($theme_registry['field_collection_item'])) {
    $theme_registry['field_collection_item__field_carousel_slides'] =  $theme_registry['field_collection_item'];
    $theme_registry['field_collection_item__field_carousel_slides']['theme path'] = drupal_get_path('module', 'openpublic_home_page_feature') . '/theme';
    $theme_registry['field_collection_item__field_carousel_slides']['template'] = $theme_registry['field_collection_item__field_carousel_slides']['theme path'] . '/field-collection-item--field-carousel-slides';
  }
  if (!empty($theme_registry['entity_boxes'])) {
    $theme_registry['entity_boxes__carousel'] =  $theme_registry['entity_boxes'];
    $theme_registry['entity_boxes__carousel']['theme path'] = drupal_get_path('module', 'openpublic_home_page_feature') . '/theme';
    $theme_registry['entity_boxes__carousel']['template'] = $theme_registry['entity_boxes__carousel']['theme path'] . '/entity-boxes--carousel';
  }
}

/**
 * Implements hook_preprocess_entity().
 */
function openpublic_home_page_feature_preprocess_entity(&$variables) {
  static $js_added = FALSE, $carousel_js_added = FALSE;
  // field_collection_item is purely a template suggestion and preprocess must be on entity.
  if ($variables['entity_type'] == 'field_collection_item' && $variables['field_collection_item']->field_name == 'field_feature_slides') {
    $variables['slide_title'] = !empty($variables['content']['field_feature_slides_title'][0]) ? drupal_render($variables['content']['field_feature_slides_title'][0]) : '';
    $variables['slide_url'] = !empty($variables['content']['field_feature_slides_url'][0]['#element']['url']) ? check_plain($variables['content']['field_feature_slides_url'][0]['#element']['url']) : '';
    $variables['slide_body'] = !empty($variables['content']['field_feature_slides_body'][0]) ? drupal_render($variables['content']['field_feature_slides_body'][0]) : '';
    $variables['slide_image'] = !empty($variables['content']['field_feature_slides_image'][0]) ? drupal_render($variables['content']['field_feature_slides_image'][0]) : '';

    $variables['slide_nav'] = '';
    if (!empty($variables['elements']['#entity_boxes']) && ($items = field_get_items('entity_boxes', $variables['elements']['#entity_boxes'], 'field_feature_slides')) && count($items) > 1) {
      foreach ($items as $item_key => $item) {
        $active_slide = $item['value'] == $variables['field_collection_item']->item_id ? 'class="activeSlide"' : '';
        $variables['slide_nav'] .= '<li><a href="#" onclick="homepage_feature_rotator_rotate_slide_' . $variables['elements']['#entity_boxes']->entity_boxes_id . '(' . $item_key . '); return false;" ' . $active_slide . '>' . ($item_key+1) . '</a></li>';
      }
      $variables['slide_nav'] = '<ul>' . $variables['slide_nav'] . '</ul>';
    }
  }
  if ($variables['entity_type'] == 'entity_boxes' && $variables['entity_boxes']->type == 'feature' && !empty($variables['content']['field_feature_slides'])) {
    drupal_add_css(drupal_get_path("module", 'openpublic_home_page_feature') . "/theme/home-page-rotator.css", 'file');
    drupal_add_js(drupal_get_path("module", 'openpublic_home_page_feature') . "/theme/jquery.cycle.min.js", 'file');
    $variables['rotator_id'] = drupal_html_id('home-rotator-' . $variables['entity_boxes']->entity_boxes_id);
    foreach (element_children($variables['content']['field_feature_slides']) as $key) {
      $key2 = key($variables['content']['field_feature_slides'][$key]['entity']['field_collection_item']);
      $variables['content']['field_feature_slides'][$key]['entity']['field_collection_item'][$key2]['#entity_boxes'] = $variables['entity_boxes'];
    }
    // Add the JS if more than one slide.
    if (count($variables['content']['field_feature_slides']) > 1) {
      // @todo Use a js file or cleaner implementation for slide switching.
      drupal_add_js('
        function homepage_feature_rotator_rotate_slide_' . $variables['entity_boxes']->entity_boxes_id . '(slide_no) {
          jQuery("#' . $variables['rotator_id'] . '").cycle("pause");
          jQuery("#' . $variables['rotator_id'] . '").cycle(slide_no);
        }
      ', 'inline');
  
      drupal_add_js(
        'jQuery("#' . $variables['rotator_id'] . '").cycle({
          fx:     "fade",
          speed:   600,
          timeout: 4000,
          cleartypeNoBg: 1,
          height: "auto",
          width: "auto",
          slideResize: 0,
          pause:   true,
          pauseOnPagerHover: 1
        });',
        array('type' => 'inline', 'scope' => 'footer')
      );
    }
    else {
      drupal_add_css(
        '#' . $variables['rotator_id'] . ' .home-rotator-slide {
          display: block;
          margin: 0;
        }
        ',
        array('type' => 'inline', 'group' => CSS_THEME, 'weight' => 30)
      );
    }
  }
  if ($variables['entity_type'] == 'field_collection_item' && $variables['field_collection_item']->field_name == 'field_carousel_slides') {
    if (!empty($variables['content']['field_carousel_slides_url'][0])) {
      $variables['url'] = drupal_render($variables['content']['field_carousel_slides_url'][0]);
    }
    elseif ($variables['content']['field_carousel_slides_node'][0]['#href']) {
      $variables['url'] = $variables['content']['field_carousel_slides_node'][0]['#href'];
    }
    else {
      $variables['url'] = '';
    }
    if (!empty($variables['content']['field_carousel_slides_image'][0])) {
      $variables['content']['field_carousel_slides_image'][0]['#item']['attributes']['class'][] = 'photo';
      $variables['image'] = drupal_render($variables['content']['field_carousel_slides_image'][0]);
    }
    elseif ($variables['content']['field_carousel_slides_node'][0]) {
      // Find an image field on this node and render using the carousel image style.
      $node = $variables['content']['field_carousel_slides_node'][0]['#options']['entity'];
      foreach (field_info_instances('node', $node->type) as $field_name => $field_data) {
        if (!empty($node->{$field_name})) {
          $field_info = field_info_field($field_name);
          if ($field_info['type'] == 'image') {
            $image = field_view_field('node', $node, $field_name, array(
              'label' => 'hidden',
              'module' => 'image',
              'settings' => array(
                'image_link' => '',
                'image_style' => 'carousel_size',
              ),
              'type' => 'image',
            ));
            if ($image) {
              $image[0]['#item']['attributes']['class'][] = 'photo';
              $variables['image'] = drupal_render($image[0]);
              break;
            }
          }
        }
      }
    }
    else {
      $variables['image'] = '';
    }
    if (!empty($variables['content']['field_carousel_slides_title'][0])) {
      $variables['title'] = drupal_render($variables['content']['field_carousel_slides_title'][0]);
    }
    elseif ($variables['content']['field_carousel_slides_node'][0]['#title']) {
      $variables['title'] = $variables['content']['field_carousel_slides_node'][0]['#title'];
    }
    else {
      $variables['title'] = '';
    }
  }
  if ($variables['entity_type'] == 'entity_boxes' && $variables['entity_boxes']->type == 'carousel' && !empty($variables['content']['field_carousel_slides'])) {
    $variables['carousel_id'] = drupal_html_id('carousel');
    if (!$carousel_js_added) {
      $carousel_js_added = TRUE;
      $path = drupal_get_path('module', 'openpublic_home_page_feature');
      drupal_add_js($path . '/theme/jquery.cycle.min.js');
      drupal_add_js($path . '/theme/carousel/jcarousellite_1.0.1.min.js');
      drupal_add_js($path . '/theme/carousel/jquery.easing.1.3.js');
      drupal_add_js($path . '/theme/carousel/carousel.js');
      drupal_add_css($path . '/theme/carousel/carousel.css');
      
    }
  }
}
