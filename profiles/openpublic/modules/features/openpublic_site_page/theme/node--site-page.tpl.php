<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    
    <?php print render($content['body']); ?>
    
    <?php if(!empty($content['field_files'])): ?>
    <div class="downloads">
      <h4><?php print t('Downloads'); ?></h4>
      <ul>
        <?php print strip_tags(render($content['field_files']), '<li><a>'); ?>
      </ul>
    </div><!--/downloads-->
    <?php endif; ?>
  </div>  
</div>