<?php
/**
 * @file
 *  Override the follow block for different themeing.
 */
?>
<div id="stay-connected" class="follow-links clearfix connect-block">
  <h3><?php print t('Stay Connected') ?></h3>
  <ul class="clearfix">
    <?php foreach (element_children($elements['follow-links']) as $link_key): ?>
      <?php $link = $elements['follow-links'][$link_key]['#link']; ?>
      <?php $title = $link->title; ?>
      <li class="<?php print $link->name; ?>"><?php print theme('follow_link', array('link' => $link, 'title' => $title)) ?></li>
    <?php endforeach; ?>
  </ul>
</div>