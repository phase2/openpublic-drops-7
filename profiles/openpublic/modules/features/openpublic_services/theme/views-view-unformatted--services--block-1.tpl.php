<?php
// $Id: views-view-unformatted.tpl.php,v 1.6.6.1 2010/03/29 20:05:38 dereine Exp $
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div id="home-services-for-you">

  <div id="services-carousel">
    <ul class="clearfix">
      <?php foreach ($rows as $id => $row): ?>
        <?php print $row; ?>
      <?php endforeach; ?>
    </ul>
  </div>
  <div class="nav-button" id="services-previous"><a href="#">previous</a></div>
  <div class="nav-button" id="services-next"><a href="#">next</a></div>

</div>
