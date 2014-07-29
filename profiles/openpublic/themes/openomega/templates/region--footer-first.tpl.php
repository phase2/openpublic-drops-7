<?php
/**
 * @file
 * Overrides rendering of footer-first region.
 */
?>
<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <section id="footer-logo-subscribe" class="clearfix">
      <?php print $footer_logo ?>
      <?php if ($site_name) : ?>
        <div class = 'site-name'><?php print l($site_name, '<front>') ?></div>
      <?php endif; ?>
      <?php if (!empty($subscribe_form)) : ?>
        <div id="footer-subscribe">
          <?php print drupal_render($subscribe_form)  ?>
        </div><!--/footer-subscribe-->
      <?php endif; ?>
    </section>
    <nav id="footer-nav" class="footer-nav clearfix"><?php print render($footer_menu); ?></nav>
    <section class="clearfix"><?php print $content; ?></section>
  </div>
</div>