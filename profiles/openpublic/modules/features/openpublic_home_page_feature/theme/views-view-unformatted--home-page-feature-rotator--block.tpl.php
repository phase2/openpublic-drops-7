<?php
// $Id: views-view-unformatted.tpl.php,v 1.6.6.1 2010/03/29 20:05:38 dereine Exp $
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div id="home-rotator" class="clearfix">
  <?php foreach ($rows as $id => $row): ?>
    <div class="home-rotator-slide">
      <?php print $row; ?>
    </div>
  <?php endforeach; ?>
</div>