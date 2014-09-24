<?php
/**
 * @file
 * openpublic_faqs_demo.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openpublic_faqs_demo_content_defaults() {
  $content = array();

  $content['faqs_ipsum'] = (object) array(
    'exported_path' => 'faqs/what-does-lorem-ipsum-look',
    'title' => 'What does lorem ipsum look like?',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'faqs',
    'language' => 'und',
    'created' => 1404322175,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'faqs_ipsum',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Nunc interdum lacus sit amet orci. Cras non dolor. Etiam sit amet orci eget eros faucibus tincidunt. Suspendisse potenti. Vestibulum rutrum, mi nec elementum vehicula, eros quam gravida nisl, id fringilla neque ante vel mi.

Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. In ut quam vitae odio lacinia tincidunt. Etiam iaculis nunc ac metus. Maecenas malesuada. Vivamus euismod mauris.

Cras dapibus. Nullam dictum felis eu pede mollis pretium. Sed augue ipsum, egestas nec, vestibulum et, malesuada adipiscing, dui. Duis lobortis massa imperdiet quam. Phasellus blandit leo ut odio.

Sed consequat, leo eget bibendum sodales, augue velit cursus nunc, quis gravida magna mi a libero. Fusce commodo aliquam arcu. Nunc nec neque. Suspendisse pulvinar, augue ac venenatis condimentum, sem libero volutpat nibh, nec pellentesque velit pede quis nunc. Proin sapien ipsum, porta a, auctor quis, euismod ut, mi.

Fusce a quam. Nullam accumsan lorem in dui. Nullam dictum felis eu pede mollis pretium. Morbi ac felis. Donec sodales sagittis magna.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Nunc interdum lacus sit amet orci. Cras non dolor. Etiam sit amet orci eget eros faucibus tincidunt. Suspendisse potenti. Vestibulum rutrum, mi nec elementum vehicula, eros quam gravida nisl, id fringilla neque ante vel mi.</p>
<p>Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. In ut quam vitae odio lacinia tincidunt. Etiam iaculis nunc ac metus. Maecenas malesuada. Vivamus euismod mauris.</p>
<p>Cras dapibus. Nullam dictum felis eu pede mollis pretium. Sed augue ipsum, egestas nec, vestibulum et, malesuada adipiscing, dui. Duis lobortis massa imperdiet quam. Phasellus blandit leo ut odio.</p>
<p>Sed consequat, leo eget bibendum sodales, augue velit cursus nunc, quis gravida magna mi a libero. Fusce commodo aliquam arcu. Nunc nec neque. Suspendisse pulvinar, augue ac venenatis condimentum, sem libero volutpat nibh, nec pellentesque velit pede quis nunc. Proin sapien ipsum, porta a, auctor quis, euismod ut, mi.</p>
<p>Fusce a quam. Nullam accumsan lorem in dui. Nullam dictum felis eu pede mollis pretium. Morbi ac felis. Donec sodales sagittis magna.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['faqs_office_location'] = (object) array(
    'exported_path' => 'faqs/where-office-located',
    'title' => 'Where is the office located?',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'faqs',
    'language' => 'und',
    'created' => 1404322122,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'faqs_office_location',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'The office is located where it is located.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>The office is located where it is located.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['faqs_submit_paper'] = (object) array(
    'exported_path' => 'faqs/how-submit-paper',
    'title' => 'How to submit a paper',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'faqs',
    'language' => 'und',
    'created' => 1404322037,
    'comment' => 2,
    'translate' => 0,
    'machine_name' => 'faqs_submit_paper',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<ol>
<li>Obtain paper</li>
<li>Submit paper</li>
</ol>',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<ol><li>Obtain paper</li>
<li>Submit paper</li>
</ol>',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
