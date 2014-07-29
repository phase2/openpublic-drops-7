<?php
/**
 * @file
 * Admin menu callbacks for login flow.
 */

/**
 * Form defination to configure login flow.
 */
function login_flow_config_form($form, $form_state) {
  $form = array();
  $form['user_failed_login_identifier_uid_only'] = array(
    '#type' => 'checkbox',
    '#title' => ('Do not count by ip but my user only'),
    '#default_value' => variable_get('user_failed_login_identifier_uid_only', FALSE),
  );
  $form['user_failed_login_user_limit'] = array(
    '#type' => 'textfield',
    '#title' =>  t('Permanent ban threshold'),
    '#default_value' => variable_get('user_failed_login_user_limit', 5),
  );
  $form['user_failed_login_user_window'] = array(
    '#type' => 'textfield',
    '#title' => t('Window to use for Permanent Ban'),
    '#default_value' => variable_get('user_failed_login_user_window', 21600),
  );
  $form['user_failed_login_user_limit_temporary'] = array(
    '#type' => 'textfield',
    '#title' =>  t('Temporary ban threshold'),
    '#default_value' => variable_get('user_failed_login_user_limit_temporary', 3),
  );
  $form['user_failed_login_user_window_temporary'] = array(
    '#type' => 'textfield',
    '#title' =>  t('Window to use for Temporary Block'),
    '#default_value' => variable_get('user_failed_login_user_window_temporary', 86400),
  );
  $form['user_temporary_block_window'] = array(
    '#type' => 'textfield',
    '#title' =>  t('Length of time a user is temporary blocked'),
    '#default_value' => variable_get('user_temporary_block_window', 1200),
  );
  $form = system_settings_form($form);
  return $form;
}
