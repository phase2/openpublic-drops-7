<?php

/**
 * @file
 * Provides a new box-type that provides Views as boxes.
 */

/**
 * Views content listing box.
 */
class entity_boxes_entity extends boxes_box {
  /**
   * Implementation of boxes_box::options_defaults().
   */
  public function options_defaults() {
    return array();
  }

  /**
   * we use fancy ajax on our options form and this breaks with the context ui
   */
  function use_multistep_create() {
    return TRUE;
  }

  /**
   * Overrides boxes_box::cache_setting().
   *
   * This delegates each Views Box instance's cache setting to the value on the
   * View's Block display 'Block cache' value.
   */
  public function cache_setting() {
    return DRUPAL_CACHE_CUSTOM;
  }

  /**
   *  Implementation of boxes_box::options_form().
   *  @see boxes_form instead
   */
  public function options_form(&$form_state) {
    drupal_add_js(drupal_get_path('module', 'entity_boxes') . '/entity_boxes.js');
    $entity_boxes = entity_boxes_load_delta($form_state['box']->delta);
    $form = array();
    $form = entity_boxes_edit_form($form, $form_state, $entity_boxes);
    
    return $form;
  }

  public function control_form() {
    return TRUE;
  }

  /**
   *  Implements Boxes_Box::options_submit().
   *  Allows us to save our extra data that boxes won't know about
   */
  public function options_submit(&$form, &$form_state) {
    $form_state['values']['name'] = $form_state['values']['delta'];
    entity_boxes_edit_form_submit($form, $form_state);
    return $form;
  }
  
  /**
   * Implements Boxes_Box::save().
   * Allows us to prune entity fields from our box options.
   */
  public function save() {
    $fields = field_info_instances('entity_boxes', $this->plugin_key);
    foreach($fields as $field_id => $field_data) {
      unset($this->options[$field_id]);
    }
    // Save the box via the default implementation.
    parent::save();
  }

  /**
   * Implementation of boxes_box::render().
   */
  public function render() {
    $title = "";
    $content = "";
    $entity_boxes = entity_boxes_load_delta($this->delta);
    if (is_array($entity_boxes) && !empty($entity_boxes)) {
      $entity_boxes = array_pop($entity_boxes);
      $controller = entity_get_controller('entity_boxes');  
      $content = $controller->view(array($entity_boxes->entity_boxes_id => $entity_boxes));
    }
    
    $box = array(
      'delta' => $this->delta, // Crucial.
      'title' => $this->title,
      'subject' => $this->title,
      'content' => render($content),
      'is_empty' => FALSE,
    );

   
    return $box;
  }

  /**
   * Implements boxes_box::delete().
   *
   * Delete the entity associated with this box when the box is deleted.
   */
  public function delete() {
    $entity_boxes = entity_boxes_load_delta($this->delta);
    if (is_array($entity_boxes)) {
      foreach ($entity_boxes as $eb) {
        entity_boxes_delete_multiple(array($eb->entity_boxes_id));
      }
    }
    parent::delete();
  }

  /**
   * Helper function to prepare entity for export.
   */
  public function prepare_entity_for_export($entity_type, $bundle, $entity) {
    $render = array();
    $files = &drupal_static('entity_boxes_features_export_files');
    foreach (field_info_instances($entity_type, $bundle) as $field_name => $field_data) {
      if (!empty($entity->{$field_name})) {
        $field_info = field_info_field($field_name);
        if ($field_info['type'] == 'field_collection') {
          foreach ($entity->{$field_name} as $language => $items) {
            foreach ($items as $key => $item) {
              $collection = field_collection_item_load($item['value']);
              $render[$field_name][$language][$key] = $this->prepare_entity_for_export('field_collection_item', $collection->field_name, $collection);
            }
          }
        }
        elseif ($field_info['type'] == 'image' || $field_info['type'] == 'file') {
          // Record the file for export via features file hook.
          // Ctools does not have out of box functionality for adding additional
          // files.
          foreach ($entity->{$field_name} as $language => $items) {
            foreach ($items as $key => $item) {
              $files[$this->delta][$item['filename']] = $item['uri'];
              unset($item['fid'], $item['uid'], $item['timestamp'], $item['width'], $item['height'], $item['filesize'], $item['filemime']);
              $render[$field_name][$language][$key] = $item;
            }
          }
        }
        elseif ($field_info['type'] == 'node_reference' && module_exists('defaultcontent')) {
          foreach ($entity->{$field_name} as $language => $items) {
            foreach ($items as $key => $item) {
              if (($node = node_load($item['nid'])) && !empty($node->machine_name)) {
                $render[$field_name][$language][$key]['machine_name'] = $node->machine_name;
              }
            }
          }
        }
        else {
          $render[$field_name] = $entity->{$field_name};
        }
      }
    }
    return $render;
  }

