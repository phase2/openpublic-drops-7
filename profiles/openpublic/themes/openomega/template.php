<?php
/**
 * @file
 * Adds Openomega specific theme changes.
 */

/**
 * Implements hook_preprocess_region().
 */
function openomega_preprocess_region(&$vars) {
  global $language;

  switch($vars['region']) {
    // menu region
    case 'menu':
      $footer_menu = menu_tree_output(_openomega_menu_build_tree('main-menu', array('max_depth'=>2)));
      //set the active trail
      $active_trail = menu_get_active_trail();
      foreach($active_trail as $trail) {
        if (isset($trail['mlid']) && isset($footer_menu[$trail['mlid'] ] )) {
          $footer_menu[$trail['mlid']]['#attributes']['class'][] = 'active-trail';
        }
      }
      $vars['dropdown_menu'] = $footer_menu;
    break;
    // default footer content
    case 'footer_first':
      $footer_menu = menu_tree_output(_openomega_menu_build_tree('main-menu', array('max_depth'=>2)));
      //set the active trail
      $active_trail = menu_get_active_trail();
      foreach($active_trail as $trail) {
        if (isset($trail['mlid']) && isset($footer_menu[$trail['mlid'] ] )) {
          $footer_menu[$trail['mlid']]['#attributes']['class'][] = 'active-trail';
        }
      }
      $vars['footer_menu'] = $footer_menu;

      $vars['site_name'] = $site_name = variable_get('site_name');
      $vars['footer_logo'] = l(theme('image', array('path'=>drupal_get_path('theme', 'openomega') . "/logo-sm.png", 'alt'=>"$site_name logo")), '', array("html"=>TRUE, 'attributes'=>array('class'=>'logo')));

      if(function_exists('defaultcontent_get_node') && ($node = defaultcontent_get_node("email_update")) ) {
        $node = node_view($node);
        $vars['subscribe_form'] = $node['webform'];
      }
    break;
  }
}

/**
 * Override theme_menu_tree to add clearfix class as most menus are floated.
 */
function openomega_menu_tree($variables) {
  return '<ul class="menu clearfix">' . $variables['tree'] . '</ul>';
}

/**
 * Add the 'clearfix' class to all unformatted views rows 
 */
function openomega_preprocess_views_view_unformatted(&$vars) {
  foreach($vars['classes'] as &$rowclasses) {
    $rowclasses[] = 'clearfix';
  }
  foreach($vars['classes_array'] as &$rowclasses) {
    $rowclasses .= ' clearfix';
  }
  foreach($vars['attributes_array']['class'] as &$rowclasses) {
    $rowclasses .= ' clearfix';
  }
}

/**
 * Wrapper around menu_build_tree that runs i18n over it when available.
 */
function _openomega_menu_build_tree($menu_name, $parameters = array()) {
  $tree = menu_build_tree($menu_name, $parameters);
  if (function_exists('i18n_menu_localize_tree')) {
    $tree = i18n_menu_localize_tree($tree);
  }

  return $tree;
}

/**
 * Implements hook_preprocess_node().
 */
function openomega_preprocess_node(&$vars) {
  if ($vars['node']->type == 'blog_entry' && $vars['page']) {
    // Add the author node information. We need to do a node_load in order to get additional
    // field data that isn't part of the blog node's normal nodereference data.
    if (!empty($vars['field_author'][LANGUAGE_NONE][0]['access']) && !empty($vars['field_author'][LANGUAGE_NONE][0]['nid'])) {
      $author_node = node_load($vars['field_author'][LANGUAGE_NONE][0]['nid']);
      $author_path = 'node/' . $author_node->nid;
      // Prepare the "Posted by" string
      $attributes = array(
        'attributes' => array(
          'title' => t('View author information'),
          'class' => 'username',
          'about' => $author_path,
          'typeof' => 'sioc:Person',
          'property' => 'foaf:name',
        ),
      );
      $author = l($author_node->title, $author_path, $attributes);

      // Set the author image
      if ($image_data = reset(field_get_items('node', $author_node, 'field_profile_photo'))) {
        $image = array(
          'path' => $image_data['uri'],
          'title' => $author_node->title,
          'alt' => $author_node->title,
          'style_name' => 'list-page-thumbnail',
          'attributes' => array(
            'class' => 'author-photo',
          ),
        );
        $vars['content']['author_photo'] = array(
          '#markup' => theme('image_style', $image),
          '#weight' => -100,
        );
      }
    }
    // Author may have been unpublished, so only use user if author wasn't set.
    elseif (empty($vars['field_author']['und'][0])) {
      if (user_access('access user profiles')) {
        $attributes = array(
          'attributes' => array(
            'title' => t('View author information'),
            'class' => 'username',
            'about' => 'user/' . $vars['node']->uid,
            'typeof' => 'sioc:Person',
            'property' => 'foaf:name',
          ),
        );
        $author = l($vars['node']->name, 'user/' . $vars['node']->uid, $attributes);
      }
      else {
        $author = check_plain($vars['node']->name);
      }
    }
    $vars['posted_by'] = !empty($author) ? t('Posted by !author on !date', array('!author' => $author, '!date' => $vars['date'])) : '';
  }
  if ($vars['node']->type == 'profile' && $vars['page']) {
    $vars['classes_array'][] = 'staff-page';
    // Set the leadership flag.
    if (!empty($vars['node']->field_profile_leadership[$vars['language']][0]['value'])) {
      $vars['classes_array'][] = 'leadership';
      $vars['classes_array'][] = 'exec';
    }
    else {
      unset($vars['content']['field_profile_leadership']);
    }
    $vars['attributes_array']['class'] = $vars['classes_array'];
  }
  // If we are on the editors_choice view_mode then lets set the last name to the full name
  if ($vars['node']->type == 'profile' && $vars['view_mode'] == 'editors_choice') {
    $vars['content']['field_profile_last_name'][0]['#markup'] = l($vars['node']->title, trim($vars['node_url'], '/'));
    if (isset($vars['content']['field_profile_social_media'][0])) {
      $link = $vars['content']['field_profile_social_media'][0]['#markup'];
      $vars['content']['field_profile_social_media'][0]['#markup'] = openomega_social_media_link($link);
      $vars['content']['field_profile_address'][0]['#markup'] = str_replace("\n", "<br />", $vars['content']['field_profile_address'][0]['#markup']);
    }
  }
  if ($vars['type'] == 'document') {
    if (!empty($vars['field_document_attachment'])) {
      foreach ($vars['field_document_attachment'] as $id => $attachment) {
        if (!$attachment['display']) {
          continue;
        }
        $file = $vars['field_document_attachment'][$id];
        $vars['content']['field_document_attachment'][$id]['#prefix'] = '<div class="download-btn">';
        $download = '';
        $download .= '<span class="download-type">';
        $download .= strtoupper(substr($file['filename'], strpos($file['filename'], '.') + 1));
        $download .= '</span>';
        $download .= ': ';
        $download .= '<span class="download-size">';
        $download .= format_size($file['filesize']);
        $download .= '</span>';
        $vars['content']['field_document_attachment'][$id]['#suffix'] = $download;
        $vars['content']['field_document_attachment'][$id]['#suffix'] .= '</div>';
      }
    }
  }
}

