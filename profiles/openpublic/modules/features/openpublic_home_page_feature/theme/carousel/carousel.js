Drupal.behaviors.openpublic_services_carousel = {
  attach: function(context) {
    jQuery(".carousel-wrapper").each(function(index) {
      $this = jQuery(this);
      jQuery("#" + $this.attr('id') + " .carousel-slides").jCarouselLite({
        btnNext: "#" + $this.attr('id') + " .carousel-next",
        btnPrev: "#" + $this.attr('id') + " .carousel-previous",
        easing: "easeInOutSine",
        scroll: 1,
        speed: 1000
      });
    });
  }
};