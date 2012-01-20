<?php
// $Id$
/**
* @defgroup node Node Templates
* All of the node templates
*/
/**
 * @file node.tpl.php
 * Default node template.
 * @ingroup node
 */
 
 
?>

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"><div class="node-inner node-content">

  <div class="submitted">
    <?php print format_date($created); ?>
  </div>

  <?php //print $picture; ?>

  <?php if (!$page): ?>
    <h2 class="title">
      <a href="<?php print $node_url; ?>" title="<?php print $title ?>"><?php print $title; ?></a>
    </h2>
  <?php endif; ?>

  <?php if (!empty($unpublished)): ?>
    <div class="unpublished"><?php print t('Unpublished'); ?></div>
  <?php endif; ?>

  <div class="content clearfix">
    <?php hide($content['comments']); ?>
    <?php hide($content['links']); ?>
    <?php print render($content); ?>
    <?php print render($content['comments']); ?>
  </div>

  <?php print render($content['links']); ?>

</div></div> <!-- /node-inner, /node -->
