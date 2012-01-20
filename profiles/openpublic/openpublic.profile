<?php

/**
 * Implements hook_form_alter().
 *
 * Allows the profile to alter the site-configuration form. This is
 * called through custom invocation, so $form_state is not populated.
 */
function openpublic_form_alter(&$form, $form_state, $form_id) {
  if ($form_id == 'install_configure_form' && !defined('DRUSH_BASE_PATH')) {
    $roles = array(DRUPAL_AUTHENTICATED_RID);
    $policy = _password_policy_load_active_policy($roles);

    $translate = array();
    if (!empty($policy['policy'])) {
      // Some policy constraints are active.
      password_policy_add_policy_js($policy, 1);
      foreach ($policy['policy'] as $key => $value) {
        $translate['constraint_'. $key] = _password_policy_constraint_error($key, $value);
      }
    }

    // Set a custom form validate and submit handlers.
    $form['#validate'][] = 'openpublic_password_validate';
    $form['#submit'][] = 'openpublic_password_submit';  
  }
}


/**
* A trick to enforce page refresh when theme is changed from an overlay.
*/
function openpublic_admin_paths_alter(&$paths) {  
  $paths['admin/appearance/default*'] = FALSE;
}


/**
 * Password save validate handler.
 */
function openpublic_password_validate($form, &$form_state) {
  $values = $form_state['values'];
  $account = (object)array('uid' => 1);
  $account->roles = array(DRUPAL_AUTHENTICATED_RID => DRUPAL_AUTHENTICATED_RID);

  if (!empty($values['account']['pass'])) {
    $error = _password_policy_constraint_validate($values['account']['pass'], $account);
    if ($error) {
      form_set_error('pass', t('Your password has not met the following requirement(s):') .'<ul><li>'. implode('</li><li>', $error) .'</li></ul>');
    }
  }
}

/**
 * Password save submit handler.
 */
function openpublic_password_submit($form, &$form_state) {
  global $user;

  $values = $form_state['values'];
  $account = (object)array('uid' => 1);

  // Track the hashed password values which can then be used in the history constraint.
  if ($account->uid && !empty($values['account']['pass'])) {
    _password_policy_store_password($account->uid, $values['account']['pass']);
  }
}

/**
 * Implements hook_appstore_stores_info
 */
function openpublic_apps_servers_info() {
 $info =  drupal_parse_info_file(dirname(__file__) . '/openpublic.info');
 return array(
   'openpublic' => array(
     'title' => 'OpenPublic',
     'description' => "Apps for the Openpublic distribution",
     'manifest' => 'http://appserver.openpublicapp.com/app/query',
     'profile' => 'openpublic',
     'profile_version' => isset($info['version']) ? $info['version'] : '7.x-1.0-beta1',
     'server_name' => $_SERVER['SERVER_NAME'],
     'server_ip' => $_SERVER['SERVER_ADDR'],
   ),
 );
}

/**
 * Implements hook_init
 */
function openpublic_init() {
 $cache = cache_get("openpublic_info");
 if (isset($cache->data)) {
   $data = $cache->data;
 }
 else {
   $info =  drupal_parse_info_file(dirname(__file__) . '/openpublic.info');
   $data = array("profile" => "openpublic", "profile_version" => $info['version']);
   cache_set("openpublic_info", $data);
 }
 drupal_add_js($data, 'setting');

}

/**
 * implements hook_install_configure_form_alter()
 */
function openpublic_form_install_configure_form_alter(&$form, &$form_state) {
  $form['site_information']['site_name']['#default_value'] = 'Openpublic'; 
  $form['site_information']['site_mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST']; 
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'admin@'. $_SERVER['HTTP_HOST']; 
}

