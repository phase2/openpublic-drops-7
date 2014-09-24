<?php
/**
 * @file
 * Overrides themeing for entity_boxes feature
 *
 * Outputs the field collections without any extra divs.
 *
 * Additional variables:
 * $rotator_id - A unique ID used for JS to identify this rotator.
 */
?>
<div id="<?php print $rotator_id; ?>" class="home-rotator clearfix">
  <?php
    foreach (element_children($content['field_feature_slides']) as $key) {
      if (!empty($content['field_feature_slides'][$key]['entity']['field_collection_item'])) {
        $key2 = key($content['field_feature_slides'][$key]['entity']['field_collection_item']);
        print render($content['field_feature_slides'][$key]['entity']['field_collection_item'][$key2]);
      }
    }
  ?>
</div>