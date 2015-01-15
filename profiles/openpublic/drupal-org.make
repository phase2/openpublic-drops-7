api = 2
core = 7.x

defaults[projects][subdir] = "contrib"

projects[addthis][version] = 2.1-beta1

projects[addressfield][version] = 1.0-beta5

projects[apps][version] = 1.0-beta20

projects[boxes][version] = 1.2
projects[boxes][patch][2304795] = https://www.drupal.org/files/issues/2304795-boxes-revert-4.patch

projects[captcha][version] = 1.2
projects[captcha][patch][825088] = https://www.drupal.org/files/issues/captcha-exportable_support_for_captcha_points-825088-66.patch

projects[colorbox][version] = 1.6

projects[comment_notify][version] = 1.2
projects[comment_notify][patch][1892658] = https://www.drupal.org/files/issues/1892658-comment_notify-node_type_default-6.patch

projects[conditional_styles][version] = 2.2

projects[context][version] = 3.6
projects[context][patch][1892658] = https://www.drupal.org/files/issues/455908-context-weight-123.patch

projects[context_bool_field][version] = 1.0

projects[context_breadcrumb_current_page][version] = 1.0

projects[context_condition_admin_theme][version] = 1.0

projects[context_field][version] = 1.0

projects[ctools][version] = 1.5
projects[ctools][patch][1901106] = https://www.drupal.org/files/ctools-views_content-exposed_form_override-1901106-20.patch

projects[date][version] = 2.8

projects[defaultcontent][version] = 1.0-alpha9
projects[defaultcontent][patch][2049527] = https://www.drupal.org/files/2049527-defaultcontent_node_load_refresh-1.patch
projects[defaultcontent][patch][2292813] = https://www.drupal.org/files/issues/2292813-defaultcontent-files-2.patch
projects[defaultcontent][patch][2303163] = https://www.drupal.org/files/issues/2303163-defaultcontent-pathauto-2.patch
projects[defaultcontent][patch][2321545] = https://www.drupal.org/files/issues/2321545-defaultcontent-taxonomy-1.patch

projects[delta][version] = 3.0-beta11
projects[delta][patch][1532196] = https://www.drupal.org/files/breadcrumb_empty_despite_current_enabled-1532196-2.patch

projects[diff][version] = 3.2

projects[entity][version] = 1.5
projects[entity][patch][2307807] = https://www.drupal.org/files/issues/2307807-entity-reset-insert-1.patch

projects[entity_autocomplete][version] = 1.0-beta3

projects[entity_boxes][version] = 1.0-alpha2
projects[entity_boxes][patch][2304797] = https://www.drupal.org/files/issues/2304797-entity-boxes-export-7.patch
projects[entity_boxes][patch][2047875] = https://www.drupal.org/files/issues/2047875-entity_boxes-install-6.patch

projects[entitycache][version] = 1.2

projects[features][version] = 2.3
projects[features][patch][1064340] = https://www.drupal.org/files/issues/1064340-features-files-13.patch

projects[features_template][type] = module
projects[features_template][version] = 1.0-beta1

projects[field_collection][version] = 1.0-beta8

projects[field_group][version] = 1.4

projects[follow][version] = 2.0-alpha1

projects[fullcalendar][download][type] = git
projects[fullcalendar][download][url] = http://git.drupal.org/project/fullcalendar.git
projects[fullcalendar][download][branch] = d41c651486ef247164a9d5fc22fae7be2c63c5c5
projects[fullcalendar][download][revision] = 7.x-2.x


projects[google_analytics][version] = 2.1

projects[imce][version] = 1.9

projects[imce_wysiwyg][version] = 1.0

projects[libraries][version] = 1.0

projects[link][version] = 1.3

projects[node_reference_view_formatter][version] = 1.0

projects[oauth][version] = 3.2

projects[omega][version] = 3.1
projects[omega][subdir] = ''

projects[openidadmin][version] = 1.0

projects[openomega][version] = 1.5
projects[openomega][subdir] = ''

projects[panels][version] = 3.4

projects[pathauto][version] = 1.2
projects[pathauto][patch][936222] = https://www.drupal.org/files/issues/pathauto-persist-936222-195-pathauto-state.patch

projects[recaptcha][version] = 1.11

projects[references][version] = 2.1

projects[references_dialog][version] = 1.0-beta1
projects[references_dialog][patch][1774466] = https://www.drupal.org/files/issues/references_dialog_ui_improvements-1774466-24.patch

projects[rubik][version] = 4.1
projects[rubik][subdir] = ''
projects[rubik][patch][1556392] = https://www.drupal.org/files/rubik-fix-ie-filefield-input-1556392-1.patch
projects[rubik][patch][1006274] = https://www.drupal.org/files/issues/1006274-rubik-focus-1.patch

projects[securepages][version] = 1.0-beta2

projects[static_404][version] = 1.0-beta4

projects[strongarm][version] = 2.0

projects[tao][version] = 3.1
projects[tao][subdir] = ''

projects[token][version] = 1.5

projects[twitter][version] = 5.8

projects[twitter_pull][version] = 2.0-alpha2

projects[views][version] = 3.8

projects[views_boxes][version] = 1.0

projects[views_ical][version] = 1.0-beta2

projects[webform][version] = 3.21

projects[wysiwyg][version] = 2.2

projects[xmlsitemap][version] = 2.1

libraries[colorbox][download][revision] = b357a79ff44d21b60b5ce42fcedfd85b01a5de64
libraries[colorbox][download][type] = git
libraries[colorbox][download][url] = https://github.com/jackmoore/colorbox.git

; REMOVE THIS BEFORE TAGGING.

; This should be copied to bottom of .make but removed for releases
;
projects[openomega][download][type] = git
projects[openomega][download][url] = http://git.drupal.org/project/openomega.git
projects[openomega][download][revision] = 7.x-1.x

projects[devel][version] = 1.5

projects[coder][version] = 2.2

projects[simpletest_clone][version] = 1.x-dev

; Use -dev of apps for now till cutting a new release before stable.
projects[apps][download][type] = git
projects[apps][download][url] = http://git.drupal.org/project/apps.git
projects[apps][download][revision] = 7.x-1.x
