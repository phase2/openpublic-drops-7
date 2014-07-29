<?php
/**
 * @file
 *
 * Is an alter plugin for defaultcontent
 *
 * Handles the exporting and importing of file fields
 */

$plugin = array();

/**
 * Prepares file field for export to code
 */
function file_export_alter(&$node) {
  $fields = get_file_fields();
  $files = &drupal_static('defaultcontent_export_files', array());
  foreach ($fields as $field_name => $field) {
    if (isset($node->{$field_name})) {
      foreach ($node->{$field_name} as $lang => $items) {
        foreach ($items as $key => $item) {
          $files[$node->{$field_name}[$lang][$key]['filename']] = $item['uri'];
          $filename = $node->{$field_name}[$lang][$key]['filename'];
          $node->{$field_name}[$lang][$key]['uri'] = 'public://' . $filename;
          unset($node->{$field_name}[$lang][$key]['fid']);
          unset($node->{$field_name}[$lang][$key]['uid']);
          unset($node->{$field_name}[$lang][$key]['timestamp']);
        }
      }
    }
  }
}

/**
 * Prepares file field for import
 *
 * Create the file and attached the new file object in the file field
 */
function file_import_alter(&$node, $module_name) {
  $fields = get_file_fields();
  foreach ($fields as $field_name => $field) {
    if (isset($node->{$field_name})) {
      //unset($node->{$field_name});
    }
    if (isset($node->{$field_name})) {
      foreach ($node->{$field_name} as $lang => $items) {
        foreach ($items as $key => $item) {
          $file = (object) $item;
          $query = new EntityFieldQuery();
          $fids = db_select('file_managed', 'f')
            ->condition('uri', $file->uri)
            ->fields('f', array('fid'))
            ->execute()
            ->fetchCol();
          if (!empty($fids) && isset($fids[0]) && is_object($fids[0])) {
            file_delete($fid[0]);
          }
          $filepath = drupal_get_path('module', $module_name) . '/defaultcontent/' . $item['filename'];
          if (!empty($item['image'])) {
            $file = file_save_data($item['image'], $item['uri']);
            // Decode image data. Older versions exported binary data
            // so if this fails we asume that is the reason.
            $data = base64_decode($item['image']);
            if (!$data) {
              $data = $item['image'];
            }
          }
          elseif (file_exists($filepath)) {
            $imgfile = drupal_realpath($filepath);
            if ($imgfile && ($handle = fopen($imgfile, 'rb')) && (filesize($imgfile) > 0)) {
              $data = fread($handle, filesize($imgfile));
            }
          }
          else {
            watchdog('defaultcontent', 'Unable to find image for node in @module_name', array('@module_name' => $module_name));
          }
          $file = file_save_data($data, $item['uri']);
          if ($field['type'] == 'image') {
            $file->alt = $item['alt'];
            $file->title = $item['title'];
          }
          elseif ($field['type'] == 'file') {
            $file->display = $item['display'];
            $file->description = $item['description'];
          }
          file_save($file);
          $node->{$field_name}[$lang][$key] = (array) $file;
          //unset($node->{$field_name}[$lang][$key]);
        }
      }
    }
  }
}

/**
 * Helper function to get all file fields
 */
function get_file_fields() {
  $ref_fields = array();
  foreach (field_info_fields() as $id => $field) {
    if (in_array($field['type'], array('image', 'file'))) {
      $ref_fields[$id] = $field;
    }
  }
  return $ref_fields;
}
