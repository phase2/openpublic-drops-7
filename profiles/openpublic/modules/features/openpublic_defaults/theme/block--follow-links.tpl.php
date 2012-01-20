<?php
/**
 * $links
 * $networks
 */
?>
<div id="stay-connected" class="follow-links clearfix connect-block">
  <h3>Stay Connected</h3>
  <ul class="clearfix">
    <?php foreach($links as $link): ?>
    <?php if ($link->name == 'this-site') continue; ?>
    <?php $title = !empty($link->title) ? $link->title : $networks[$link->name]['title']; ?>
    <li class="<?php print $link->name; ?>"><?php print theme('follow_link', array('link' => $link, 'title' => $title)) ?></li>
    <?php endforeach; ?>
  </ul>
</div>