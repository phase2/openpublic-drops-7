<?php
/**
 * @file
 * openpublic_site_page_demo.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openpublic_site_page_demo_content_defaults() {
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
      'customized' => 0,
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
          'value' => '<p>&nbsp;</p><h1>ABC Agency Offices are located at:</h1><p><img alt="Map to Agency" title="Map to Agency" src="/profiles/openpublic/modules/apps/openpublic_site_page/openpublic_site_page_demo/gmap.gif" style="float: right; width: 270px; height: 185px;" /></p><h3>123 Main Street<br />Washington, DC 12345</h3><h3><br />Email: info@example.gov<br /> Phone: (202)555-1212</h3><p>&nbsp;</p><h3>Our offices are available</h3><h3>M-F 8:30 am to 4:30 pm.</h3><p>&nbsp;</p><h4>We&#39;re here to serve you. Please tell us how we can be of assistance.</h4><p>&nbsp;</p><p>&nbsp;</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p> </p>
<h1>ABC Agency Offices are located at:</h1>
<p><img alt="Map to Agency" title="Map to Agency" src="/profiles/openpublic/modules/apps/openpublic_site_page/openpublic_site_page_demo/gmap.gif" style="float: right; width: 270px; height: 185px;" /></p>
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
    'field_topic' => array(
      'und' => array(
        0 => array(
          'vocabulary_machine_name' => 'topic',
          'name' => 'ABC agency',
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

  $content['open_government'] = (object) array(
    'exported_path' => 'open',
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
      'customized' => 0,
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
    'field_topic' => array(
      'und' => array(
        0 => array(
          'vocabulary_machine_name' => 'topic',
          'name' => 'Main Site Page',
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
      'customized' => 0,
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
    'field_topic' => array(
      'und' => array(
        0 => array(
          'vocabulary_machine_name' => 'topic',
          'name' => 'Main Site Page',
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
      'customized' => 0,
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
    'field_topic' => array(
      'und' => array(
        0 => array(
          'vocabulary_machine_name' => 'topic',
          'name' => 'Main Site Page',
        ),
      ),
    ),
  );

return $content;
}