/**
 * Create a display link for social media, e.g. add @ to twitter links.
 */
function openomega_social_media_link($link) {
  if (preg_match("|.*(twitter.com/)(.*)|", $link, $matches)) {
    return l("@{$matches[2]}", $link);
  }
  return l($link, $link);
}

/**
 * Implements hook_preprocess_field().
 */
function openomega_preprocess_field(&$vars) {
  if ($vars['element']['#field_name'] == 'field_profile_photo' && $vars['element']['#view_mode'] == 'editors_choice') {
    $vars['classes_array'][] = 'sidebar_thumbnail';
  }
  if ($vars['element']['#field_name'] == 'field_profile_photo' && $vars['element']['#view_mode'] == 'full') {
    $vars['classes_array'][] = 'staff-photo';
  }
  if ($vars['element']['#field_name'] == 'field_profile_job_title' && $vars['element']['#view_mode'] == 'full') {
    $vars['items'][0]['#markup'] = "<h2 class='staff-position'>" . $vars['items'][0]['#markup'] . "</h2>";
  }
  if ($vars['element']['#field_name'] == 'field_editors_choice_link') {
    $vars['classes_array'][] = 'read-more';
  }
  if ($vars['element']['#field_name'] == 'field_resource_photo' || $vars['element']['#field_name'] == 'field_services_photo') {
    $vars['classes_array'][] = 'photo-main';
  }
}

/**
 * Implements hook_preprocess_comment_wrapper().
 */
function openomega_preprocess_comment_wrapper(&$vars) {
  $vars['login_link'] = '';
  if (!user_is_logged_in()) {
    $vars['login_link'] = l(t('Login'), 'user') . ' ' . t('to post comments');
  }
}

/**
 * Implements hook_comment_view_alter().
 */
function openomega_comment_view_alter(&$build) {
  // Wrap the comment in comment_reply callback.
  $menu_item = menu_get_item();
  if (isset($menu_item['page_callback']) && ($menu_item['page_callback'] === 'comment_reply')) {
    $build['#pre_render'][] = 'openomega_reply_comments_wrap';
  }
}

/**
 * Add a div around comment area.
 */
function openomega_reply_comments_wrap($element) {
  $element['#prefix'] = '<div id="comments">' . (isset($element['#prefix']) ? $element['#prefix'] : '');
  $element['#suffix'] = (isset($element['#suffix']) ? $element['#suffix'] : '') . '</div>';
  return $element;
}

/**
 * Implements hook_preprocess_views_view_field().
 *
 * For document displays, replaces the value of the URI field with the upper-case
 * file extension. This is as opposed to useing the mimetype for anything, since
 * it'll be more specific to the actual file in question.
 */
function openomega_preprocess_views_view_field(&$vars, $hook) {
  if ($vars['view']->name == 'documents' && !empty($vars['field']->field_alias)) {
    if ($vars['field']->field_alias == 'file_managed_file_usage_uri') {
      $vars['field']->last_render = strtoupper(substr($vars['row']->file_managed_file_usage_uri, strpos($vars['row']->file_managed_file_usage_uri, '.') + 1));
    }
  }
}

/**
 * Implements hook_preprocess_file_link().
 *
 * Changes title of the link to 'Download'.
 */
function openomega_preprocess_file_link(&$vars) {
  if (empty($vars['file']->description)) {
    $vars['file']->description = t('Download');
  }
}
