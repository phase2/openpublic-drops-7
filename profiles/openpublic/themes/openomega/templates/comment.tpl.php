<article<?php print $attributes; ?>>
  <header>
    <?php print render($title_prefix); ?>
    <div class="author">
      <?php print $author; ?>:
     </div>
    <?php if ($title): ?>
       <h4<?php print $title_attributes; ?>><?php print $title ?></h4>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php if (isset($unpublished)): ?>
      <em class="unpublished"><?php print $unpublished; ?></em>
    <?php endif; ?>
  </header>

  <?php print $picture; ?>

  <div<?php print $content_attributes; ?>>
    <?php
      hide($content['links']);
      print render($content);
    ?>
  </div>

  <?php if ($signature): ?>
    <div class="user-signature"><?php print $signature ?></div>
  <?php endif; ?>
  
  <footer>
    <time datetime="<?php print $datetime; ?>"><?php print $created; ?></time>
  </footer>

  <?php if (!empty($content['links'])): ?>
    <nav class="links comment-links clearfix"><?php print render($content['links']); ?></nav>
  <?php endif; ?>

</article>
