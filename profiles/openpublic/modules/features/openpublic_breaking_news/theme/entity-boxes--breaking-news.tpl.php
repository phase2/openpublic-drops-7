<?php
/**
 * @file
 * Overrides themeing for entity_boxes breaking news.
 *
 * Outputs the field collections without any extra divs.
 */
?>
<?php if (!empty($content['field_breaking_news_node'][0])): ?>
  <div class ="breaking-news">
    <div class="clearfix">
      <h3 class="breaking-news-header">
        <?php print t('Breaking News'); ?>
      </h3>
      <span class="headline">
        <?php print render($content['field_breaking_news_node'][0]);?>
      </span>
      <span class="read-more">
        <a href="<?php print $content['field_breaking_news_node'][0]['#href'] ?>">
          <?php print t('Read More'); ?>
        </a>
      </span>
    </div>
  </div>
<?php elseif (!empty($edit)): ?>
  <?php print $edit; ?>
<?php endif; ?>