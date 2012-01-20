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

  <?php print render($content); ?>

</div></div> <!-- /node-inner, /node -->
