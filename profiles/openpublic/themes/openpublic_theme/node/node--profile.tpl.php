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

  <?php if (!empty($unpublished)): ?>
    <div class="unpublished"><?php print t('Unpublished'); ?></div>
  <?php endif; ?>

  <?php if ($submitted): ?>
    <div class="meta">
      <?php if (!empty($submitted)): ?>
        <div class="submitted">
          <?php print $submitted; ?>
        </div>
      <?php endif; ?>

      <?php if (!empty($terms)): ?>
        <div class="terms terms-inline"><?php print t(' in ') . $terms; ?></div>
      <?php endif; ?>
    </div>
  <?php endif; ?>

  <div class="content">
    <?php hide($content['comments']); ?>
    <?php hide($content['links']); ?>
    <?php print render($content); ?>
    <?php print render($content['comments']); ?>
  </div>

  <?php print render($content['links']); ?>

</div></div> <!-- /node-inner, /node -->
