<?php

/**
 * This field handler aggregates operations that can be done on a entity_boxes
 * under a single field providing a more flexible way to present them in a view
 */
class entity_boxes_handler_entity_boxes_operations_field extends views_handler_field {
  function construct() {
    parent::construct();

    $this->additional_fields['entity_boxes_id'] = 'entity_boxes_id';
  }

  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {

    $links = menu_contextual_links('entity_boxes', 'admin/content/entity_boxes/entity_boxes', array($this->get_value($values, 'entity_boxes_id')));
    
    if (!empty($links)) {
      return theme('links', array('links' => $links, 'attributes' => array('class' => array('links', 'inline', 'operations'))));
    }
  }
}
