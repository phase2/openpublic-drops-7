(function ($) {
  Drupal.behaviors.entityboxes = { 
    attach: function(context, settings) {
      
      // Trigger the upload button automatically when a file is chosen      
      $('.field-type-image input.form-file:not(.auto_upload-processed)', context).addClass('auto_upload-processed').change(function() {
        $(this).parent().find('input.form-submit').mousedown();
      });
    }
  };
})(jQuery);