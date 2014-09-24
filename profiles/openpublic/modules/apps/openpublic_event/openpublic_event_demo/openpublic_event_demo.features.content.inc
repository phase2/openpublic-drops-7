<?php
/**
 * @file
 * openpublic_event_demo.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openpublic_event_demo_content_defaults() {
  $content = array();

  $content['op_event_holiday_lights'] = (object) array(
    'exported_path' => 'event/holiday-lights-capitol',
    'title' => 'Holiday Lights in the Capitol',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'event',
    'language' => 'und',
    'created' => 1316974028,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'op_event_holiday_lights',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum et leo felis, et malesuada neque. Mauris mi nisi, cursus sed venenatis in, euismod eget metus. Phasellus ultricies orci ultrices leo ornare vestibulum. Phasellus quis metus purus. Sed rhoncus tellus quis nunc iaculis porttitor. Quisque odio lectus, auctor faucibus tempor ut, egestas id quam. Donec cursus, libero ac placerat malesuada, est turpis mattis mauris, lacinia tincidunt metus lorem gravida nulla. Sed eros tortor, iaculis in tincidunt quis, mattis in ante. Nam sodales arcu eget leo tristique et porttitor turpis tempus. Nunc placerat enim ac magna faucibus laoreet. Mauris et condimentum ligula. Proin sit amet leo odio, vitae tincidunt ante. Nulla facilisi. Vivamus auctor varius posuere. In vitae nisl libero, a iaculis nunc. Nunc ut velit nisi, eget consequat lorem.

Vestibulum ut ipsum lectus. Vivamus est elit, pulvinar et ultrices ut, ultricies sed dui. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut sollicitudin dapibus dolor ut vulputate. Etiam iaculis accumsan metus, vitae lacinia purus congue nec. Nullam fermentum dolor ut purus interdum vel luctus ipsum imperdiet. Aenean diam odio, sollicitudin id feugiat sed, tristique id elit.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum et leo felis, et malesuada neque. Mauris mi nisi, cursus sed venenatis in, euismod eget metus. Phasellus ultricies orci ultrices leo ornare vestibulum. Phasellus quis metus purus. Sed rhoncus tellus quis nunc iaculis porttitor. Quisque odio lectus, auctor faucibus tempor ut, egestas id quam. Donec cursus, libero ac placerat malesuada, est turpis mattis mauris, lacinia tincidunt metus lorem gravida nulla. Sed eros tortor, iaculis in tincidunt quis, mattis in ante. Nam sodales arcu eget leo tristique et porttitor turpis tempus. Nunc placerat enim ac magna faucibus laoreet. Mauris et condimentum ligula. Proin sit amet leo odio, vitae tincidunt ante. Nulla facilisi. Vivamus auctor varius posuere. In vitae nisl libero, a iaculis nunc. Nunc ut velit nisi, eget consequat lorem.</p>
<p>Vestibulum ut ipsum lectus. Vivamus est elit, pulvinar et ultrices ut, ultricies sed dui. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut sollicitudin dapibus dolor ut vulputate. Etiam iaculis accumsan metus, vitae lacinia purus congue nec. Nullam fermentum dolor ut purus interdum vel luctus ipsum imperdiet. Aenean diam odio, sollicitudin id feugiat sed, tristique id elit.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_event_dates' => array(
      'und' => array(
        0 => array(
          'value' => '2011-12-19T14:00:00',
          'value2' => '2011-12-31T06:00:00',
          'timezone' => 'America/Los_Angeles',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_event_location' => array(
      'und' => array(
        0 => array(
          'country' => 'US',
          'administrative_area' => 'DC',
          'sub_administrative_area' => NULL,
          'locality' => 'Washington',
          'dependent_locality' => NULL,
          'postal_code' => 20001,
          'thoroughfare' => '1234 State Ave.',
          'premise' => '',
          'sub_premise' => NULL,
          'organisation_name' => NULL,
          'name_line' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'data' => NULL,
        ),
      ),
    ),
  );

  $content['op_event_townhall'] = (object) array(
    'exported_path' => 'event/city-town-hall-event',
    'title' => 'City Town Hall Event',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'event',
    'language' => 'und',
    'created' => 1316972500,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'op_event_townhall',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum viverra tellus gravida turpis hendrerit in hendrerit ipsum gravida. Pellentesque imperdiet cursus venenatis. Curabitur vitae fermentum tortor. Maecenas a lacus mauris. Quisque posuere ullamcorper dolor, eu condimentum est ultrices quis. Morbi elementum tempor felis, a laoreet est aliquam ut. Donec et lectus sit amet tellus ultrices porttitor. Aliquam ut eros nibh. Proin suscipit mi in elit auctor semper. Morbi ornare aliquam diam. Praesent id orci ipsum.

Donec sed nisl leo, ac sollicitudin turpis. Duis nec cursus augue. Proin semper volutpat scelerisque. Curabitur in justo non augue facilisis iaculis condimentum vel nisl. Phasellus id turpis eu elit ultricies consequat. Fusce a tellus ac felis tristique condimentum eu ac nunc. Nullam semper porta iaculis. Donec in elit tellus. Nulla accumsan posuere erat, nec mollis lacus ultricies non. Lorem ipsum dolor sit amet, consectetur adipiscing elit.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum viverra tellus gravida turpis hendrerit in hendrerit ipsum gravida. Pellentesque imperdiet cursus venenatis. Curabitur vitae fermentum tortor. Maecenas a lacus mauris. Quisque posuere ullamcorper dolor, eu condimentum est ultrices quis. Morbi elementum tempor felis, a laoreet est aliquam ut. Donec et lectus sit amet tellus ultrices porttitor. Aliquam ut eros nibh. Proin suscipit mi in elit auctor semper. Morbi ornare aliquam diam. Praesent id orci ipsum.</p>
<p>Donec sed nisl leo, ac sollicitudin turpis. Duis nec cursus augue. Proin semper volutpat scelerisque. Curabitur in justo non augue facilisis iaculis condimentum vel nisl. Phasellus id turpis eu elit ultricies consequat. Fusce a tellus ac felis tristique condimentum eu ac nunc. Nullam semper porta iaculis. Donec in elit tellus. Nulla accumsan posuere erat, nec mollis lacus ultricies non. Lorem ipsum dolor sit amet, consectetur adipiscing elit.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_event_dates' => array(
      'und' => array(
        0 => array(
          'value' => '2011-12-01T18:00:00',
          'value2' => '2011-12-01T20:00:00',
          'timezone' => 'America/Los_Angeles',
          'timezone_db' => 'UTC',
          'date_type' => 'date',
        ),
      ),
    ),
    'field_event_location' => array(
      'und' => array(
        0 => array(
          'country' => 'US',
          'administrative_area' => 'DC',
          'sub_administrative_area' => NULL,
          'locality' => 'Washington',
          'dependent_locality' => NULL,
          'postal_code' => 20001,
          'thoroughfare' => 'City Townhall',
          'premise' => '1234 Greenville Ave',
          'sub_premise' => NULL,
          'organisation_name' => NULL,
          'name_line' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'data' => NULL,
        ),
      ),
    ),
  );

return $content;
}
