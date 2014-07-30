(function ($) {

/**
 * Build the display name (title) from the First+Last names or organization name.
 */
Drupal.behaviors.openpublic_person_name = {
  /**
   * Attaches the behavior.
   *
   */
  attach: function (context, settings) {
  //Drupal.settings.openpublic_person.firstName
   var firstname = Drupal.settings.openpublic_person.firstName;
   var lastname = Drupal.settings.openpublic_person.lastName;
   var orgname = Drupal.settings.openpublic_person.orgName;

    var sources = {
      firstname: $(firstname, context).addClass('display-name-source'),
      lastname: $(lastname, context).addClass('display-name-source'),
      orgname: $(orgname, context).addClass('display-name-source'),
    }
    for (key in sources) {
      sources[key].bind('keyup.displayName change.displayName', function () {
        var content = '';
        // This makes Organization name take precedence over First+Last name
        //content = (sources['orgname'].val()) ? sources['orgname'].val() : sources['firstname'].val() + ' ' + sources['lastname'].val();
        
        // This makes First+Last name take precedence over Organization name
        content = (sources['firstname'].val() || sources['lastname'].val()) ? sources['firstname'].val() + ' ' + sources['lastname'].val() : sources['orgname'].val();
        $('#edit-title').val(content);
      });
    }
    
    $("#edit-field-profile-staff-und").click(function (){
      if (($("#edit-field-profile-staff-und:checked").length) && $(".staff-information.collapsed").length) {
        $(".staff-information .fieldset-legend a").click();
      }
    });
  },
};

})(jQuery);
