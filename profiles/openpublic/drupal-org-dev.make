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
