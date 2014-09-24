<?php
/**
 * @file
 *
 * Is an alter plugin for defaultcontent
 *
 * Handles the exporting and importing of taxonomy fields
 */

$plugin = array();

/**
 * Handles the change to the node need for exporting taxonomy terms
 */
function taxonomy_term_export_alter(&$node) {
  $fields = taxonomy_term_defaultcontent_term_fields();
  foreach ($fields as $field_name => $field) {
    if (isset($node->{$field_name})) {
      foreach ($node->{$field_name} as $lang => $items) {
        foreach ($items as $key => $item) {
          if (($tid = $item['tid']) && ($term = taxonomy_term_load($tid))) {
            $node->{$field_name}[$lang][$key] = array(
              'vocabulary_machine_name' => $term->vocabulary_machine_name,
              'name' => $term->name,
            );
          }
          else {
            unset($node->{$field_name}[$lang][$key]);
          }
        }
      }
    }
  }
}

/**
 * Handles the importing of taxonomy fields
 *
 * Change the name of ref terms to there tid
 */
function taxonomy_term_import_alter(&$node) {
  $fields = taxonomy_term_defaultcontent_term_fields();
  foreach ($fields as $field_name => $field) {
    if (isset($node->{$field_name})) {
      foreach ($node->{$field_name} as $lang => $items) {
        foreach ($items as $key => $item) {
          if (!empty($item['name']) && !empty($item['vocabulary_machine_name'])) {
            $term = reset(taxonomy_get_term_by_name($item['name'], $item['vocabulary_machine_name']));
            if (!$term && ($vocab = taxonomy_vocabulary_machine_name_load($item['vocabulary_machine_name']))) {
              // Create the term.
              $item['vid'] = $vocab->vid;
              $term = (object) $item;
              taxonomy_term_save($term);
            }
          }
          // If term entry not created, remove entry.
          if (!empty($term->tid)) {
            $node->{$field_name}[$lang][$key]['tid'] = $term->tid;
          }
          elseif (!isset($node->{$field_name}[$lang][$key]['tid'])) {
            unset($node->{$field_name}[$lang][$key]);
          }
        }
      }
    }
  }
}

/**
 * Helper function to get all term reference fields
 */
function taxonomy_term_defaultcontent_term_fields() {
  $ref_fields = array();
  foreach (field_info_fields() as $id => $field) {
    if ($field['type'] == 'taxonomy_term_reference') {
      $ref_fields[$id] = $field;
    }
  }
  return $ref_fields;
}
