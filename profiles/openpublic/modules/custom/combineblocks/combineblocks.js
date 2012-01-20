(function ($) {
Drupal.behaviors.combineBlocks = {
  'attach' : function(c) {
    for (i in Drupal.settings.combineblocks_sets) {
      blocks = Drupal.settings.combineblocks_sets[i];
      process = 1;
      for(bi in blocks) {
        if ($(blocks[bi]).size() < 1) {
          process = 0;
        }
        
        if ($(blocks[bi]).is('.combinedblock-processed')) {
          process = 0;
        }
        else {
          $(blocks[bi]).addClass('combinedblock-processed');
        }
      }
      if (process) {
        id = 'combinedblock';
        classes = $(blocks[0]).attr('class');
        $(blocks[0]).before("<div id='"+ id +"'><div class = 'combined-header'></div><div class='combined-content'></div></div>")
        start = $(blocks[0]).find('h3');
        cont = $('#' + id);
        cont.attr('class', classes);
        count = 0;
        for (id in blocks) {
          block = $(blocks[id])
          $(block).find('h3').attr("content", $(block).attr('id'));
          if (id >0) {
          }
          cont.find('.combined-content').append($(block));
          count ++;

        }
        cont.find('h3').each(function () {
          $(".combined-header").append($(this)).css('height', $(this).outerHeight());
          diff = $(this).outerWidth() - $(this).width();
          width = (cont.find('.combined-content').width())/(count) - diff;
          $(this).css("width", width);
            $(this).css('float', 'left');
          $(this).click(function () {
            $(this).trigger('open');
          });
          $(this).bind('open',function () {
            var content = $('#' + $(this).attr("content"));
            content.css("display", "block");
            $(this).addClass('current');
            $(this).siblings().trigger('close');
          });
          $(this).bind('close',function () {
            var content = $('#' + $(this).attr("content"));
            content.css("display", "none");
            $(this).removeClass('current');
          });
        });
       start.trigger('open');
     }
    }
  }
}
})(jQuery);