  private function load_entity_boxes() {
    if ($boxes = entity_boxes_load_delta(array($this->delta))) {
      return reset($boxes);
    }
  }

  /**
   * Export a block. Must return string of rendered box.
   */
  public function export($object, $indent) {
    $additions2 = array();
    if ($entity_box = $this->load_entity_boxes()) {
      $entity_box =  clone($entity_box);
      unset($entity_box->entity_boxes_id);
      $render = $this->prepare_entity_for_export('entity_boxes', $this->plugin_key, $entity_box);
      $additions2['entity_boxes'] = $render;
      // Zero this out so not effected by changing ID.
      $object->options['entity_boxes_id'] = '';
    }
    return ctools_export_object('box', $object, $indent, NULL, array(), $additions2);
  }


  /**
   * Revert a box.
   */
  public function revert($object, $module) {
    // If entity boxes is set, covert to an entity item and save.
    if (!empty($object->entity_boxes) && !$this->load_entity_boxes()) {
      $fields = $object->entity_boxes;
      $entity_boxes = entity_boxes_create(array('type' => $this->plugin_key));
      // Set the fields on the entity.
      foreach ($fields as $field_name => $field_value) {
        $entity_boxes->$field_name = $field_value;
      }
      $this->prepare_entity_for_revert('entity_boxes', $this->plugin_key, $entity_boxes, $module);
      $entity_boxes->title = $object->title;
      $entity_boxes->description = $object->description;
      $entity_boxes->name = $object->delta;
      entity_boxes_save($entity_boxes);
      $this->post_entity_for_revert('entity_boxes', $this->plugin_key, $entity_boxes, $module);
      $this->options['entity_boxes_id'] = $entity_boxes->entity_boxes_id;
      $this->save();
    }
    elseif (empty($object->entity_boxes)) {
      parent::revert($object);
    }
  }

  /**
   * Helper function to prepare entity for revert.
   */
  public function prepare_entity_for_revert($entity_type, $bundle, $entity, $module) {
    foreach (field_info_instances($entity_type, $bundle) as $field_name => $field_data) {
      if (!empty($entity->{$field_name})) {
        $field_info = field_info_field($field_name);
        // Files need to exist before save, so save them.
        if ($field_info['type'] == 'image' || $field_info['type'] == 'file') {
          foreach ($entity->{$field_name} as $language => $items) {
            foreach ($items as $key => $item) {
              $filepath = drupal_get_path('module', $module) . '/entitiy_boxes_files/' . $item['filename'];
              if (file_exists($filepath)) {
                // This is all copied from file.inc of defaultcontent.
                $filepath = drupal_realpath($filepath);
                if ($filepath && ($handle = fopen($filepath, 'rb')) && (filesize($filepath) > 0)) {
                  $data = fread($handle, filesize($filepath));
                  $file = file_save_data($data, $item['uri']);
                  if ($field_info['type'] == 'image') {
                    $file->alt = $item['alt'];
                    $file->title = $item['title'];
                  }
                  elseif ($field_info['type'] == 'file') {
                    $file->display = $item['display'];
                    $file->description = $item['description'];
                  }
                  file_save($file);
                  $entity->{$field_name}[$language][$key] = (array) $file;
                }
              }
            }
          }
        }
        elseif ($field_info['type'] == 'node_reference' && module_exists('defaultcontent')) {
          foreach ($entity->{$field_name} as $language => $items) {
            foreach ($items as $key => $item) {
              if (!empty($item['machine_name']) && ($node = defaultcontent_get_node($item['machine_name']))) {
                $entity->{$field_name}[$language][$key]['nid'] = $node->nid;
              }
            }
          }
        }
      }
    }
  }

  /**
   * Helper function to prepare entity for revert.
   */
  public function post_entity_for_revert($entity_type, $bundle, $entity, $module) {
    foreach (field_info_instances($entity_type, $bundle) as $field_name => $field_data) {
      if (!empty($entity->{$field_name})) {
        $field_info = field_info_field($field_name);
        // Field collections need the entity object to exist before they exist.
        if ($field_info['type'] == 'field_collection') {
          $values = $entity->{$field_name};
          unset($entity->{$field_name});
          foreach ($values as $language => $items) {
            foreach ($items as $key => $item) {
              $collection = entity_create('field_collection_item', array('field_name' => $field_name));
              foreach ($item as $key2 => $item2) {
                $collection->$key2 = $item2;
              }
              $this->prepare_entity_for_revert('field_collection_item', $field_name, $collection, $module);
              $collection->setHostEntity($entity_type, $entity);
              entity_save('field_collection_item', $collection);
            }
          }
        }
      }
    }
  }

}
