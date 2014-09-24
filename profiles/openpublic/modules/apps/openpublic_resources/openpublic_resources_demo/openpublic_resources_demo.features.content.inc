<?php
/**
 * @file
 * openpublic_resources_demo.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openpublic_resources_demo_content_defaults() {
  $content = array();

  $content['resources_education'] = (object) array(
    'exported_path' => 'resource/education',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/resources_education',
      'router_path' => 'node/%',
      'link_title' => 'Education',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -50,
      'customized' => 1,
      'parent_path' => 'resources',
      'identifier' => 'main-menu:node-name/resources_education',
    ),
    'title' => 'Education',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'resource',
    'language' => 'und',
    'created' => 1293726619,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'resources_education',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Quod claritatem qui luptatum usus et. Nihil quis anteposuerit hendrerit sequitur claritatem. Eorum iusto lorem ad delenit est. Eros tempor littera lectorum euismod qui. Magna claritas lobortis aliquam feugait eodem. Iriure zzril possim luptatum feugiat eu. Diam typi autem qui dolore placerat. Luptatum ea congue suscipit ut laoreet. Enim aliquip accumsan legunt feugait minim. Aliquam processus seacula consequat nunc est. Praesent eros consuetudium notare doming assum. Formas qui odio nisl iis non. Te nunc putamus suscipit mutationem quam. Dolore nobis imperdiet vel decima dynamicus. 

Feugiat soluta iusto erat placerat legere. Autem putamus est per lectores nulla. Vero et nobis clari litterarum zzril. Me processus quarta dolore putamus feugiat. Nibh litterarum augue accumsan option qui. Parum per est volutpat qui quarta. Ipsum ad iusto elit lius diam. Dignissim laoreet ii formas doming commodo. Commodo in et consequat eros mutationem. Claritas suscipit dolore euismod iis decima. Parum delenit tincidunt ullamcorper duis doming. Doming nunc sed aliquam veniam adipiscing. Congue gothica consuetudium est adipiscing tempor. Qui ii eorum exerci facit soluta. 

Et anteposuerit quinta notare veniam ex. Me eorum esse ipsum feugait eodem. Placerat assum hendrerit magna typi tempor. Iriure qui aliquip nobis tation nam. Possim nibh Investigationes parum quam et. Erat nam legentis hendrerit dolore claritatem. Mirum sequitur claritatem feugait volutpat te. Consequat qui quod videntur quam laoreet. Liber ipsum suscipit nunc eum veniam. Facilisis in sollemnes nihil consectetuer est. Lorem dolore consuetudium qui laoreet et. Gothica sed futurum magna enim velit. Placerat commodo ii nulla facilisis exerci. Est est iis insitam quinta volutpat. Feugiat soluta iusto erat placerat legere. Autem putamus est per lectores nulla. Vero et nobis clari litterarum zzril. Me processus quarta dolore putamus feugiat. Nibh litterarum augue accumsan option qui. Parum per est volutpat qui quarta. Ipsum ad iusto elit lius diam. Dignissim laoreet ii formas doming commodo. Commodo in et consequat eros mutationem. Claritas suscipit dolore euismod iis decima. Parum delenit tincidunt ullamcorper duis doming. Doming nunc sed aliquam veniam adipiscing. Congue gothica consuetudium est adipiscing tempor. Qui ii eorum exerci facit soluta. 

Et anteposuerit quinta notare veniam ex. Me eorum esse ipsum feugait eodem. Placerat assum hendrerit magna typi tempor. Iriure qui aliquip nobis tation nam. Possim nibh Investigationes parum quam et. Erat nam legentis hendrerit dolore claritatem. Mirum sequitur claritatem feugait volutpat te. Consequat qui quod videntur quam laoreet. Liber ipsum suscipit nunc eum veniam. Facilisis in sollemnes nihil consectetuer est. Lorem dolore consuetudium qui laoreet et. Gothica sed futurum magna enim velit. Placerat commodo ii nulla facilisis exerci. Est est iis insitam quinta volutpat.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Quod claritatem qui luptatum usus et. Nihil quis anteposuerit hendrerit sequitur claritatem. Eorum iusto lorem ad delenit est. Eros tempor littera lectorum euismod qui. Magna claritas lobortis aliquam feugait eodem. Iriure zzril possim luptatum feugiat eu. Diam typi autem qui dolore placerat. Luptatum ea congue suscipit ut laoreet. Enim aliquip accumsan legunt feugait minim. Aliquam processus seacula consequat nunc est. Praesent eros consuetudium notare doming assum. Formas qui odio nisl iis non. Te nunc putamus suscipit mutationem quam. Dolore nobis imperdiet vel decima dynamicus. </p>
<p>Feugiat soluta iusto erat placerat legere. Autem putamus est per lectores nulla. Vero et nobis clari litterarum zzril. Me processus quarta dolore putamus feugiat. Nibh litterarum augue accumsan option qui. Parum per est volutpat qui quarta. Ipsum ad iusto elit lius diam. Dignissim laoreet ii formas doming commodo. Commodo in et consequat eros mutationem. Claritas suscipit dolore euismod iis decima. Parum delenit tincidunt ullamcorper duis doming. Doming nunc sed aliquam veniam adipiscing. Congue gothica consuetudium est adipiscing tempor. Qui ii eorum exerci facit soluta. </p>
<p>Et anteposuerit quinta notare veniam ex. Me eorum esse ipsum feugait eodem. Placerat assum hendrerit magna typi tempor. Iriure qui aliquip nobis tation nam. Possim nibh Investigationes parum quam et. Erat nam legentis hendrerit dolore claritatem. Mirum sequitur claritatem feugait volutpat te. Consequat qui quod videntur quam laoreet. Liber ipsum suscipit nunc eum veniam. Facilisis in sollemnes nihil consectetuer est. Lorem dolore consuetudium qui laoreet et. Gothica sed futurum magna enim velit. Placerat commodo ii nulla facilisis exerci. Est est iis insitam quinta volutpat. Feugiat soluta iusto erat placerat legere. Autem putamus est per lectores nulla. Vero et nobis clari litterarum zzril. Me processus quarta dolore putamus feugiat. Nibh litterarum augue accumsan option qui. Parum per est volutpat qui quarta. Ipsum ad iusto elit lius diam. Dignissim laoreet ii formas doming commodo. Commodo in et consequat eros mutationem. Claritas suscipit dolore euismod iis decima. Parum delenit tincidunt ullamcorper duis doming. Doming nunc sed aliquam veniam adipiscing. Congue gothica consuetudium est adipiscing tempor. Qui ii eorum exerci facit soluta. </p>
<p>Et anteposuerit quinta notare veniam ex. Me eorum esse ipsum feugait eodem. Placerat assum hendrerit magna typi tempor. Iriure qui aliquip nobis tation nam. Possim nibh Investigationes parum quam et. Erat nam legentis hendrerit dolore claritatem. Mirum sequitur claritatem feugait volutpat te. Consequat qui quod videntur quam laoreet. Liber ipsum suscipit nunc eum veniam. Facilisis in sollemnes nihil consectetuer est. Lorem dolore consuetudium qui laoreet et. Gothica sed futurum magna enim velit. Placerat commodo ii nulla facilisis exerci. Est est iis insitam quinta volutpat.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_resource_photo' => array(
      'und' => array(
        0 => array(
          'filename' => 'education.jpg',
          'uri' => 'public://education.jpg',
          'filemime' => 'image/jpeg',
          'filesize' => 103657,
          'status' => 1,
          'rdf_mapping' => array(),
          'alt' => 'demo content image',
          'title' => 'demo content image',
          'width' => 800,
          'height' => 500,
        ),
      ),
    ),
  );

  $content['resources_legislation'] = (object) array(
    'exported_path' => 'resource/legislation',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/resources_legislation',
      'router_path' => 'node/%',
      'link_title' => 'Legislation',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -49,
      'customized' => 1,
      'parent_path' => 'resources',
      'identifier' => 'main-menu:node-name/resources_legislation',
    ),
    'title' => 'Legislation',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'resource',
    'language' => 'und',
    'created' => 1293725527,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'resources_legislation',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Facit nulla in vulputate vulputate aliquam. Commodo esse habent tation nam soluta. Putamus sit ipsum mirum clari tempor. Cum eros typi erat iusto etiam. Option suscipit adipiscing dolor volutpat lectorum. Consequat decima lobortis consequat litterarum in. Dolor legere in est commodo habent. Delenit vulputate quam ullamcorper ut dignissim. Anteposuerit consequat habent luptatum vulputate quarta. Zzril quarta mirum soluta vulputate qui. Facit processus blandit consectetuer sit seacula. Formas lectorum mirum nobis me veniam. Et iis littera me duis legere. Nunc nonummy sequitur qui quis molestie. 

Iis consequat nunc qui quis amet. Usus id augue anteposuerit non eleifend. Sollemnes amet lectores autem parum molestie. Formas aliquam adipiscing accumsan erat vel. Aliquip consectetuer videntur qui quarta ii. Gothica futurum clari parum consuetudium velit. Parum et hendrerit sollemnes enim decima. Facer vulputate ii etiam putamus nobis. Soluta autem et lius lius ut. Iis iriure odio legunt notare nobis. Possim decima insitam volutpat et litterarum. Claritatem augue praesent anteposuerit qui consuetudium. Sit demonstraverunt nonummy quinta enim facilisis. Duis doming decima humanitatis per est. Amet consequat quam seacula tempor dolor. Facer ullamcorper dolore ad et dignissim. Usus claritatem vero assum imperdiet eu. Decima ut nam eum vulputate facilisi. Elit et ii minim lius illum. Typi veniam formas nostrud molestie quis. Eum laoreet mazim qui futurum parum. 

Wisi dolor dynamicus nobis volutpat feugiat. Formas exerci facilisi adipiscing commodo futurum. Lius blandit mutationem delenit esse est. Videntur zzril facit tation est sequitur. In ea exerci notare dolor nobis. Littera lorem sequitur clari at futurum. Quod wisi est minim est blandit. Lius wisi facilisis sit duis lobortis. Lius et delenit dignissim eum vulputate. Amet ut tincidunt suscipit esse non. Ex legentis lorem duis decima soluta. Formas accumsan mirum mirum decima sit. Doming minim est claritatem id claritas. Saepius in sollemnes eros ii ut. 

Et consequat eu nunc lectores facilisi. Vulputate in nobis seacula delenit te. Me luptatum ut duis luptatum ullamcorper. Ut quis te et decima processus.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Facit nulla in vulputate vulputate aliquam. Commodo esse habent tation nam soluta. Putamus sit ipsum mirum clari tempor. Cum eros typi erat iusto etiam. Option suscipit adipiscing dolor volutpat lectorum. Consequat decima lobortis consequat litterarum in. Dolor legere in est commodo habent. Delenit vulputate quam ullamcorper ut dignissim. Anteposuerit consequat habent luptatum vulputate quarta. Zzril quarta mirum soluta vulputate qui. Facit processus blandit consectetuer sit seacula. Formas lectorum mirum nobis me veniam. Et iis littera me duis legere. Nunc nonummy sequitur qui quis molestie. </p>
<p>Iis consequat nunc qui quis amet. Usus id augue anteposuerit non eleifend. Sollemnes amet lectores autem parum molestie. Formas aliquam adipiscing accumsan erat vel. Aliquip consectetuer videntur qui quarta ii. Gothica futurum clari parum consuetudium velit. Parum et hendrerit sollemnes enim decima. Facer vulputate ii etiam putamus nobis. Soluta autem et lius lius ut. Iis iriure odio legunt notare nobis. Possim decima insitam volutpat et litterarum. Claritatem augue praesent anteposuerit qui consuetudium. Sit demonstraverunt nonummy quinta enim facilisis. Duis doming decima humanitatis per est. Amet consequat quam seacula tempor dolor. Facer ullamcorper dolore ad et dignissim. Usus claritatem vero assum imperdiet eu. Decima ut nam eum vulputate facilisi. Elit et ii minim lius illum. Typi veniam formas nostrud molestie quis. Eum laoreet mazim qui futurum parum. </p>
<p>Wisi dolor dynamicus nobis volutpat feugiat. Formas exerci facilisi adipiscing commodo futurum. Lius blandit mutationem delenit esse est. Videntur zzril facit tation est sequitur. In ea exerci notare dolor nobis. Littera lorem sequitur clari at futurum. Quod wisi est minim est blandit. Lius wisi facilisis sit duis lobortis. Lius et delenit dignissim eum vulputate. Amet ut tincidunt suscipit esse non. Ex legentis lorem duis decima soluta. Formas accumsan mirum mirum decima sit. Doming minim est claritatem id claritas. Saepius in sollemnes eros ii ut. </p>
<p>Et consequat eu nunc lectores facilisi. Vulputate in nobis seacula delenit te. Me luptatum ut duis luptatum ullamcorper. Ut quis te et decima processus.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_resource_photo' => array(
      'und' => array(
        0 => array(
          'filename' => 'Scroll_legislation.jpg',
          'uri' => 'public://Scroll_legislation.jpg',
          'filemime' => 'image/jpeg',
          'filesize' => 37764,
          'status' => 1,
          'rdf_mapping' => array(),
          'alt' => 'demo content image',
          'title' => 'demo content image',
          'width' => 450,
          'height' => 363,
        ),
      ),
    ),
  );

return $content;
}
