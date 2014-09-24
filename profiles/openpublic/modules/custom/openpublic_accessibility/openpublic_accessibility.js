/**
 * @file
 *  Provide skip link and other accessibility enhancements.
 */
 
(function ($) {
  Drupal.behaviors.openpublicAccessibilityAddskipLink = {
    attach: function (context, settings) {
      // Chrome has an issue where skip to content doesn't work
      // @see https://code.google.com/p/chromium/issues/detail?id=37721
      jQuery('[href^="#"][href!="#"]', context).click(function() {
        jQuery(jQuery(this).attr('href')).attr('tabIndex', -1).focus();
      });
    }
  };
})(jQuery);

