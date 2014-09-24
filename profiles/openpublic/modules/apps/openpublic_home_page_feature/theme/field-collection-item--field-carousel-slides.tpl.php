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
<li class="entry">
  <a href="<?php print $url; ?>">
    <?php print $image; ?>
  </a>
  <h4>
    <a href="<?php print $url; ?>">
      <?php print $title; ?>
    </a>
  </h4>
</li>