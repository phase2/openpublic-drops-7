<?php

function openpublic_editors_choice_entity_info_alter(&$entity_info) {
  $entity_info['node']['view modes']['editors_choice'] = array(
    'label' => t('Editors_Choice_Block'),
    'custom settings' => FALSE,
  );
} 


/*
 * implimentation of hook_theme()
 */
function openpublic_editors_choice_theme_disable($existing) {
  $item = $existing['node'];
  $item['path'] = drupal_get_path('module', 'openpublic_editors_choice') ."/theme";
  $item['template'] = 'node--editors-choice';
  return array(
    "node__editors_choice" => $item,
  );
}
/*
 * implimentation of hook_preprocess_node
 * we are adding our css and changing the theme function for rendering field_issues
 */
function openpublic_editors_choice_preprocess_node(&$vars) {
  if ($vars['node']->type == 'editors_choice') {

    drupal_add_css(drupal_get_path('module', 'openpublic_editors_choice') . '/theme/node--editors-choice.css', 'file');
    if (!empty($vars['content']['field_editors_choice_link'])) {
    
    $vars['content']['field_editors_choice_link']['#classes'] = "read_more";
    $vars['content']['field_editors_choice_link']['classes'] = "read_more";
    $vars['content']['field_editors_choice_link']['attributes'] = array(
      'class' => "read_more"
    );


      $vars['content'] = $vars['content'];
    }
  }
}

//we want to add a class to the link so that it is theme like the rest of the site
function openpublic_preprocess_field(&$variables) {
  if($variables['element']['#field_name'] == 'field_editors_choice_link') {
    $variables['classes_array'][] = 'read-more';
  }
}


/*
 * implement hook_block_view_alter
 *
 * We want to remove the subject for node blocks that have show title turned off
 */
function openpublic_editors_choice_block_view_alter(&$data, $block) {
  if( $block->module == 'nodeblock') {
    $node = $data['content']['#node'];
    if ((isset($node->language))
       && isset($node->field_editors_choice_show_title[$node->language][0]['value'])
       && !$node->field_editors_choice_show_title[$node->language][0]['value']) {
      $data['subject'] = '';
    }

  }
}
