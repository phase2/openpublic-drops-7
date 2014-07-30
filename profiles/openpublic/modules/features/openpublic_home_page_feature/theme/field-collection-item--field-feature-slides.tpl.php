<?php

/**
 * @file
 * Overrides field collection item to alter the layout
 *
 * Additional with the ones provided by entity/field collection item:
 * - $slide_url : url to display for the slide.
 * - $slide_image : image to display for the slide.
 * - $slide_body : body to display for the slide.
 * - $slide_title : title to display for the slide.
 * - $slide_nav : navigation links to other slides.
 */
?>
<div class="home-rotator-slide" >
  <div class="home-rotator-photo">
    <a href="<?php print $slide_url ?>">
      <?php print $slide_image; ?>
    </a> 
  </div>
  <div class="home-rotator-text-block">
    <div class="home-top-intro">
      <h2>
        <a href="<?php print $slide_url ?>">
          <?php print $slide_title; ?>
        </a>
      </h2>
      <?php print $slide_body; ?>
    </div>
    <div id="home-top-read-more">
      <a href="<?php print $slide_url ?>">
        <?php print t('Read More È'); ?>
      </a>
    </div>
    <div id="home-top-numbers" class="clearfix">
      <?php print $slide_nav ?>
    </div>
  </div>
</div>
