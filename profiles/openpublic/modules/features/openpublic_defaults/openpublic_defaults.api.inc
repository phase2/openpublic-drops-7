<?php


function openpublic_defaults_requirements_api() {

  $recaptcha = array(
    'title'=> 'Recaptcha',
    'description' => 'The Recaptcha API allows for a powerful CAPTCHA on forms, it can be configure ' . l('here', 'admin/config/people/captcha/recaptcha', array('query'=>drupal_get_destination())) . '.',
  );
  $recaptcha_public_key = variable_get('recaptcha_public_key', FALSE);
  $recaptcha_private_key = variable_get('recaptcha_private_key', FALSE);
  if($recaptcha_public_key && $recaptcha_private_key) {
    $recaptcha['value'] = 'API Key Configured';
    $recaptcha['severity'] = REQUIREMENT_OK;
  }
  else {
    $recaptcha['value'] = 'API Key Missing';
    $recaptcha['severity'] = REQUIREMENT_ERROR;
    #$recaptcha['description'] = drupal_render(drupal_get_form('recaptcha_admin_settings'));
    
  }

  $google_analytics = array(
    'title'=> 'Google Analytics',
    'description' => 'The Google Analytics API allows for robust metrics on site visitors, it can be configured ' . l('here', 'admin/config/system/googleanalytics', array('query'=>drupal_get_destination())) . '.',
  );
  $google_analytics_key = variable_get('googleanalytics_account', FALSE);
  if($google_analytics_key) {
    $google_analytics['value'] = 'API Key Configured';
    $google_analytics['severity'] = REQUIREMENT_OK;
  }
  else {
    $google_analytics['value'] = 'API Key Missing';
    $google_analytics['severity'] = REQUIREMENT_ERROR;
    
  }

  return array(
    'recaptcha' => $recaptcha,
    'google_analytics' => $google_analytics,
  );

}
