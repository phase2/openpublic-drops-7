<?php
 /**
  * Custom vars defined in house_homepage_helper module
  *
  * $node_title - title linked to specified url
  * $rotator_nav - html for rotator nav 
  */
?>
  <div class="home-rotator-photo">
    <?php print $main_image; ?>
  </div>
  <div class="home-rotator-text-block">
    <div class="home-top-intro">
      <h2><?php print l($title, $fields['entity_id_3']->content); ?></h2>
      <?php print $summary; ?>
    </div><!--/home top intro-->
    <div id="home-top-read-more">
      <?php print l(t('Read More').' &raquo;', $read_more,  array('html' => true)); ?>
    </div><!--/home top read more-->
    <div id="home-top-numbers" class="clearfix">
      <ul>
        <?php print $rotator_nav; ?>       
      </ul>            
    </div>
  </div><!--/home-rotator-text-block-->
