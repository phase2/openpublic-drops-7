<?php
//$Id: nodequeue_handler_field_queue_tab.inc,v 1.2 2010/10/07 02:50:35 ezrag Exp $
/**
 * Views field handler for the nodequeue queue links
 */
class nodequeue_handler_field_queue_tab extends views_handler_field_node_link {
  function render($values) {
    $text = !empty($this->options['text']) ? $this->options['text'] : t('view');
    $nid = $values->{$this->aliases['nid']};
    return l($text, "node/$nid/nodequeue");
  }
}
