(function ($) {
  Drupal.behaviors.context_ui_dialog = { attach: function(context) {
    $('#context_ui_dialog-context-ui').dialog({
      width: 350,
      height: 450,
      //position: 'left',
      position: [0, 75],
      zIndex: 0,
      draggable: false,
      resizable: false,
      title: 'Context Editor',
      hide: 'slide',
      open: function () {
        $('#context_ui_dialog-context-ui').show();
        $('#context_ui_dialog-context-ui').parent().css('position', 'fixed');

        $('div.ui-dialog-titlebar').click(function () {
          $('#context_ui_dialog-context-ui').toggle(400);
        });

        $(".context-block-addable").mousedown(function () {
          $('#context_ui_dialog-context-ui').attr('location', $('#context_ui_dialog-context-ui').parent().css('left'));
          $('#context_ui_dialog-context-ui').parent().animate({'left':-300}, 1000);
          $('body').one('mouseup',function () {
            $('#context_ui_dialog-context-ui').parent().animate({'left':$('#context_ui_dialog-context-ui').attr('location')}, 1000);
          });
        });
      },
      close: function () {
        window.location.href =  "/context-ui/deactivate?destination=" + window.location.pathname.replace(/^./,"");
      }
    });

    // Hide the context editor if we're editing or adding a box
    if ($('#boxes-box-form').length || $('.boxes-box-editing').length) {
      $('#context_ui_dialog-context-ui').hide();
      $('#context-ui-editor .links a.done').click();
    }
    else {
      $('#context_ui_dialog-context-ui').show();
    }
    
    // Trigger Edit mode (init)
    $('#context-ui-editor .links a.edit').first().click();
    
    // Conceal Section title, subtitle and class
    $('div.context-block-browser').nextAll('.form-item').hide();

    // Add a class to body
    $('body').once().addClass('context-field-editor');
  }
  };
})(jQuery);
