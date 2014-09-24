<?php
/**
 * @file
 * openpublic_promotion_demo.box.inc
 */

/**
 * Implements hook_default_box().
 */
function openpublic_promotion_demo_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-1c9715a5';
  $box->plugin_key = 'promotion';
  $box->title = '';
  $box->description = 'Default Footer Info';
  $box->options = array(
    'entity_boxes_id' => '',
    'additional_classes' => '',
  );
  $box->entity_boxes = array(
    'field_promotion_summary' => array(
      'und' => array(
        0 => array(
          'value' => '<div class="address-location">123 Main Street Washington, DC 20036 | Email: info@example.gov | phone: (202)555-1212</div>',
          'format' => 'full_html',
          'safe_value' => '<div class="address-location">123 Main Street Washington, DC 20036 | Email: <a href="mailto:info@example.gov">info@example.gov</a> | phone: (202)555-1212</div>
',
        ),
      ),
    ),
  );
  $export['box-1c9715a5'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-2704b136';
  $box->plugin_key = 'promotion';
  $box->title = 'More About Open Government';
  $box->description = 'Open Government Info';
  $box->options = array(
    'entity_boxes_id' => '',
    'additional_classes' => '',
  );
  $box->entity_boxes = array(
    'field_promotion_summary' => array(
      'und' => array(
        0 => array(
          'value' => 'Here are links to more about open government',
          'format' => 'filtered_html',
          'safe_value' => '<p>Here are links to more about open government</p>
',
        ),
      ),
    ),
  );
  $export['box-2704b136'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-7b551df';
  $box->plugin_key = 'promotion';
  $box->title = '';
  $box->description = 'Press Release kit';
  $box->options = array(
    'entity_boxes_id' => '',
    'additional_classes' => '',
  );
  $box->entity_boxes = array(
    'field_promotion_attachments' => array(
      'und' => array(
        0 => array(
          'filename' => 'press-kit.pdf',
          'uri' => 'public://press-kit_11.pdf',
          'status' => '1',
          'rdf_mapping' => array(),
          'display' => '1',
          'description' => 'Press Kit Download',
        ),
      ),
    ),
  );
  $export['box-7b551df'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-d4535029';
  $box->plugin_key = 'promotion';
  $box->title = 'Open Gov Contact';
  $box->description = 'Open Government Contact';
  $box->options = array(
    'entity_boxes_id' => '',
    'additional_classes' => '',
  );
  $box->entity_boxes = array(
    'field_promotion_link' => array(
      'und' => array(
        0 => array(
          'url' => 'www.twitter.com',
          'title' => 'Twitter',
          'attributes' => array(),
        ),
      ),
    ),
    'field_promotion_summary' => array(
      'und' => array(
        0 => array(
          'value' => 'For all Open Government inquiries:',
          'format' => 'filtered_html',
          'safe_value' => '<p>For all Open Government inquiries:</p>
',
        ),
      ),
    ),
  );
  $export['box-d4535029'] = $box;

  return $export;
}
