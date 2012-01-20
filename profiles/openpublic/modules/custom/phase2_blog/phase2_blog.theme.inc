<?php

/**
 * Implementation of hook_theme().
 * Adding phase2_blog node template suggestion.
 */ 
function phase2_blog_theme($existing) {
  $item = $existing['node'];
  $item['path'] = drupal_get_path('module', 'phase2_blog') ."/theme";
  $item['template'] = 'node--blog-entry';
  return array("node__blog_entry" => $item);
}

/**
 * Implementation of hook_preprocess_node().
 * Altering node template variables:
 * - $submitted: Upadating this variable to use a link to the author node rather
 *   than to the user who created the node.
 * - $author_photo: Image of the author
 */ 
function phase2_blog_preprocess_node(&$vars) {
  if ($vars['node']->type == 'blog_entry' && $vars['page']) {
    drupal_add_css(drupal_get_path('module', 'phase2_blog') . '/theme/node--blog-entry.css');
    
    // Add the author node information. We need to do a node_load in order to get additional
    // field data that isn't part of the blog node's normal nodereference data.
    
    if(!empty($vars['field_blog_author']['und'][0]['node'])) {
      $author = node_load($vars['field_blog_author']['und'][0]['node']->nid);
      $author->uri = 'node/' . $author->nid;

      // Prepare the "Posted by" string
      $attributes = array(
        'attributes' => array(
          'title' => 'View author information',
          'class' => 'username',
          'about' => $author->uri['path'],
          'typeof' => 'sioc:Person',
          'property' => 'foaf:name',
        ),
      );

      // Set the author image
      if (!empty($author->field_author_photo['und'][0]['uri'])) {
        $image = array(
          'path' => $author->field_author_photo['und'][0]['uri'],
          'title' => $author->title,
          'alt' => $author->title,
          'style_name' => 'list-page-thumbnail',
          );
        $vars['author_photo'] = theme('image_style', $image);
        $vars['posted_by'] = t('Posted by !author on !date', array('!author' => l($author->title, $author->uri, $attributes), '!date' => $vars['date']));
      }
    }
    else {
      // Prepare the "Posted by" string
      $attributes = array(
        'attributes' => array(
          'title' => 'View author information',
          'class' => 'username',
          'about' => 'user/' . $vars['node']->uid,
          'typeof' => 'sioc:Person',
          'property' => 'foaf:name',
        ),
      );
      $vars['posted_by'] = t('Posted by !author on !date', array('!author' => l($vars['node']->name, 'user/' . $vars['node']->uid, $attributes), '!date' => $vars['date']));
    }    
  }
}

/**
 * Implementation of hook_preprocess_views_view().
 * Used to add CSS and any templates for the blogs views.
 */
function phase2_blog_preprocess_views_view(&$vars) {
  if($vars['name'] == 'blogs' && $vars['display_id'] == 'page_1') {
    drupal_add_css(drupal_get_path('module', 'phase2_blog') . '/theme/node--blog-entry.css');
  }
}


/**
 * Implementation of hook_preprocess_views_view_field().
 *
 * As there is no relationship in views for node reference yet
 * we have to go get the photo our self
 */
function phase2_blog_preprocess_views_view_field(&$vars) {
  static $authors ;
  global $language;
  if(($vars['view']->name == 'blogs')
    && ($vars['view']->current_display == 'block_1')
    && ($vars['field']->options['ui_name'] == 'Author Photo')
  ) {
    //Get the nid for the author 
    //we need to check the global lang but also look for a undifined lang
    $field_blog_author = $vars['row']->_field_data['nid']['entity']->field_blog_author;
    $lang = isset($field_blog_author[$language->language]) ? $language : LANGUAGE_NONE;
    $nid = isset($field_blog_author[$lang]) && !empty($field_blog_author[$lang]) ? $field_blog_author[$lang][0]['nid'] : FALSE;
    // cache the author if we have got her before
    if ($nid && !isset($authors[$nid]) 
        && ($author = entity_load('node', array($nid)))
        && ($author = $author[$nid])
        && ($lang = isset($author->field_profile_photo[$language->language]) ? $language : LANGUAGE_NONE)
        && isset($author->field_profile_photo[$lang])
        && !empty($author->field_profile_photo[$lang])
      ){
      
      $authors[$nid] = (object) array(
        'title' => $author->title,
        'uri' => $author->field_profile_photo[$lang][0]['uri']
      );
    }
    // if we have an author get the image and theme it
    if ($nid && isset($authors[$nid]) && $author = $authors[$nid]) {
      $theme_data = array(
        'style_name' => 'list-page-thumbnail',
        'path' => $author->uri,
        'alt' => $author->title,
        'title' => $author->title,
        'attributes' => array(
          'class' => 'photo',
        ),
      );
      $vars['output'] = theme('image_style', $theme_data);
    }
    else {
      $vars['output'] = '';
    }

  }
}
