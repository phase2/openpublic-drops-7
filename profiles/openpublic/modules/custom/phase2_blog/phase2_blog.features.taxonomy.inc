<?php
/**
 * @file
 * phase2_blog.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function phase2_blog_taxonomy_default_vocabularies() {
  return array(
    'blog_terms' => array(
      'name' => 'Blog Terms',
      'machine_name' => 'blog_terms',
      'description' => 'Terms used to categorize blog entries.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
