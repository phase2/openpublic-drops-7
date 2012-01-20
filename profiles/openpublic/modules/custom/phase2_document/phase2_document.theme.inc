<?php

/**
 * Implementation of hook_theme().
 * Adding phase2_blog node template suggestion.
 */ 
function phase2_document_theme($existing) {
  $item = $existing['node'];
  $item['path'] = drupal_get_path('module', 'phase2_document') ."/theme";
  $item['template'] = 'node--document';
  return array("node__document" => $item);
}

/**
 * Implementation of hook_preprocess_views_view_field().
 * For document displays, replaces the value of the URI field with the upper-case
 * file extension. This is as opposed to useing the mimetype for anything, since 
 * it'll be more specific to the actual file in question.
 */ 
function phase2_document_preprocess_views_view_field(&$vars, $hook) {
  if($vars['view']->name == 'documents' && !empty($vars['field']->field_alias)) {
    if ($vars['field']->field_alias == 'file_managed_file_usage_uri') {
      $vars['field']->last_render = strtoupper(substr($vars['row']->file_managed_file_usage_uri, strpos($vars['row']->file_managed_file_usage_uri, '.') + 1));
    }
  }
}

/**
 * Implmentation of hook_preprocess_node().
 * This adds additional information about the file download after the download link itself.
 */
function phase2_document_preprocess_node(&$vars) {
  if ($vars['type'] == 'document') {
    
    drupal_add_css(drupal_get_path('module', 'phase2_document') . '/theme/node--document.css');
  
    if (!empty($vars['field_document_attachment'][0]['fid']) && $vars['field_document_attachment'][0]['display']) {
      $file = $vars['field_document_attachment'][0];
      $vars['content']['field_document_attachment']['#prefix'] = '<div class="download-btn">';
      $download = '';
      $download .= '<span class="download-type">';
      $download .= strtoupper(substr($file['filename'], strpos($file['filename'], '.') + 1));
      $download .= '</span>';
      $download .= ': ';
      $download .= '<span class="download-size">';
      $download .= format_size($file['filesize']);
      $download .= '</span>';
      $vars['content']['field_document_attachment']['#suffix'] = $download;
      $vars['content']['field_document_attachment']['#suffix'] .= '</div>';
    }
  }
}


/**
 * Implementation of hook_preprocess_file_link().
 * Changes title of the link to 'Download'.
 */
function phase2_document_preprocess_file_link(&$vars) {
  $vars['file']->filename = "Download";
}