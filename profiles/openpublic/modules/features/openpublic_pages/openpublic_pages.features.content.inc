<?php
/**
 * @file
 * openpublic_pages.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openpublic_pages_content_defaults() {
  $content = array();

  $content['about_page'] = (object) array(
    'exported_path' => 'site-page/about-abc-agency',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/about_page',
      'router_path' => 'node/%',
      'link_title' => 'About',
      'options' => array(
        'attributes' => array(),
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 1,
      'expanded' => 0,
      'weight' => -50,
      'identifier' => 'main-menu:node-name/about_page',
    ),
    'title' => 'About the ABC Agency',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'site_page',
    'language' => 'und',
    'created' => 1294206857,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'about_page',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>&nbsp;</p><h1>ABC Agency Offices are located at:</h1><p><img alt="Map to Agency" title="Map to Agency" src="/profiles/openpublic/modules/features/openpublic_defaults/theme/gmap.gif" style="float: right; width: 270px; height: 185px;" /></p><h3>123 Main Street<br />Washington, DC 12345</h3><h3><br />Email: info@example.gov<br /> Phone: (202)555-1212</h3><p>&nbsp;</p><h3>Our offices are available</h3><h3>M-F 8:30 am to 4:30 pm.</h3><p>&nbsp;</p><h4>We&#39;re here to serve you. Please tell us how we can be of assistance.</h4><p>&nbsp;</p><p>&nbsp;</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p> </p>
<h1>ABC Agency Offices are located at:</h1>
<p><img alt="Map to Agency" title="Map to Agency" src="/profiles/openpublic/modules/features/openpublic_defaults/theme/gmap.gif" style="float: right; width: 270px; height: 185px;" /></p>
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
    'field_summary' => array(
      'und' => array(
        0 => array(
          'value' => 'Zzril vero decima cum amet minim. Iusto assum eodem hendrerit nihil nibh. Lorem ipsum blandit saepius eorum claritatem. Praesent autem enim doming processus eu. Dolore blandit facilisi mirum lorem nonummy. Wisi ut futurum blandit doming dolore. Anteposuerit nulla legere legunt ii qui. Veniam facer euismod sollemnes lius eu. Molestie mirum in nulla processus gothica. Vero qui qui feugiat doming placerat. ',
          'format' => NULL,
          'safe_value' => 'Zzril vero decima cum amet minim. Iusto assum eodem hendrerit nihil nibh. Lorem ipsum blandit saepius eorum claritatem. Praesent autem enim doming processus eu. Dolore blandit facilisi mirum lorem nonummy. Wisi ut futurum blandit doming dolore. Anteposuerit nulla legere legunt ii qui. Veniam facer euismod sollemnes lius eu. Molestie mirum in nulla processus gothica. Vero qui qui feugiat doming placerat. ',
        ),
      ),
    ),
  );

  $content['contact_us'] = (object) array(
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
    'exported_path' => 'webform/contact-us',
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
          'value' => '<p>&nbsp;</p><h1>ABC Agency Offices are located at:</h1><p><img alt="Map to Agency" title="Map to Agency" src="/profiles/openpublic/modules/features/openpublic_defaults/theme/gmap.gif" style="float: right; width: 270px; height: 185px;" /></p><h3>123 Main Street<br />Washington, DC 12345</h3><h3><br />Email: info@example.gov<br /> Phone: (202)555-1212</h3><p>&nbsp;</p><h3>Our offices are available</h3><h3>M-F 8:30 am to 4:30 pm.</h3><p>&nbsp;</p><h4>We&#39;re here to serve you. Please tell us how we can be of assistance.</h4><p>&nbsp;</p><p>&nbsp;</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p> </p>
<h1>ABC Agency Offices are located at:</h1>
<p><img alt="Map to Agency" title="Map to Agency" src="/profiles/openpublic/modules/features/openpublic_defaults/theme/gmap.gif" style="float: right; width: 270px; height: 185px;" /></p>
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
    'exported_path' => 'webform/get-updates',
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
    'exported_path' => 'webform/feedback',
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

  $content['foia'] = (object) array(
    'exported_path' => 'site-page/foia',
    'title' => 'FOIA',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'site_page',
    'language' => 'und',
    'created' => 1294324825,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'foia',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Freedom of Information Act text',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Freedom of Information Act text</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['footer_info'] = (object) array(
    'exported_path' => 'editors-choice/footer-info',
    'title' => 'Footer Info',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'editors_choice',
    'language' => 'und',
    'created' => 1294699678,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'footer_info',
    'field_editors_choice_show_title' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_editors_choice_summary' => array(
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

  $content['open_gov_contact_block'] = (object) array(
    'exported_path' => 'editors-choice/open-gov-contact',
    'title' => 'Open Gov Contact',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'editors_choice',
    'language' => 'und',
    'created' => 1294759259,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'open_gov_contact_block',
    'field_editors_choice_link' => array(
      'und' => array(
        0 => array(
          'url' => 'www.twitter.com',
          'title' => 'Twitter',
          'attributes' => array(),
        ),
      ),
    ),
    'field_editors_choice_show_title' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_editors_choice_summary' => array(
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

  $content['open_gov_contact_person'] = (object) array(
    'exported_path' => 'profile/james-jones',
    'title' => 'James Jones',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'profile',
    'language' => 'und',
    'created' => 1294788829,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'open_gov_contact_person',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque porta tincidunt imperdiet. Phasellus placerat ornare nisl, sed mollis nisl consequat et. Curabitur eu mauris eget erat congue commodo eget sed magna. Sed et dui quis diam dapibus placerat. Proin ornare, nibh dignissim dapibus commodo, dui nisi interdum urna, nec aliquet nibh elit quis dui. Quisque ipsum tellus, ornare at varius sit amet, ultrices eu nibh. Sed vitae nibh purus, mollis scelerisque tortor. Curabitur rhoncus, sem ac varius pellentesque, justo nisl vestibulum magna, eu tempor nulla magna quis eros. Vivamus at consequat eros. Sed nec arcu nec ligula bibendum iaculis. Aenean in arcu ante. Aliquam ultrices, sapien hendrerit aliquam sagittis, libero ipsum pellentesque libero, at tristique augue leo sit amet quam. Nullam bibendum scelerisque neque. Fusce ligula tellus, blandit nec hendrerit sed, convallis eget nisi. Donec non sapien vel nulla convallis dictum.

Phasellus blandit rhoncus sapien, ac laoreet metus dictum ac. Cras non elit nec ligula feugiat dignissim vel id sem. Nam consequat, velit sit amet gravida viverra, lacus dolor sollicitudin ante, quis dignissim justo sapien at odio. Duis gravida risus eget ligula aliquam fermentum. Mauris leo enim, varius vitae venenatis blandit, tempus eu purus. Sed euismod malesuada turpis, ac sollicitudin ante dignissim nec. Phasellus risus leo, cursus scelerisque adipiscing ut, blandit id quam. Cras laoreet euismod eros vel eleifend. Aenean ut lacus in ante rhoncus cursus vel eget ipsum. Nulla sed urna sed lectus posuere iaculis. Nullam nunc nunc, malesuada ut tincidunt a, dignissim eu nisl. Aliquam erat volutpat. Morbi scelerisque nisl eu quam interdum eu volutpat neque facilisis. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; ',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque porta tincidunt imperdiet. Phasellus placerat ornare nisl, sed mollis nisl consequat et. Curabitur eu mauris eget erat congue commodo eget sed magna. Sed et dui quis diam dapibus placerat. Proin ornare, nibh dignissim dapibus commodo, dui nisi interdum urna, nec aliquet nibh elit quis dui. Quisque ipsum tellus, ornare at varius sit amet, ultrices eu nibh. Sed vitae nibh purus, mollis scelerisque tortor. Curabitur rhoncus, sem ac varius pellentesque, justo nisl vestibulum magna, eu tempor nulla magna quis eros. Vivamus at consequat eros. Sed nec arcu nec ligula bibendum iaculis. Aenean in arcu ante. Aliquam ultrices, sapien hendrerit aliquam sagittis, libero ipsum pellentesque libero, at tristique augue leo sit amet quam. Nullam bibendum scelerisque neque. Fusce ligula tellus, blandit nec hendrerit sed, convallis eget nisi. Donec non sapien vel nulla convallis dictum.</p>
<p>Phasellus blandit rhoncus sapien, ac laoreet metus dictum ac. Cras non elit nec ligula feugiat dignissim vel id sem. Nam consequat, velit sit amet gravida viverra, lacus dolor sollicitudin ante, quis dignissim justo sapien at odio. Duis gravida risus eget ligula aliquam fermentum. Mauris leo enim, varius vitae venenatis blandit, tempus eu purus. Sed euismod malesuada turpis, ac sollicitudin ante dignissim nec. Phasellus risus leo, cursus scelerisque adipiscing ut, blandit id quam. Cras laoreet euismod eros vel eleifend. Aenean ut lacus in ante rhoncus cursus vel eget ipsum. Nulla sed urna sed lectus posuere iaculis. Nullam nunc nunc, malesuada ut tincidunt a, dignissim eu nisl. Aliquam erat volutpat. Morbi scelerisque nisl eu quam interdum eu volutpat neque facilisis. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae;</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_profile_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'James',
          'format' => NULL,
          'safe_value' => 'James',
        ),
      ),
    ),
    'field_profile_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Jones',
          'format' => NULL,
          'safe_value' => 'Jones',
        ),
      ),
    ),
    'field_profile_photo' => array(
      'und' => array(
        0 => array(
          'alt' => 'Photo of James Jones',
          'title' => 'Photo of James Jones',
          'width' => 287,
          'height' => 280,
          'filename' => 'guy_in_suit_2.jpeg',
          'uri' => 'public://guy_in_suit_2.jpeg',
          'filemime' => 'image/jpeg',
          'filesize' => 28657,
          'status' => 1,
          'rdf_mapping' => array(),
          'image' => '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',
        ),
      ),
    ),
    'field_profile_job_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Deputy Director of Technology',
          'format' => NULL,
          'safe_value' => 'Deputy Director of Technology',
        ),
      ),
    ),
    'field_profile_leadership' => array(
      'und' => array(
        0 => array(
          'value' => 0,
        ),
      ),
    ),
    'field_profile_staff' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
  );

  $content['open_gov_more_block'] = (object) array(
    'exported_path' => 'editors-choice/more-about-open-government',
    'title' => 'More About Open Government',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'editors_choice',
    'language' => 'und',
    'created' => 1294757164,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'open_gov_more_block',
    'field_editors_choice_show_title' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_editors_choice_summary' => array(
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

  $content['open_government'] = (object) array(
    'exported_path' => 'site-page/open-government',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/open_government',
      'router_path' => 'node/%',
      'link_title' => 'Open Government',
      'options' => array(
        'attributes' => array(),
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -45,
      'identifier' => 'main-menu:node-name/open_government',
    ),
    'title' => 'Open Government',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'site_page',
    'language' => 'und',
    'created' => 1294722622,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'open_government',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<h2>ABC Agency Open Government Plan</h2><p>&nbsp;</p><p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean placerat pellentesque diam, id ultrices odio molestie et. Fusce ipsum velit, accumsan sit amet convallis sit amet, condimentum eu felis. Ut vulputate nibh sit amet mauris blandit varius. Morbi fermentum tortor vitae nisi ornare faucibus. Integer posuere sem mi, at imperdiet augue. Duis a libero non neque porttitor convallis a ac justo. Mauris sodales nibh nec dolor condimentum sagittis. Curabitur est metus, consequat fermentum laoreet id, iaculis nec dui. Aenean ac magna vel quam euismod dictum. Pellentesque turpis tortor, faucibus quis tempor ac, consectetur sit amet tellus. Praesent nec egestas turpis. Cras imperdiet ante et quam dapibus luctus. Nunc a nisl vitae metus rhoncus rhoncus sed in metus. Sed condimentum varius leo. Nulla et sapien nisl, ut venenatis risus. Proin iaculis feugiat luctus. Ut nunc nibh, porttitor et sollicitudin at, pellentesque eget enim. Ut eros lacus, rutrum ut pellentesque a, suscipit nec ligula. Cras in dapibus quam. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Aenean id sapien ut massa accumsan imperdiet sit amet non nulla. Morbi vel sem lacus. Aenean ultricies ligula vitae lectus tempus tincidunt dignissim magna scelerisque. Praesent porta, ligula a tristique dictum, nisi nunc commodo felis, eget consequat nisi felis a lectus. Sed ut metus risus. Aenean lorem elit, aliquam eu tempus nec, vulputate non nibh. Nam sit amet porttitor enim. Pellentesque et leo purus. Aliquam fringilla, sem et scelerisque condimentum, lacus eros tincidunt augue, a convallis lorem libero id sapien. Suspendisse quis sapien augue, ac tincidunt ligula. Quisque mollis mi a massa suscipit id suscipit sem sagittis. In at diam sit amet eros molestie faucibus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Suspendisse sed elit sit amet est suscipit pretium eu in mi. Ut justo est, volutpat at congue a, ultrices quis felis.</p><p>&nbsp;</p><p>Available Reports:</p><ul><li>Aenean vulputate vestibulum lorem, sit amet accumsan magna feugiat quis.</li><li>Proin risus nulla, vestibulum ac sodales ut, dapibus in enim.</li><li>Proin nec faucibus velit.</li><li>Nullam quis felis nibh, vel pretium velit.</li></ul>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<h2>ABC Agency Open Government Plan</h2>
<p> </p>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean placerat pellentesque diam, id ultrices odio molestie et. Fusce ipsum velit, accumsan sit amet convallis sit amet, condimentum eu felis. Ut vulputate nibh sit amet mauris blandit varius. Morbi fermentum tortor vitae nisi ornare faucibus. Integer posuere sem mi, at imperdiet augue. Duis a libero non neque porttitor convallis a ac justo. Mauris sodales nibh nec dolor condimentum sagittis. Curabitur est metus, consequat fermentum laoreet id, iaculis nec dui. Aenean ac magna vel quam euismod dictum. Pellentesque turpis tortor, faucibus quis tempor ac, consectetur sit amet tellus. Praesent nec egestas turpis. Cras imperdiet ante et quam dapibus luctus. Nunc a nisl vitae metus rhoncus rhoncus sed in metus. Sed condimentum varius leo. Nulla et sapien nisl, ut venenatis risus. Proin iaculis feugiat luctus. Ut nunc nibh, porttitor et sollicitudin at, pellentesque eget enim. Ut eros lacus, rutrum ut pellentesque a, suscipit nec ligula. Cras in dapibus quam. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Aenean id sapien ut massa accumsan imperdiet sit amet non nulla. Morbi vel sem lacus. Aenean ultricies ligula vitae lectus tempus tincidunt dignissim magna scelerisque. Praesent porta, ligula a tristique dictum, nisi nunc commodo felis, eget consequat nisi felis a lectus. Sed ut metus risus. Aenean lorem elit, aliquam eu tempus nec, vulputate non nibh. Nam sit amet porttitor enim. Pellentesque et leo purus. Aliquam fringilla, sem et scelerisque condimentum, lacus eros tincidunt augue, a convallis lorem libero id sapien. Suspendisse quis sapien augue, ac tincidunt ligula. Quisque mollis mi a massa suscipit id suscipit sem sagittis. In at diam sit amet eros molestie faucibus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Suspendisse sed elit sit amet est suscipit pretium eu in mi. Ut justo est, volutpat at congue a, ultrices quis felis.</p>
<p> </p>
<p>Available Reports:</p>
<ul><li>Aenean vulputate vestibulum lorem, sit amet accumsan magna feugiat quis.</li>
<li>Proin risus nulla, vestibulum ac sodales ut, dapibus in enim.</li>
<li>Proin nec faucibus velit.</li>
<li>Nullam quis felis nibh, vel pretium velit.</li>
</ul>',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['press_contact'] = (object) array(
    'exported_path' => 'profile/carol-press',
    'title' => 'Carol Press',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'profile',
    'language' => 'und',
    'created' => 1297094262,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'press_contact',
    'body' => array(),
    'field_profile_address' => array(
      'und' => array(
        0 => array(
          'value' => '5432 5th St. 
Suite #606
Washington DC 20036',
          'format' => NULL,
          'safe_value' => '5432 5th St. 
Suite #606
Washington DC 20036',
        ),
      ),
    ),
    'field_profile_email' => array(
      'und' => array(
        0 => array(
          'value' => 'cpress@opic.gov',
          'format' => NULL,
          'safe_value' => 'cpress@opic.gov',
        ),
      ),
    ),
    'field_profile_first_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Carol',
          'format' => NULL,
          'safe_value' => 'Carol',
        ),
      ),
    ),
    'field_profile_last_name' => array(
      'und' => array(
        0 => array(
          'value' => 'Press',
          'format' => NULL,
          'safe_value' => 'Press',
        ),
      ),
    ),
    'field_profile_phone' => array(
      'und' => array(
        0 => array(
          'value' => '202-341-5555',
          'format' => NULL,
          'safe_value' => '202-341-5555',
        ),
      ),
    ),
    'field_profile_photo' => array(
      'und' => array(
        0 => array(
          'alt' => 'Photo of Carol Press',
          'title' => 'Photo of Carol Press',
          'width' => NULL,
          'height' => NULL,
          'filename' => '',
          'uri' => 'public://',
          'filemime' => '',
          'filesize' => 0,
          'status' => 1,
          'rdf_mapping' => array(),
          'image' => '',
        ),
      ),
    ),
    'field_profile_department' => array(
      'und' => array(
        0 => array(
          'value' => 'Media Relations',
          'format' => NULL,
          'safe_value' => 'Media Relations',
        ),
      ),
    ),
    'field_profile_job_title' => array(
      'und' => array(
        0 => array(
          'value' => 'Director of the Press',
          'format' => NULL,
          'safe_value' => 'Director of the Press',
        ),
      ),
    ),
    'field_profile_leadership' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_profile_social_media' => array(
      'und' => array(
        0 => array(
          'value' => 'http://twitter.com/inadarei',
          'format' => NULL,
          'safe_value' => 'http://twitter.com/inadarei',
        ),
      ),
    ),
    'field_profile_staff' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
  );

  $content['press_contact_editors_choice'] = (object) array(
    'exported_path' => 'editors-choice/press-contact',
    'title' => 'Press Contact',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'editors_choice',
    'language' => 'und',
    'created' => 1297094284,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'press_contact_editors_choice',
    'field_editors_choice_node' => array(
      'und' => array(),
    ),
    'field_editors_choice_show_title' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
  );

  $content['privacy_policy'] = (object) array(
    'exported_path' => 'site-page/privacy-policy',
    'link' => array(
      'menu_name' => 'menu-footer-utility',
      'link_path' => 'node-name/privacy_policy',
      'router_path' => 'node/%',
      'link_title' => 'Privacy Policy',
      'options' => array(
        'attributes' => array(
          'title' => '',
        ),
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -49,
      'identifier' => 'menu-footer-utility:node-name/privacy_policy',
    ),
    'title' => 'Privacy Policy',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'site_page',
    'language' => 'und',
    'created' => 1294283668,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'privacy_policy',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Parum minim dolor sequitur insitam in. Legunt assum autem sit formas doming. Lectorum mutationem cum qui dolore volutpat. Claritatem dolore iusto facilisis vel te. Est eorum mazim minim vel et. Nunc me anteposuerit adipiscing futurum anteposuerit. Autem luptatum eum aliquam amet legere. 

Qui elit nulla nunc diam augue. Nisl in quod nibh ii nihil. Possim feugiat dolor dignissim me odio. Videntur insitam cum legentis etiam lectores. Etiam nonummy feugiat et volutpat legere. Consectetuer tation dolore zzril qui litterarum. Claritatem me feugait velit elit amet. 

Nunc tempor nulla processus praesent fiant. Assum feugiat nonummy lorem saepius minim. Augue formas typi sit sollemnes nihil. Mutationem id qui et decima nobis. Esse nisl qui odio nisl duis. Vel facer ut ullamcorper usus iusto. Dignissim facilisis consectetuer legentis nostrud sit. 

Dolore assum nam nihil nunc dolore. Ea processus doming quam esse qui. Investigationes demonstraverunt ullamcorper quod habent insitam. Dignissim autem wisi possim formas quod. Lobortis dolore lectores ii ut commodo. Quinta congue dolor quam veniam habent. Eu sed magna nisl saepius tation. 

Ut sit putamus laoreet sollemnes ipsum. Saepius consectetuer quarta dolor sed accumsan. Iriure quam est et videntur lorem. Ut est et nibh sit parum. Volutpat qui est processus consectetuer molestie. At ea nisl quod lobortis delenit. Nobis notare demonstraverunt parum Investigationes assum. 

Molestie videntur odio me in futurum. Sit est minim enim nobis nostrud. Sollemnes nihil dignissim nisl dolore parum. Tempor accumsan quod nonummy dolor quis.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Parum minim dolor sequitur insitam in. Legunt assum autem sit formas doming. Lectorum mutationem cum qui dolore volutpat. Claritatem dolore iusto facilisis vel te. Est eorum mazim minim vel et. Nunc me anteposuerit adipiscing futurum anteposuerit. Autem luptatum eum aliquam amet legere. </p>
<p>Qui elit nulla nunc diam augue. Nisl in quod nibh ii nihil. Possim feugiat dolor dignissim me odio. Videntur insitam cum legentis etiam lectores. Etiam nonummy feugiat et volutpat legere. Consectetuer tation dolore zzril qui litterarum. Claritatem me feugait velit elit amet. </p>
<p>Nunc tempor nulla processus praesent fiant. Assum feugiat nonummy lorem saepius minim. Augue formas typi sit sollemnes nihil. Mutationem id qui et decima nobis. Esse nisl qui odio nisl duis. Vel facer ut ullamcorper usus iusto. Dignissim facilisis consectetuer legentis nostrud sit. </p>
<p>Dolore assum nam nihil nunc dolore. Ea processus doming quam esse qui. Investigationes demonstraverunt ullamcorper quod habent insitam. Dignissim autem wisi possim formas quod. Lobortis dolore lectores ii ut commodo. Quinta congue dolor quam veniam habent. Eu sed magna nisl saepius tation. </p>
<p>Ut sit putamus laoreet sollemnes ipsum. Saepius consectetuer quarta dolor sed accumsan. Iriure quam est et videntur lorem. Ut est et nibh sit parum. Volutpat qui est processus consectetuer molestie. At ea nisl quod lobortis delenit. Nobis notare demonstraverunt parum Investigationes assum. </p>
<p>Molestie videntur odio me in futurum. Sit est minim enim nobis nostrud. Sollemnes nihil dignissim nisl dolore parum. Tempor accumsan quod nonummy dolor quis.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_summary' => array(
      'und' => array(
        0 => array(
          'value' => 'Parum minim dolor sequitur insitam in. Legunt assum autem sit formas doming. Lectorum mutationem cum qui dolore volutpat. Claritatem dolore iusto facilisis vel te. Est eorum mazim minim vel et. Nunc me anteposuerit adipiscing futurum anteposuerit. Autem luptatum eum aliquam amet legere. ',
          'format' => NULL,
          'safe_value' => 'Parum minim dolor sequitur insitam in. Legunt assum autem sit formas doming. Lectorum mutationem cum qui dolore volutpat. Claritatem dolore iusto facilisis vel te. Est eorum mazim minim vel et. Nunc me anteposuerit adipiscing futurum anteposuerit. Autem luptatum eum aliquam amet legere. ',
        ),
      ),
    ),
  );

  $content['site_map'] = (object) array(
    'exported_path' => 'site-page/site-map',
    'link' => array(
      'menu_name' => 'menu-footer-utility',
      'link_path' => 'node-name/site_map',
      'router_path' => 'node/%',
      'link_title' => 'Site Map',
      'options' => array(
        'attributes' => array(
          'title' => '',
        ),
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'identifier' => 'menu-footer-utility:node-name/site_map',
    ),
    'title' => 'Site Map',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'site_page',
    'language' => 'und',
    'created' => 1294429666,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'site_map',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'In veniam claritas laoreet magna littera. Nihil typi commodo putamus amet quod. Eu sollemnes tempor erat molestie humanitatis. Anteposuerit esse ullamcorper parum placerat facilisis. Qui cum nonummy lobortis nobis formas. Non parum quam adipiscing at claritatem. At ii littera euismod quod est. 

Cum luptatum praesent wisi humanitatis lius. Eros claritas in per possim claram. Tation putamus quod parum claritas est. Ipsum in tincidunt enim dolore etiam. Notare augue ex iis parum feugait. Consequat feugait magna fiant et parum. Dolor feugiat imperdiet facer dolor placerat. 

Anteposuerit qui claritatem lorem te dignissim. Nunc nisl modo litterarum erat tation. Imperdiet consequat accumsan qui et enim. Delenit duis etiam eleifend quam praesent. Nobis blandit lectorum qui et quis. Luptatum litterarum vel me est commodo. Nobis claritatem suscipit magna erat accumsan. 

Nisl nobis quam Investigationes delenit est. Insitam odio modo quarta habent hendrerit. Praesent nihil eodem soluta non facer. Odio nostrud quarta formas litterarum ex. Dignissim wisi saepius qui lius Investigationes. Delenit consequat nobis quinta dynamicus legentis. Iusto sed facilisi legentis blandit gothica. 

Eum facilisis qui seacula anteposuerit velit. Autem eum id eum laoreet lius. Habent dignissim dolore magna quam delenit. Assum nobis ex doming ut quinta. Odio tation consuetudium legunt typi gothica. Putamus odio consectetuer sed enim claritas. Liber option in esse mirum duis. 

Vel fiant feugait lius me legunt. Putamus nam claritatem eum anteposuerit gothica. Per assum quinta qui ii notare. Volutpat eleifend claram qui quis aliquip.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>In veniam claritas laoreet magna littera. Nihil typi commodo putamus amet quod. Eu sollemnes tempor erat molestie humanitatis. Anteposuerit esse ullamcorper parum placerat facilisis. Qui cum nonummy lobortis nobis formas. Non parum quam adipiscing at claritatem. At ii littera euismod quod est. </p>
<p>Cum luptatum praesent wisi humanitatis lius. Eros claritas in per possim claram. Tation putamus quod parum claritas est. Ipsum in tincidunt enim dolore etiam. Notare augue ex iis parum feugait. Consequat feugait magna fiant et parum. Dolor feugiat imperdiet facer dolor placerat. </p>
<p>Anteposuerit qui claritatem lorem te dignissim. Nunc nisl modo litterarum erat tation. Imperdiet consequat accumsan qui et enim. Delenit duis etiam eleifend quam praesent. Nobis blandit lectorum qui et quis. Luptatum litterarum vel me est commodo. Nobis claritatem suscipit magna erat accumsan. </p>
<p>Nisl nobis quam Investigationes delenit est. Insitam odio modo quarta habent hendrerit. Praesent nihil eodem soluta non facer. Odio nostrud quarta formas litterarum ex. Dignissim wisi saepius qui lius Investigationes. Delenit consequat nobis quinta dynamicus legentis. Iusto sed facilisi legentis blandit gothica. </p>
<p>Eum facilisis qui seacula anteposuerit velit. Autem eum id eum laoreet lius. Habent dignissim dolore magna quam delenit. Assum nobis ex doming ut quinta. Odio tation consuetudium legunt typi gothica. Putamus odio consectetuer sed enim claritas. Liber option in esse mirum duis. </p>
<p>Vel fiant feugait lius me legunt. Putamus nam claritatem eum anteposuerit gothica. Per assum quinta qui ii notare. Volutpat eleifend claram qui quis aliquip.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
