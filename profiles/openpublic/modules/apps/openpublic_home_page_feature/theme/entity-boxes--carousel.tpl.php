<?php
/**
 * @file
 * Overrides themeing for entity_boxes carousel
 *
 * Outputs the field collections without any extra divs.
 *
 * Additional variables:
 * $rotator_id - A unique ID used for JS to identify this rotator.
 */
?>
<div class="carousel-wrapper" id="<?php print $carousel_id; ?>">
  <div class="carousel-slides">
    <ul class="clearfix">
    <?php
      foreach (element_children($content['field_carousel_slides']) as $key) {
        if (!empty($content['field_carousel_slides'][$key]['entity']['field_collection_item'])) {
          $key2 = key($content['field_carousel_slides'][$key]['entity']['field_collection_item']);
          print render($content['field_carousel_slides'][$key]['entity']['field_collection_item'][$key2]);
        }
      }
    ?>
    </ul>
  </div>
  <div class="nav-button carousel-previous"><a href="#"><?php print t('previous') ; ?></a></div>
  <div class="nav-button carousel-next"><a href="#"><?php print t('next') ; ?></a></div>
</div>