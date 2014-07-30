<?php

/**
 * @file
 * Contains a Views field handler to take care of displaying edit links
 * as fields
 */


class entity_boxes_handler_edit_link_field extends entity_boxes_handler_link_field {
  function construct() {
    parent::construct();
    $this->additional_fields['type'] = 'type';
  }


  function render($values) {
    $type = $values->{$this->aliases['type']};
    
    //Creating a dummy entity_boxes to check access against
    $dummy_entity_boxes = (object) array('type' => $type);
    if (!entity_boxes_access('edit', $dummy_entity_boxes)) {
      return;
    }
    
    $text = !empty($this->options['text']) ? $this->options['text'] : t('edit');
    $entity_boxes_id = $values->{$this->aliases['entity_boxes_id']};
    
    return l($text, 'admin/content/entity_boxes/entity_boxes/' . $entity_boxes_id . '/edit');
  }
}
