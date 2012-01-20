<?php
// $Id$
/**
 * @defgroup page Page templates
 * Contains all our page templates
 */
/**
 * @file page-front.tpl.php
 * Homepage template.
 * @see page.tpl.php for all available variables.
 * @ingroup page
 */
?>
<?php require_once dirname(__FILE__) . '/page-header.inc'; ?>
<div class="center-on-page">
  <div id="control">
    <?php if ($messages): ?>
      <div id="console" class="clearfix"><?php print $messages; ?></div>
    <?php endif; ?>
    
    <?php if ($page['help']): ?>
      <div id="help">
        <?php print render($page['help']); ?>
      </div>
    <?php endif; ?>
    
    <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
  </div> <!--/#control-->
  <div class="body-text clearfix">
    <div id="content" class="clearfix">
    <?php print render($page['help']); ?>
    <?php print render($page['content_prefix']); ?>
    <?php print render($page['content_suffix']); ?>
      <div id="main" class="clear clearfix">
        <div class="section-col col-3 first-col">
          <?php print render($page['inner_first']); ?>
        </div>
        <div class="section-col col-3">
          <?php print render($page['inner_second']); ?>
        </div>
        <div class="section-col col-3 last-col">
          <?php print render($page['sidebar_first']); ?>
        </div>
      </div>
    </div>
  </div><!--/.body-text-->
</div><!--/.center-on-page -->
<?php require_once dirname(__FILE__) . '/page-footer.inc'; ?>
