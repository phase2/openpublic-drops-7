<?php
/**
 * @file
 * openpublic_home_page_feature_demo.box.inc
 */

/**
 * Implements hook_default_box().
 */
function openpublic_home_page_feature_demo_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-dc4059cc';
  $box->plugin_key = 'feature';
  $box->title = '';
  $box->description = 'default home page block';
  $box->options = array(
    'entity_boxes_id' => '',
    'additional_classes' => '',
  );
  $box->entity_boxes = array(
    'field_feature_slides' => array(
      'und' => array(
        0 => array(
          'field_feature_slides_body' => array(
            'und' => array(
              0 => array(
                'value' => 'Ut consuetudium assum claram hendrerit veniam. Legentis dignissim Investigationes at autem eodem....',
                'format' => NULL,
                'safe_value' => 'Ut consuetudium assum claram hendrerit veniam. Legentis dignissim Investigationes at autem eodem....',
              ),
            ),
          ),
          'field_feature_slides_image' => array(
            'und' => array(
              0 => array(
                'filename' => 'Capital_Building_8_0.jpeg',
                'uri' => 'public://Capital_Building_8_0_11.jpeg',
                'status' => '1',
                'rdf_mapping' => array(),
                'alt' => NULL,
                'title' => NULL,
              ),
            ),
          ),
          'field_feature_slides_title' => array(
            'und' => array(
              0 => array(
                'value' => 'Congress Moves on Bipartisan Effort to Simplify US Tax Code',
                'format' => NULL,
                'safe_value' => 'Congress Moves on Bipartisan Effort to Simplify US Tax Code',
              ),
            ),
          ),
          'field_feature_slides_url' => array(
            'und' => array(
              0 => array(
                'url' => 'http://d2/press-release/congress-moves-bipartisan-effort-simplify-us-tax-code',
                'title' => NULL,
                'attributes' => array(),
              ),
            ),
          ),
        ),
        1 => array(
          'field_feature_slides_body' => array(
            'und' => array(
              0 => array(
                'value' => 'Vel doming vel tempor te qui. Liber consequat qui volutpat aliquam doming. Tincidunt nihil eodem..',
                'format' => NULL,
                'safe_value' => 'Vel doming vel tempor te qui. Liber consequat qui volutpat aliquam doming. Tincidunt nihil eodem..',
              ),
            ),
          ),
          'field_feature_slides_image' => array(
            'und' => array(
              0 => array(
                'filename' => 'education_13_0_0.jpg',
                'uri' => 'public://education_13_0_0_11.jpg',
                'status' => '1',
                'rdf_mapping' => array(),
                'alt' => NULL,
                'title' => NULL,
              ),
            ),
          ),
          'field_feature_slides_title' => array(
            'und' => array(
              0 => array(
                'value' => 'Education Tops Presidential Agenda in 2011',
                'format' => NULL,
                'safe_value' => 'Education Tops Presidential Agenda in 2011',
              ),
            ),
          ),
          'field_feature_slides_url' => array(
            'und' => array(
              0 => array(
                'url' => 'http://d2/service/education',
                'title' => NULL,
                'attributes' => array(),
              ),
            ),
          ),
        ),
        2 => array(
          'field_feature_slides_body' => array(
            'und' => array(
              0 => array(
                'value' => 'Open Source Tools Create Opportunities for Government',
                'format' => NULL,
                'safe_value' => 'Open Source Tools Create Opportunities for Government',
              ),
            ),
          ),
          'field_feature_slides_image' => array(
            'und' => array(
              0 => array(
                'filename' => 'captialbldg_flags_18_0_0.jpg',
                'uri' => 'public://captialbldg_flags_18_0_0_11.jpg',
                'status' => '1',
                'rdf_mapping' => array(),
                'alt' => NULL,
                'title' => NULL,
              ),
            ),
          ),
          'field_feature_slides_title' => array(
            'und' => array(
              0 => array(
                'value' => 'Open Source Tools Create Opportunities for Government',
                'format' => NULL,
                'safe_value' => 'Open Source Tools Create Opportunities for Government',
              ),
            ),
          ),
          'field_feature_slides_url' => array(
            'und' => array(
              0 => array(
                'url' => 'http://d2/press-release/whitehouse-issues-open-government-directive',
                'title' => NULL,
                'attributes' => array(),
              ),
            ),
          ),
        ),
      ),
    ),
  );
  $export['box-dc4059cc'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-e826276f';
  $box->plugin_key = 'carousel';
  $box->title = '';
  $box->description = 'Default home page carousel';
  $box->options = array(
    'entity_boxes_id' => '',
    'additional_classes' => '',
  );
  $box->entity_boxes = array(
    'field_carousel_slides' => array(
      'und' => array(
        0 => array(
          'field_carousel_slides_node' => array(
            'und' => array(
              0 => array(
                'machine_name' => 'services_disaster_response_assistance',
              ),
            ),
          ),
        ),
        1 => array(
          'field_carousel_slides_node' => array(
            'und' => array(
              0 => array(
                'machine_name' => 'services_going_green_tax_credits',
              ),
            ),
          ),
        ),
        2 => array(
          'field_carousel_slides_node' => array(
            'und' => array(
              0 => array(
                'machine_name' => 'services_grant_opportunities',
              ),
            ),
          ),
        ),
        3 => array(
          'field_carousel_slides_node' => array(
            'und' => array(
              0 => array(
                'machine_name' => 'services_learning_programs',
              ),
            ),
          ),
        ),
        4 => array(
          'field_carousel_slides_node' => array(
            'und' => array(
              0 => array(
                'machine_name' => 'services_research_assistance',
              ),
            ),
          ),
        ),
      ),
    ),
  );
  $export['box-e826276f'] = $box;

  return $export;
}
