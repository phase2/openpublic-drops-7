<?php
/**
 * Implementation of hook_theme().
 * Adding openpublic_person node template suggestion.
 */ 
function openpublic_person_theme_d($existing) {
  $item = $existing['node'];
  $item['path'] = drupal_get_path('module', 'openpublic_person') ."/theme";
  $item['template'] = 'node--profile';
  return array("node__profile" => $item);
}

/**
 * Implementation of hook_preprocess_node().
 * Altering node template variables:
 * - $profile_photo: Image of the profile
 */ 
function openpublic_person_preprocess_node(&$vars) {
  if ($vars['node']->type == 'profile' && $vars['page']) {
    drupal_add_css(drupal_get_path('module', 'openpublic_person') . '/theme/node--profile.css');
    $vars['classes_array'][] = 'staff-page';
    // Set the leadership flag
    if (!empty($vars['node']->field_profile_leadership[$vars['language']][0]['value'])) {
      $vars['classes_array'][] = 'leadership';
      $vars['classes_array'][] = 'exec';
    }
    else {
      unset($vars['content']['field_profile_leadership']);
    }
  }
  // if we are on the editors_choice view_mode then lets set the last name to the full name
  if ($vars['node']->type == 'profile' && $vars['view_mode'] == 'editors_choice') {
    drupal_add_css(drupal_get_path('module', 'openpublic_person') . '/theme/node--profile--editors-choice.css');
    $vars['content']['field_profile_last_name'][0]['#markup'] = l($vars['node']->title, trim($vars['node_url'], '/'));
    //$vars['title'] = '';
    if (isset($vars['content']['field_profile_social_media'][0])) {
      $link = $vars['content']['field_profile_social_media'][0]['#markup'];
      $vars['content']['field_profile_social_media'][0]['#markup'] = openpublic_person_social_media_link($link);
      $vars['content']['field_profile_address'][0]['#markup'] = str_replace("\n", "<br />", $vars['content']['field_profile_address'][0]['#markup']);
    }
  }
}

/*
 * TODO:
 * THis should be a field view display
 */
function openpublic_person_social_media_link($link) {
  if (preg_match("|.*(twitter.com/)(.*)|", $link, $matches)) {
    return l("@{$matches[2]}", $link);
  }
  return l($link, $link);
}

function openpublic_person_preprocess_field(&$vars) {
  if ($vars['element']['#field_name'] == 'field_profile_photo' && $vars['element']['#view_mode'] == 'editors_choice') {
    $vars['classes_array'][] = 'sidebar_thumbnail';
  }
  if ($vars['element']['#field_name'] == 'field_profile_photo' && $vars['element']['#view_mode'] == 'full') {
    $vars['classes_array'][] = 'staff-photo';
  }
  if ($vars['element']['#field_name'] == 'field_profile_job_title' && $vars['element']['#view_mode'] == 'full') {
    $vars['items'][0]['#markup'] = "<h2 class='staff-position'>" .$vars['items'][0]['#markup'] . "</h2>";
  }
}

/**
 * Implementation of hook_preprocess_views_view_field().
 * Used to add CSS and any templates for the blogs views.
 */ 
function openpublic_person_preprocess_views_view_field(&$vars, $hook) {
  // Put person's organization in parens on documents
  if($vars['view']->name == 'profiles' && !empty($vars['field']->field_alias) && $vars['view']->current_display === 'documents_author') {
    if ($vars['field']->field_alias == 'nid' && $vars['output'] !== '') {
      $vars['output'] = '('. $vars['output'] .')';
    }
  }
}

/**
 * Implementation of hook_preprocess_views_view().
 * Used to add CSS and any templates for the blogs views.
 */
function openpublic_person_preprocess_views_view(&$vars) {
  if($vars['name'] == 'profiles' && $vars['display_id'] == 'page_1') {
    drupal_add_css(drupal_get_path('module', 'openpublic_person') . '/theme/node--profile.css');
  }
}

/**
 * Implementation of hook_preprocess_views_view_unformatted().
 * Used to add CSS class to rows for profiles with leadership flag.
 */
function openpublic_person_preprocess_views_view_unformatted(&$vars) {
  if($vars['view']->name == 'profiles' && $vars['view']->current_display = 'page_1') {
    $lang = 'und';

    //dpr(array_keys($vars));
    foreach($vars['view']->result as $id => $result) {
      if (!empty($result->_field_data['nid']['entity']->field_profile_leadership[$lang][0]['value'])) {
        $vars['classes_array'][$id] .= ($result->_field_data['nid']['entity']->field_profile_leadership[$lang][0]['value']) ? ' exec' : ' no-exec';
      }
      else {
        // Adding this lets us hide the leadership star icon
        $vars['classes_array'][$id] .= ' no-exec';
      }
    }
  }
}

