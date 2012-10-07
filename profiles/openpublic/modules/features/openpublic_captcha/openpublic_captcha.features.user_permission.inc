<?php
/**
 * @file
 * openpublic_captcha.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openpublic_captcha_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer CAPTCHA settings
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'captcha',
  );

  // Exported permission: administer recaptcha
  $permissions['administer recaptcha'] = array(
    'name' => 'administer recaptcha',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'recaptcha',
  );

  // Exported permission: skip CAPTCHA
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'staff',
    ),
    'module' => 'captcha',
  );

  return $permissions;
}
