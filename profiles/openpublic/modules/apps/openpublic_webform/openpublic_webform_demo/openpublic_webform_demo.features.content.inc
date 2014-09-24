<?php
/**
 * @file
 * openpublic_webform_demo.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openpublic_webform_demo_content_defaults() {
  $content = array();

  $content['contact_us'] = (object) array(
    'exported_path' => 'webform/contact-us',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => 0,
      'redirect_url' => '<confirmation>',
      'status' => 1,
      'block' => 0,
      'teaser' => 0,
      'allow_draft' => 0,
      'auto_save' => 0,
      'submit_notice' => 1,
      'submit_text' => '',
      'submit_limit' => -1,
      'submit_interval' => -1,
      'total_submit_limit' => -1,
      'total_submit_interval' => -1,
      'record_exists' => TRUE,
      'roles' => array(
        0 => 1,
        1 => 2,
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => 0,
          'form_key' => 'full_name',
          'name' => 'Full Name',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 1,
          'weight' => 0,
          'page_num' => 1,
        ),
        1 => array(
          'pid' => 0,
          'form_key' => 'company_orginization',
          'name' => 'Company/Organization',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 1,
          'weight' => 1,
          'page_num' => 1,
        ),
        2 => array(
          'pid' => 0,
          'form_key' => 'street_address',
          'name' => 'Street Address',
          'type' => 'textarea',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'resizable' => 1,
            'disabled' => 0,
            'conditional_operator' => '=',
            'cols' => '',
            'rows' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 1,
          'weight' => 2,
          'page_num' => 1,
        ),
        3 => array(
          'pid' => 0,
          'form_key' => 'state',
          'name' => 'State',
          'type' => 'select',
          'value' => '',
          'extra' => array(
            'items' => 'AL|Alabama
AK|Alaska
AS|American Samoa
AZ|Arizona
AR|Arkansas
CA|California
CO|Colorado
CT|Connecticut
DE|Delaware
DC|District of Columbia
FL|Florida
GA|Georgia
GU|Guam
HI|Hawaii
ID|Idaho
IL|Illinois
IN|Indiana
IA|Iowa
KS|Kansas
KY|Kentucky
LA|Louisiana
ME|Maine
MH|Marshall Islands
MD|Maryland
MA|Massachusetts
MI|Michigan
MN|Minnesota
MS|Mississippi
MO|Missouri
MT|Montana
NE|Nebraska
NV|Nevada
NH|New Hampshire
NJ|New Jersey
NM|New Mexico
NY|New York
NC|North Carolina
ND|North Dakota
MP|Northern Marianas Islands
OH|Ohio
OK|Oklahoma
OR|Oregon
PW|Palau
PA|Pennsylvania
PR|Puerto Rico
RI|Rhode Island
SC|South Carolina
SD|South Dakota
TN|Tennessee
TX|Texas
UT|Utah
VT|Vermont
VI|Virgin Islands
VA|Virginia
WA|Washington
WV|West Virginia
WI|Wisconsin
WY|Wyoming
',
            'options_source' => 'united_states',
            'multiple' => 0,
            'title_display' => 0,
            'aslist' => 1,
            'optrand' => 0,
            'conditional_operator' => '=',
            'other_option' => NULL,
            'other_text' => 'Other...',
            'description' => '',
            'custom_keys' => FALSE,
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 1,
          'weight' => 3,
          'page_num' => 1,
        ),
        4 => array(
          'pid' => 0,
          'form_key' => 'zip',
          'name' => 'Zip',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 1,
          'weight' => 4,
          'page_num' => 1,
        ),
        5 => array(
          'pid' => 0,
          'form_key' => 'email',
          'name' => 'Email',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 0,
          'weight' => 5,
          'page_num' => 1,
        ),
        6 => array(
          'pid' => 0,
          'form_key' => 'fax',
          'name' => 'Fax',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 0,
          'weight' => 6,
          'page_num' => 1,
        ),
        7 => array(
          'pid' => 0,
          'form_key' => 'contact_me',
          'name' => 'Contact Me',
          'type' => 'select',
          'value' => '',
          'extra' => array(
            'items' => '1|Contact Me
',
            'multiple' => 1,
            'title_display' => 0,
            'aslist' => 0,
            'optrand' => 0,
            'conditional_operator' => '=',
            'other_option' => NULL,
            'other_text' => 'Other...',
            'description' => '',
            'custom_keys' => FALSE,
            'options_source' => '',
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 0,
          'weight' => 7,
          'page_num' => 1,
        ),
        8 => array(
          'pid' => 0,
          'form_key' => 'phone',
          'name' => 'Phone',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 0,
          'weight' => 8,
          'page_num' => 1,
        ),
        9 => array(
          'pid' => 0,
          'form_key' => 'message_header',
          'name' => 'Message Header',
          'type' => 'markup',
          'value' => '<div class="divide"></div>
<h4>Message</h4>
Please let us know your thoughts.',
          'extra' => array(
            'conditional_operator' => '=',
            'format' => 'filtered_html',
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 0,
          'weight' => 9,
          'page_num' => 1,
        ),
        10 => array(
          'pid' => 0,
          'form_key' => 'message',
          'name' => 'Message',
          'type' => 'textarea',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'resizable' => 1,
            'disabled' => 0,
            'conditional_operator' => '=',
            'cols' => '',
            'rows' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 0,
          'weight' => 10,
          'page_num' => 1,
        ),
      ),
    ),
    'captcha' => 'default',
    'title' => 'Contact Us',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'webform',
    'language' => 'und',
    'created' => 1294331420,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'contact_us',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>&nbsp;</p><h1>ABC Agency Offices are located at:</h1><p><img alt="Map to Agency" title="Map to Agency" src="/profiles/openpublic/modules/apps/openpublic_webform/openpublic_webform_demo/gmap.gif" style="float: right; width: 270px; height: 185px;" /></p><h3>123 Main Street<br />Washington, DC 12345</h3><h3><br />Email: info@example.gov<br /> Phone: (202)555-1212</h3><p>&nbsp;</p><h3>Our offices are available</h3><h3>M-F 8:30 am to 4:30 pm.</h3><p>&nbsp;</p><h4>We&#39;re here to serve you. Please tell us how we can be of assistance.</h4><p>&nbsp;</p><p>&nbsp;</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p> </p>
<h1>ABC Agency Offices are located at:</h1>
<p><img alt="Map to Agency" title="Map to Agency" src="/profiles/openpublic/modules/apps/openpublic_webform/openpublic_webform_demo/gmap.gif" style="float: right; width: 270px; height: 185px;" /></p>
<h3>123 Main Street<br />Washington, DC 12345</h3>
<h3>Email: <a href="mailto:info@example.gov">info@example.gov</a><br /> Phone: (202)555-1212</h3>
<p> </p>
<h3>Our offices are available</h3>
<h3>M-F 8:30 am to 4:30 pm.</h3>
<p> </p>
<h4>We\'re here to serve you. Please tell us how we can be of assistance.</h4>
<p> </p>
<p> </p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['email_update'] = (object) array(
    'exported_path' => 'webform/get-updates',
    'webform' => array(
      'confirmation' => 'Thank you for subscribing to updates
 ',
      'confirmation_format' => 0,
      'redirect_url' => '<confirmation>',
      'status' => 1,
      'block' => 0,
      'teaser' => 0,
      'allow_draft' => 0,
      'auto_save' => 0,
      'submit_notice' => 1,
      'submit_text' => '',
      'submit_limit' => -1,
      'submit_interval' => -1,
      'total_submit_limit' => -1,
      'total_submit_interval' => -1,
      'record_exists' => TRUE,
      'roles' => array(
        0 => 1,
        1 => 2,
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => 0,
          'form_key' => 'email',
          'name' => 'Subscribe',
          'type' => 'email',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'disabled' => 0,
            'unique' => 1,
            'conditional_operator' => '=',
            'width' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 1,
          'weight' => 1,
          'page_num' => 1,
        ),
      ),
    ),
    'title' => 'Get Updates',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'webform',
    'language' => 'und',
    'created' => 1294352355,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'email_update',
    'body' => array(),
  );

  $content['feedback'] = (object) array(
    'exported_path' => 'webform/feedback',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => 0,
      'redirect_url' => '<confirmation>',
      'status' => 1,
      'block' => 0,
      'teaser' => 0,
      'allow_draft' => 0,
      'auto_save' => 0,
      'submit_notice' => 1,
      'submit_text' => '',
      'submit_limit' => -1,
      'submit_interval' => -1,
      'total_submit_limit' => -1,
      'total_submit_interval' => -1,
      'record_exists' => TRUE,
      'roles' => array(
        0 => 1,
        1 => 2,
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => 0,
          'form_key' => 'full_name',
          'name' => 'Full Name',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 1,
          'weight' => 0,
          'page_num' => 1,
        ),
        1 => array(
          'pid' => 0,
          'form_key' => 'company_orginization',
          'name' => 'Company/Organization',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 1,
          'weight' => 1,
          'page_num' => 1,
        ),
        2 => array(
          'pid' => 0,
          'form_key' => 'street_address',
          'name' => 'Street Address',
          'type' => 'textarea',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'resizable' => 1,
            'disabled' => 0,
            'conditional_operator' => '=',
            'cols' => '',
            'rows' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 1,
          'weight' => 2,
          'page_num' => 1,
        ),
        3 => array(
          'pid' => 0,
          'form_key' => 'state',
          'name' => 'State',
          'type' => 'select',
          'value' => '',
          'extra' => array(
            'items' => 'AL|Alabama
AK|Alaska
AS|American Samoa
AZ|Arizona
AR|Arkansas
CA|California
CO|Colorado
CT|Connecticut
DE|Delaware
DC|District of Columbia
FL|Florida
GA|Georgia
GU|Guam
HI|Hawaii
ID|Idaho
IL|Illinois
IN|Indiana
IA|Iowa
KS|Kansas
KY|Kentucky
LA|Louisiana
ME|Maine
MH|Marshall Islands
MD|Maryland
MA|Massachusetts
MI|Michigan
MN|Minnesota
MS|Mississippi
MO|Missouri
MT|Montana
NE|Nebraska
NV|Nevada
NH|New Hampshire
NJ|New Jersey
NM|New Mexico
NY|New York
NC|North Carolina
ND|North Dakota
MP|Northern Marianas Islands
OH|Ohio
OK|Oklahoma
OR|Oregon
PW|Palau
PA|Pennsylvania
PR|Puerto Rico
RI|Rhode Island
SC|South Carolina
SD|South Dakota
TN|Tennessee
TX|Texas
UT|Utah
VT|Vermont
VI|Virgin Islands
VA|Virginia
WA|Washington
WV|West Virginia
WI|Wisconsin
WY|Wyoming
',
            'options_source' => 'united_states',
            'multiple' => 0,
            'title_display' => 0,
            'aslist' => 1,
            'optrand' => 0,
            'conditional_operator' => '=',
            'other_option' => NULL,
            'other_text' => 'Other...',
            'description' => '',
            'custom_keys' => FALSE,
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 1,
          'weight' => 3,
          'page_num' => 1,
        ),
        4 => array(
          'pid' => 0,
          'form_key' => 'zip',
          'name' => 'Zip',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 1,
          'weight' => 4,
          'page_num' => 1,
        ),
        5 => array(
          'pid' => 0,
          'form_key' => 'email',
          'name' => 'Email',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 0,
          'weight' => 5,
          'page_num' => 1,
        ),
        6 => array(
          'pid' => 0,
          'form_key' => 'fax',
          'name' => 'Fax',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 0,
          'weight' => 6,
          'page_num' => 1,
        ),
        7 => array(
          'pid' => 0,
          'form_key' => 'contact_me',
          'name' => 'Contact Me',
          'type' => 'select',
          'value' => '',
          'extra' => array(
            'items' => '1|Contact Me
',
            'multiple' => 1,
            'title_display' => 0,
            'aslist' => 0,
            'optrand' => 0,
            'conditional_operator' => '=',
            'other_option' => NULL,
            'other_text' => 'Other...',
            'description' => '',
            'custom_keys' => FALSE,
            'options_source' => '',
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 0,
          'weight' => 7,
          'page_num' => 1,
        ),
        8 => array(
          'pid' => 0,
          'form_key' => 'phone',
          'name' => 'Phone',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 0,
          'weight' => 8,
          'page_num' => 1,
        ),
        9 => array(
          'pid' => 0,
          'form_key' => 'message_header',
          'name' => 'Message Header',
          'type' => 'markup',
          'value' => '<div class="divide"></div>
<h4>Message</h4>
<p>Please let us know your thoughts.</p>',
          'extra' => array(
            'conditional_operator' => '=',
            'format' => 'full_html',
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 0,
          'weight' => 9,
          'page_num' => 1,
        ),
        10 => array(
          'pid' => 0,
          'form_key' => 'message',
          'name' => 'Message',
          'type' => 'textarea',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'resizable' => 1,
            'disabled' => 0,
            'conditional_operator' => '=',
            'cols' => '',
            'rows' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
            'private' => 0,
          ),
          'mandatory' => 0,
          'weight' => 10,
          'page_num' => 1,
        ),
      ),
    ),
    'captcha' => 'default',
    'title' => 'Feedback',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'webform',
    'language' => 'und',
    'created' => 1294331420,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'feedback',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<h4>We want to know...</h4>
<p class="instructions">Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam. </p>      
<p class="required-expla">Required <span class=\'form-required\'>*</span><p> 


           ',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<h4>We want to know...</h4>
<p class="instructions">Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam. </p>
<p class="required-expla">Required <span class="form-required">*</span><br /></p>',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
