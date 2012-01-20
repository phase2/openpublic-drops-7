Drupal.behaviors.openpublic_services_carousel = {
  attach: function(context) {
    jQuery("#services-carousel").jCarouselLite({
      btnNext: "#services-next",
      btnPrev: "#services-previous",
      visible: Drupal.settings.openpublic_services.visible,
      easing: "easeInOutSine",
      scroll: 1,
      speed: 1000
    });
  }
};