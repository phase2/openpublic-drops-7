<?php
/**
 * @file
 * Code for the OpenPublic profile.
 */

/**
* A trick to enforce page refresh when theme is changed from an overlay.
*/
function openpublic_admin_paths_alter(&$paths) {
  $paths['admin/appearance/default*'] = FALSE;
}

/**
 * Implements hook_appstore_stores_info().
 */
function openpublic_apps_servers_info() {
 $info =  drupal_parse_info_file(dirname(__file__) . '/openpublic.info');
 return array(
   'openpublic' => array(
     'title' => 'OpenPublic',
     'description' => "Apps for the Openpublic distribution",
     'manifest' => 'http://appserver.openpublicapp.com/app/query/openpublic-stable',
     'profile' => 'openpublic',
     'profile_version' => isset($info['version']) ? $info['version'] : '7.x-1.x-dev',
     'server_name' => !empty($_SERVER['SERVER_NAME']) ? $_SERVER['SERVER_NAME'] : '',
     'server_ip' => !empty($_SERVER['SERVER_ADDR']) ? $_SERVER['SERVER_ADDR'] : '',
   ),
 );
}

/**
 * Implements hook_install_configure_form_alter().
 */
function openpublic_form_install_configure_form_alter(&$form, &$form_state) {
  $form['site_information']['site_name']['#default_value'] = 'OpenPublic';
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
  if (!empty($_SERVER['HTTP_HOST'])) {
    $form['admin_account']['account']['mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST'];
    $form['site_information']['site_mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST'];
  }
}

/**
 * Implements hook_features_pipe_node_alter().
 */
function openpublic_features_pipe_node_alter(&$more, $data, $export) {
  // Enforces permissions being owned by feature defining them.
  foreach ($data as $node_type) {
    if (node_type_get_type($node_type)) {
      foreach (array_keys(node_list_permissions($node_type)) as $permission) {
        $more['user_permission'][] = $permission;
      }
    }
  }
}

/**
 * Implements hook_requirements_api().
 */
function openpublic_requirements_api() {
  $return = array();
  $attributes = array('query' => drupal_get_destination());
  if (module_exists('recaptcha')) {
    $recaptcha = array(
      'title' => t('Recaptcha'),
      'description' => t('The Recaptcha API allows for a powerful CAPTCHA on forms, <a href="@url">configure it here</a>.', array('@url' => url('admin/config/people/captcha/recaptcha', $attributes))),
    );
  
    $recaptcha_public_key = variable_get('recaptcha_public_key', FALSE);
    $recaptcha_private_key = variable_get('recaptcha_private_key', FALSE);
    if ($recaptcha_public_key && $recaptcha_private_key) {
      $recaptcha['value'] = t('API Key Configured');
      $recaptcha['severity'] = REQUIREMENT_OK;
    }
    else {
      $recaptcha['value'] = t('API Key Missing');
      $recaptcha['severity'] = REQUIREMENT_ERROR;
    }
    $return['recaptcha'] = $recaptcha;
  }

  if (module_exists('googleanalytics')) {
    $google_analytics = array(
      'title' => t('Google Analytics'),
      'description' => t('The Google Analytics API allows for robust metrics on site visitors, <a href="@url">configure it here</a>.', array('@url' => url('admin/config/system/googleanalytics', $attributes))),
    );
  
    $google_analytics_key = variable_get('googleanalytics_account', FALSE);
    if ($google_analytics_key) {
      $google_analytics['value'] = t('API Key Configured');
      $google_analytics['severity'] = REQUIREMENT_OK;
    }
    else {
      $google_analytics['value'] = t('API Key Missing');
      $google_analytics['severity'] = REQUIREMENT_ERROR;
    }
    $return['google_analytics'] = $google_analytics;
  }
  if (module_exists('twitter')) {
    module_load_include('install', 'twitter');
    $return += twitter_requirements('runtime');
  }

  return $return;
}

/**
 * Implements hook_system_info().
 */
function openpublic_system_info_alter(&$info, $file, $type) {
  // This module is not needed for general feature listing on 99.9% of sites.
  if ($file->name == 'date_migrate_example') {
    $info['hidden'] = 1;
  }
}


/**
 * Implements hook_user_login().
 */
function openpublic_user_login(&$edit, $account) {
  // Redirecting to the dashboard if they have perms to the dashboard.
  // Variable has no configuration page.
  if (user_access("access dashboard", $account) && variable_get('openpublic_user_login_redirect_dashboard', TRUE)) {
    $edit['redirect'] = module_exists('overlay') ? array("<front>", array('fragment' => 'overlay=admin/dashboard')) : 'admin/dashboard';
  }
}


/**
 * Implements hook_features_post_restore().
 */
function openpublic_features_post_restore($op, $items) {
  // Certian components we assume the user will likely override, so we lock
  // them by default (after the first rebuild just in case).
  // If they have unlocked, the openpublic_been_locked will prevent from
  // relocking the variable.
  $been_locked = $been_locked_old = variable_get('openpublic_been_locked', array());
  $lock_components = array('user_permission', 'variable');
  if (variable_get('openpublic_lock_on_enable', TRUE) && $op == 'rebuild') {
    foreach ($items as $module_name => $components) {
      $lock_these = array_intersect($lock_components, $components);
      if (empty($been_locked[$module_name]) || ($lock_these = array_diff($lock_these, $been_locked[$module_name]))) {
        foreach ($lock_these as $component) {
          features_feature_lock($module_name, $component);
          $been_locked[$module_name][$component] = $component;
        }
      }
    }
  }
  if ($been_locked_old !== $been_locked) {
    variable_set('openpublic_been_locked', $been_locked);
  }
}
