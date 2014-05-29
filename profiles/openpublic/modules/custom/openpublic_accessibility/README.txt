OpenPublic Accessibility helps make sites more accessible.

I Skip Links

 A. Currently most themes have a hardcoded skip link option.
This module provides a variable to html.tpl.php of $skip_links which
is a render array of links

Other modules can add new links my using the
openpublic_accessibility_add_skip_link($link) function. This function
expects a fully formed link render array.  To generate this for an skip
link use openpublic_accessibility_build_skip_link($text, $anchor).

I think needs to have a <?php print drupal_render($skip_links) ?> in thier html.tpl.php for any of this to work.

 B. The module automaticly adds the #main-content skip link, and if there are error messages (or status messages or warning messages) a skip link to those messages 
 NOTE: the error message will not link to anything if http://drupal.org/node/1369024 patch is not applied to core
