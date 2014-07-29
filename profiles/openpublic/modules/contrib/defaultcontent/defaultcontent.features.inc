<?php
/**
 * @file
 *
 * Handles all features exporting functionality
 */

/**
 * Implements hook_features_export_options().
 */
function content_features_export_options() {
  $options = array();
  foreach (defaultcontent_get_default() as $record) {
    $options[$record->name] = $record->name;
  }
  return $options;
}

/**
 * Implements hook_features_export().
 */
function content_features_export($data, &$export, $module_name) {
  foreach ($data as $component) {
    $export['features']['content'][$component] = $component;
  }
  return array();
}

/**
 * Implements hook_features_export_render().
 */
function content_features_export_render($module_name, $data, $export = NULL) {
  $code = "  \$content = array();\n";
  asort($data);
  // Allow the exports to add additional hooks.
  $files = &drupal_static('defaultcontent_export_files');
  $files = array();
  foreach ($data as $name) {
    if ($node = defaultcontent_get_node($name)) {
      $code .= "\n";
      $code .= "  \$content['$name'] = " . defaultcontent_export_node($node) . ";\n";
    }
  }
  $code .= "\n";
  $code .= "return \$content;";
  $return = array('content_defaults' => $code);
  if ($files) {
    foreach ($files as $file_name => $file) {
      $return['defaultcontent/' . $file_name] = array('file_path' => $file);
    }
  }
  return $return;
}

/**
 * Implements hook_features_rebuild().
 */
function content_features_rebuild($module_name) {
  return content_features_revert($module_name);
}

/**
 * Implements hook_features_revert().
 */
function content_features_revert($module_name) {
  $components = features_get_default('content', $module_name);
  usort($components, 'defaultcontent_import_sort');
  if (!empty($components)) {
    foreach ($components as $component) {
      if ($nid = defaultcontent_get_default($component->machine_name)) {
        $node = node_load($nid, NULL, TRUE);
        $node = defaultcontent_export_node_process($node);
        //check if the node has change before we blow it away
        //and reimport
        if ($node != $component) {
          entity_get_controller('node')->resetCache();
          node_delete($nid);
          defaultcontent_import_node($component, $module_name);
        }
      }
      else {
        defaultcontent_import_node($component, $module_name);
      }
    }
  }
  return TRUE;
}

/**
 * Implements hook_features_export_options().
 */
function content_menu_links_features_export_options() {
  module_load_include('inc', 'features', 'includes/features.menu');
  $options = menu_links_features_export_options();
  foreach ($options as $identifier => $title) {
    $identifier = defaultcontent_alter_identifier($identifier);
    $options_prime[$identifier] = $title;
  }
  return $options_prime;
}

/**
 * Implements hook_features_export().
 */
function content_menu_links_features_export($data, &$export, $module_name = '') {
  module_load_include('inc', 'features', 'includes/features.menu');
  $export['dependencies']['features'] = 'features';
  $export['dependencies']['menu'] = 'menu';
  $export['dependencies']['defaultcontent'] = 'defaultcontent';
  foreach ($data as $identifier) {
    $export['features']['content_menu_links'][$identifier] = $identifier;
  }
}

/**
 * Implements hook_features_export_render().
 */
function content_menu_links_features_export_render($module, $data) {
  module_load_include('inc', 'features', 'includes/features.menu');
  $code = array();
  $code[] = '  $menu_links = array();';
  $code[] = '';

  $translatables = array();
  foreach ($data as $identifier) {
    $identifier = defaultcontent_alter_identifier($identifier, FALSE);
    if ($link = features_menu_link_load($identifier)) {
      // Replace plid with a parent path.
      if (!empty($link['plid']) && $parent = menu_link_load($link['plid'])) {
        $link['parent_path'] = defaultcontent_alter_path($parent['link_path']);
      }
      unset($link['plid']);
      unset($link['mlid']);
      $link['link_path'] = defaultcontent_alter_path($link['link_path']);

      $code[] = "  // Exported menu link: {$identifier}";
      $code[] = "  \$menu_links['{$identifier}'] = " . features_var_export($link, '  ') . ";";
      $translatables[] = $link['link_title'];
    }
  }
  if (!empty($translatables)) {
    $code[] = features_translatables_export($translatables, '  ');
  }

  $code[] = '';
  $code[] = '  return $menu_links;';
  $code = implode("\n", $code);
  return array('content_menu_links_defaults' => $code);
}

/**
 * Implements hook_features_export_revert().
 */
function content_menu_links_features_revert($module) {
  content_menu_links_features_rebuild($module);
}

/**
 * Implements hook_features_export_rebuild().
 */
function content_menu_links_features_rebuild($module) {
  if ($menu_links = features_get_default('content_menu_links', $module)) {
    foreach ($menu_links as $key => $link) {
      defaultcontent_import_menu_link($key, $link);
    }
  }
}