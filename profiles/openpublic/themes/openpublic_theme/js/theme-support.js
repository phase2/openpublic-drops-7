(function ($) {
  Drupal.behaviors.theme_support = {
    attach: function(context) { 
      label = 'enter email address';
      $("#webform-component-email input")
        .blur(function (e) {
          if ($(this).val() == '') {
            $(this).val(label);
          }
        })
        .focus(function (e) {
          if ($(this).val() == label) {
            $(this).val('');
          }
        })
        .blur();
    }

  };
})(jQuery);
