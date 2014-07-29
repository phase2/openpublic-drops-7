<?php
/**
 * @file
 * openpublic_multimedia_demo.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openpublic_multimedia_demo_content_defaults() {
  $content = array();

  $content['gallery_our_government'] = (object) array(
    'exported_path' => 'media-gallery/our-government',
    'title' => 'Our Government',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'media_gallery',
    'language' => 'und',
    'created' => 1296581083,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'gallery_our_government',
    'body' => array(),
    'field_media_gallery_media' => array(
      'und' => array(
        0 => array(
          'machine_name' => 'photo_statehouse',
        ),
        1 => array(
          'machine_name' => 'photo_building_supreme',
        ),
        2 => array(
          'machine_name' => 'photo_building_capitol',
        ),
        3 => array(
          'machine_name' => 'photo_building_oldtimer',
        ),
      ),
    ),
  );

  $content['gallery_stars_stripes'] = (object) array(
    'exported_path' => 'media-gallery/stars-and-stripes',
    'title' => 'The Stars and Stripes',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'media_gallery',
    'language' => 'und',
    'created' => 1297383535,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'gallery_stars_stripes',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean placerat pellentesque diam, id ultrices odio molestie et.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean placerat pellentesque diam, id ultrices odio molestie et.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_media_gallery_media' => array(
      'und' => array(
        0 => array(
          'machine_name' => 'photo_flag_closeup',
        ),
        1 => array(
          'machine_name' => 'photo_flag_wind',
        ),
        2 => array(
          'machine_name' => 'photo_flag_prominent',
        ),
      ),
    ),
  );

  $content['photo_building_capitol'] = (object) array(
    'exported_path' => 'photo/capitol',
    'title' => 'At the Capitol',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'photo',
    'language' => 'und',
    'created' => 1297384571,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'photo_building_capitol',
    'body' => array(),
    'field_photo_image' => array(
      'und' => array(
        0 => array(
          'filename' => 'Capitols.jpg',
          'uri' => 'public://Capitols.jpg',
          'filemime' => 'image/jpeg',
          'filesize' => 153089,
          'status' => 1,
          'rdf_mapping' => array(),
          'alt' => 'demo content image',
          'title' => 'demo content image',
          'width' => 480,
          'height' => 640,
        ),
      ),
    ),
  );

  $content['photo_building_oldtimer'] = (object) array(
    'exported_path' => 'photo/my-time',
    'title' => 'Before My Time',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'photo',
    'language' => 'und',
    'created' => 1297384635,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'photo_building_oldtimer',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Ah the good old days...',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Ah the good old days...</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_photo_image' => array(
      'und' => array(
        0 => array(
          'filename' => 'Before my time.jpg',
          'uri' => 'public://Before my time.jpg',
          'filemime' => 'image/jpeg',
          'filesize' => 114450,
          'status' => 1,
          'rdf_mapping' => array(),
          'alt' => 'demo content image',
          'title' => 'demo content image',
          'width' => 640,
          'height' => 448,
        ),
      ),
    ),
  );

  $content['photo_building_supreme'] = (object) array(
    'exported_path' => 'photo/supreme-being',
    'title' => 'Supreme Being',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'photo',
    'language' => 'und',
    'created' => 1297384518,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'photo_building_supreme',
    'body' => array(),
    'field_photo_image' => array(
      'und' => array(
        0 => array(
          'filename' => 'Supreme.jpg',
          'uri' => 'public://Supreme.jpg',
          'filemime' => 'image/jpeg',
          'filesize' => 141171,
          'status' => 1,
          'rdf_mapping' => array(),
          'alt' => 'demo content image',
          'title' => 'demo content image',
          'width' => 628,
          'height' => 640,
        ),
      ),
    ),
  );

  $content['photo_flag_closeup'] = (object) array(
    'exported_path' => 'photo/stars-and-stripes-close',
    'title' => 'The Stars and Stripes Up Close',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'photo',
    'language' => 'und',
    'created' => 1297383298,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'photo_flag_closeup',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Get a close up view of the Stars and Stripes.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Get a close up view of the Stars and Stripes.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_photo_image' => array(
      'und' => array(
        0 => array(
          'filename' => 'flag_close.jpg',
          'uri' => 'public://flag_close.jpg',
          'filemime' => 'image/jpeg',
          'filesize' => 115941,
          'status' => 1,
          'rdf_mapping' => array(),
          'alt' => 'demo content image',
          'title' => 'demo content image',
          'width' => 640,
          'height' => 471,
        ),
      ),
    ),
  );

  $content['photo_flag_industrial'] = (object) array(
    'exported_path' => 'photo/industrial-treatment',
    'title' => 'Industrial Treatment',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'photo',
    'language' => 'und',
    'created' => 1297383885,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'photo_flag_industrial',
    'body' => array(),
    'field_photo_image' => array(
      'und' => array(
        0 => array(
          'filename' => 'flag_industrial.jpg',
          'uri' => 'public://flag_industrial.jpg',
          'filemime' => 'image/jpeg',
          'filesize' => 118318,
          'status' => 1,
          'rdf_mapping' => array(),
          'alt' => 'demo content image',
          'title' => 'demo content image',
          'width' => 640,
          'height' => 480,
        ),
      ),
    ),
  );

  $content['photo_flag_prominent'] = (object) array(
    'exported_path' => 'photo/prominent-position',
    'title' => 'A Prominent Position',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'photo',
    'language' => 'und',
    'created' => 1297383456,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'photo_flag_prominent',
    'body' => array(),
    'field_photo_image' => array(
      'und' => array(
        0 => array(
          'filename' => 'Flag_Maryland.jpg',
          'uri' => 'public://Flag_Maryland.jpg',
          'filemime' => 'image/jpeg',
          'filesize' => 192612,
          'status' => 1,
          'rdf_mapping' => array(),
          'alt' => 'demo content image',
          'title' => 'demo content image',
          'width' => 640,
          'height' => 474,
        ),
      ),
    ),
  );

  $content['photo_flag_uptop'] = (object) array(
    'exported_path' => 'photo/stars-and-stripes-top',
    'title' => 'Stars and Stripes Up Top',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'photo',
    'language' => 'und',
    'created' => 1297383747,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'photo_flag_uptop',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'The Stars and Stripes line the rooftops.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>The Stars and Stripes line the rooftops.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_photo_image' => array(
      'und' => array(
        0 => array(
          'filename' => 'flag_multiple.jpg',
          'uri' => 'public://flag_multiple.jpg',
          'filemime' => 'image/jpeg',
          'filesize' => 119878,
          'status' => 1,
          'rdf_mapping' => array(),
          'alt' => 'demo content image',
          'title' => 'demo content image',
          'width' => 426,
          'height' => 640,
        ),
      ),
    ),
  );

  $content['photo_flag_wind'] = (object) array(
    'exported_path' => 'photo/stars-and-stripes-meet-wind',
    'title' => 'Stars and Stripes Meet the Wind',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'photo',
    'language' => 'und',
    'created' => 1297383377,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'photo_flag_wind',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Beautiful US flag blowing with the wind.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Beautiful US flag blowing with the wind.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_photo_image' => array(
      'und' => array(
        0 => array(
          'filename' => 'Flag_Flapping.jpg',
          'uri' => 'public://Flag_Flapping.jpg',
          'filemime' => 'image/jpeg',
          'filesize' => 10470,
          'status' => 1,
          'rdf_mapping' => array(),
          'alt' => 'demo content image',
          'title' => 'demo content image',
          'width' => 211,
          'height' => 240,
        ),
      ),
    ),
  );

  $content['photo_statehouse'] = (object) array(
    'exported_path' => 'photo/state-house',
    'title' => 'State House',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'photo',
    'language' => 'und',
    'created' => 1297384242,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'photo_statehouse',
    'body' => array(),
    'field_photo_image' => array(
      'und' => array(
        0 => array(
          'filename' => 'Our Government.jpg',
          'uri' => 'public://Our Government.jpg',
          'filemime' => 'image/jpeg',
          'filesize' => 118870,
          'status' => 1,
          'rdf_mapping' => array(),
          'alt' => 'demo content image',
          'title' => 'demo content image',
          'width' => 612,
          'height' => 404,
        ),
      ),
    ),
  );

return $content;
}
