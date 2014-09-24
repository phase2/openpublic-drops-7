(function ($) {

/**
 * Build the display name (title) from the First+Last names or organization name.
 */
Drupal.behaviors.openpublic_home_rotator = {
  /**
   * Attaches the behavior.
   *
   */
  attach: function (context, settings) {
    $('.home-rotator', context).each(function() {
      $rotator = $(this);
      $rotator.cycle({
          fx:     "fade",
          speed:   600,
          timeout: 4000,
          cleartypeNoBg: 1,
          height: "auto",
          width: "auto",
          slideResize: 0,
          pause:   true,
          after:   function() {
            var $active = $(document.activeElement);
            if ($active.parents("#" + $rotator.attr('id')).length) {
              var selector = "h2";
              var $parent_div = $active.parents("#home-top-read-more, .home-rotator-photo");
              $parent_li = $active.parents("li");
              if ($parent_div.length) {
                if ($parent_div.attr("id")) {
                  selector = "#" + $parent_div.attr("id");
                }
                else {
                  selector = "." + $parent_div.attr("class").split(" ")[0];
                }
              }
              else if ($parent_li.length) {
                selector = "li:nth-child(" + ($parent_li.index() + 1) + ")";
              }
              $("#" + $rotator.attr('id') + " .home-rotator-slide:visible " + selector + " a").focus()
            };
          },
          pauseOnPagerHover: 1
        });
      $('#home-top-numbers li a', $rotator).click(function(event) {
        $parent_li = $(this).parents('li');
        $rotator.cycle("pause");
        $rotator.cycle($parent_li.index());
        event.preventDefault();
      });
    });
  },
};

})(jQuery);
