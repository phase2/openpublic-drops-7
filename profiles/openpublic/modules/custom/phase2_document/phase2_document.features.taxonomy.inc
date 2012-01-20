<?php
/**
 * @file
 * phase2_document.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function phase2_document_taxonomy_default_vocabularies() {
  return array(
    'document_terms' => array(
      'name' => 'Document Terms',
      'machine_name' => 'document_terms',
      'description' => 'Related terms, metadata, and tags for documents',
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
