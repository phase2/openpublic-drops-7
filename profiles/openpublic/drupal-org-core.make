api = 2
core = 7.x
projects[drupal][version] = 7.67
projects[drupal][type] = core
projects[drupal][patch][992540] = https://www.drupal.org/files/issues/992540-3-reset_flood_limit_on_password_reset-drush.patch
projects[drupal][patch][1369024] = https://www.drupal.org/files/1369024-theme-inc-add-messages-id-make-D7.patch
projects[drupal][patch][1369584] = https://www.drupal.org/files/1369584-form-error-link-from-message-to-element-D7.patch
projects[drupal][patch][1697570] = https://www.drupal.org/files/drupal7.menu-system.1697570-29.patch
; Fixes disabling of node types when feature/app disabled.
projects[drupal][patch][1441950] = https://www.drupal.org/files/issues/1441950-drupal_node_types_custom-8.patch
; Following patch is actually dup of #1824636, fixed in D8 and needs backport to D7.  Removing for now.
; projects[drupal][patch][2124397] = https://www.drupal.org/files/issues/2124397-drupal-file-upload-19-do-not-test.patch
