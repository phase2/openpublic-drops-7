<?php

/**
 * Implementation of hook_theme().
 * Adding openpublic_comments node template suggestion.
 */ 
function openpublic_comments_theme($existing) {

  // Individual comments
  $items['comment'] = $existing['comment'];
  $items['comment']['path'] = drupal_get_path('module', 'openpublic_comments') . "/theme";
  $items['comment']['template'] = 'comment';
  $themes['comment'] = $items['comment'];

  // Wrapper template around entire comment section
  $items['comment_wrapper'] = $existing['comment_wrapper'];
  $items['comment_wrapper']['path'] = drupal_get_path('module', 'openpublic_comments') . "/theme";
  $items['comment_wrapper']['template'] = 'comment-wrapper';
  $themes['comment_wrapper'] = $items['comment_wrapper'];

  return array(
    'comment' => $items['comment'],
    'comment_wrapper' => $items['comment_wrapper'],
  );
}

/**
 * Implementation of hook_preprocess_comment().
 */
function openpublic_comments_preprocess_comment(&$vars) {
  // Create the image link for the Reply button
  $vars['reply_link'] = '';
  if (!empty($vars['content']['links']['comment']['#links']['comment-reply'])) {
    $reply_uri = $vars['content']['links']['comment']['#links']['comment-reply']['href'];
    $vars['reply_link'] = l(t('Reply'), $reply_uri, array('attributes' => array('class' => array('reply'))));

    // If this is the OpenPublic theme, remove the reply link from the links array, 
    // since this will be treated special in the theme.
    if (variable_get('theme_default') == 'openpublic_theme') {
      unset($vars['content']['links']['comment']['#links']['comment-reply']);
    }
  }
}


/**
 * Implementation of hook_preprocess_comment_wrapper().
 */
function openpublic_comments_preprocess_comment_wrapper(&$vars) {
  $vars['login_link'] = '';
  if (!user_is_logged_in()) {
    $vars['login_link'] = l(t('Login'), 'user') . ' ' . t('to post comments');
  }
}

/**
 * Implementation of hook_comment_view_alter().
 */
function openpublic_comments_comment_view_alter(&$build) {
  // Wrap the comment in comment_reply callback.
  $menu_item = menu_get_item();
  if (isset($menu_item['page_callback']) && ($menu_item['page_callback'] === 'comment_reply')) {
    $build['#pre_render'][] = 'openpublic_reply_comments_wrap';
  }
}

/**
 * A '#pre_render' function.
 *
 * @param $element
 *   The element which will be rendered.
 *
 * @return
 *   The altered element. In this case we add a #prefix to it.
 */
function openpublic_reply_comments_wrap($element) {
  $element['#prefix'] = '<div id="comments">'. (isset($element['#prefix']) ? $element['#prefix'] : '');
  $element['#suffix'] = (isset($element['#suffix']) ? $element['#suffix'] : ''). '</div>';
  return $element;
}
