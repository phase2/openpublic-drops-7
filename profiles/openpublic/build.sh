#!/bin/sh
# Script to build Open Public
# Make sure the correct number of args was passed from the command line
if [ $# -eq 0 ]; then
  echo "Usage $0 target_build_dir"
  exit 1
fi
TARGET=$1
# Make sure we have a target directory
if [ -z "$TARGET" ]; then
  echo "Usage $0 target_build_dir"
  exit 2
fi
CURDIR=`pwd -P`
ORIG_TARGET=$TARGET
TARGET=$TARGET"__build"
CALLPATH=`dirname "$0"`
ABS_CALLPATH=`cd "$CALLPATH"; pwd -P`

echo '   Open Public   '
echo '================='

set -e
echo "Building to build dir: $TARGET"
echo 'Verifying make...'
drush verify-makefile
# Remove current drupal dir
if [ -e "$TARGET" ]; then
  echo 'Removing old build directory...'
  rm -rf "$TARGET"
fi
# Do the build
  MAKEFILE='build-openpublic.make'
  DRUSH_OPTS='--no-cache --prepare-install'
  echo 'Running drush make...'
  drush make $DRUSH_OPTS "$ABS_CALLPATH/$MAKEFILE" "$TARGET"
set +e
# check to see if drush make was successful by checking for module
if [ -e "$TARGET/profiles/openpublic/modules/custom/openpublic_api" ]; then
  # Restore previous sites folder if build was successful
  if [ -e "$ORIG_TARGET/sites" ]; then
    echo "Restoring sites folder from: $ORIG_TARGET/sites"
    rm -rf "$TARGET/sites"
    mv "$ORIG_TARGET/sites" "$TARGET/sites"
  fi

  echo "Moving files to: $ORIG_TARGET"
  if [ -e "$ORIG_TARGET" ]; then
    rm -rf "$ORIG_TARGET"
  fi
  if [ -e "$ORIG_TARGET" ]; then
    echo "Error removing old files.  Please fix permissions."
    exit 1
  fi
  mv $TARGET $ORIG_TARGET
  DRUPAL=`cd "$ORIG_TARGET"; pwd -P`

  echo "Active site now in: $DRUPAL"

  # Copy libraries from profile into site libraries
  # Modules properly using Library API don't need this, but many modules
  # don't support libraries in the profile (like WYSIWYG)
  echo "Copying library files."
  rsync -r $DRUPAL/profiles/openpublic/libraries/ $DRUPAL/sites/all/libraries/

  if [ ! -e "$DRUPAL/sites/default/settings.php" ]; then
    echo "No settings.php file found"
    echo "Please run the install.php script to install Drupal and OpenPublic"
    exit 1
  fi

  # Clear caches and Run updates
  cd "$DRUPAL"
  echo 'Running updates...'
  drush updb -y;
  # @TODO Figure out why this cc all is needed
  drush cc drush;
  echo 'Reverting all features...'
  drush fra -y;
  echo 'Clearing caches...'
  drush cc all;
  echo 'Build completed successfully!'
else
  echo 'Error in build.'
  exit 2
fi
