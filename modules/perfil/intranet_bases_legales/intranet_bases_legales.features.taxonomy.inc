<?php
/**
 * @file
 * intranet_bases_legales.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function intranet_bases_legales_taxonomy_default_vocabularies() {
  return array(
    'tipo_de_documento' => array(
      'name' => 'Tipo de documento',
      'machine_name' => 'tipo_de_documento',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
