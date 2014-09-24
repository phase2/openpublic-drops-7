<?php
/**
 * @file
 * openpublic_document_demo.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openpublic_document_demo_content_defaults() {
  $content = array();

  $content['document_open_gov_dir'] = (object) array(
    'exported_path' => 'document/open-government-directive',
    'title' => 'Open Government Directive',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'document',
    'language' => 'und',
    'created' => 1297203768,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'document_open_gov_dir',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Aliquam viverra vestibulum iaculis. Nulla quis nisl leo. Nunc mattis nulla arcu. Ut eget elit quis justo molestie vulputate. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Praesent nec massa ac urna interdum commodo. Aenean ullamcorper, justo sit amet rhoncus semper, leo mauris ultrices sapien, ut viverra libero lectus quis mauris. Curabitur euismod laoreet tempus. Aliquam erat volutpat. Sed a metus vitae mi rutrum interdum.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Aliquam viverra vestibulum iaculis. Nulla quis nisl leo. Nunc mattis nulla arcu. Ut eget elit quis justo molestie vulputate. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Praesent nec massa ac urna interdum commodo. Aenean ullamcorper, justo sit amet rhoncus semper, leo mauris ultrices sapien, ut viverra libero lectus quis mauris. Curabitur euismod laoreet tempus. Aliquam erat volutpat. Sed a metus vitae mi rutrum interdum.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_document_attachment' => array(
      'und' => array(
        0 => array(
          'filename' => 'Open Government Directive.pdf',
          'uri' => 'public://Open Government Directive.pdf',
          'filemime' => 'application/pdf',
          'filesize' => 82455,
          'status' => 1,
          'rdf_mapping' => array(),
          'display' => 1,
          'description' => '',
        ),
      ),
    ),
  );

  $content['document_president_memorandum'] = (object) array(
    'exported_path' => 'document/president’s-memorandum-transparency-and-open-government',
    'title' => 'President’s Memorandum on Transparency and Open Government',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'document',
    'language' => 'und',
    'created' => 1297204143,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'document_president_memorandum',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Mauris id blandit orci. Vestibulum facilisis, dui id placerat egestas, erat erat gravida neque, nec blandit massa mauris nec erat. Etiam eu ligula libero. Aenean dictum malesuada felis. Aenean orci erat, interdum a dictum nec, pellentesque eget justo. Aliquam erat volutpat. Nam consequat ultrices massa, sit amet sodales massa imperdiet quis. Mauris placerat arcu vel sapien vestibulum et molestie diam iaculis. Sed malesuada fringilla augue nec porttitor. Sed accumsan magna ipsum, id malesuada lectus.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Mauris id blandit orci. Vestibulum facilisis, dui id placerat egestas, erat erat gravida neque, nec blandit massa mauris nec erat. Etiam eu ligula libero. Aenean dictum malesuada felis. Aenean orci erat, interdum a dictum nec, pellentesque eget justo. Aliquam erat volutpat. Nam consequat ultrices massa, sit amet sodales massa imperdiet quis. Mauris placerat arcu vel sapien vestibulum et molestie diam iaculis. Sed malesuada fringilla augue nec porttitor. Sed accumsan magna ipsum, id malesuada lectus.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_document_attachment' => array(
      'und' => array(
        0 => array(
          'filename' => 'President\'s Memorandum On Open Government.pdf',
          'uri' => 'public://President\'s Memorandum On Open Government.pdf',
          'filemime' => 'application/pdf',
          'filesize' => 56769,
          'status' => 1,
          'rdf_mapping' => array(),
          'display' => 1,
          'description' => '',
        ),
      ),
    ),
  );

return $content;
}
