<?php
/**
 * @file
 * intranet_bases_legales.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function intranet_bases_legales_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-base_legal-field_documento_adjunto'
  $field_instances['node-base_legal-field_documento_adjunto'] = array(
    'bundle' => 'base_legal',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_documento_adjunto',
    'label' => 'Adjuntar documento',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf doc odt',
      'max_filesize' => '10 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-base_legal-field_tipo_de_documento'
  $field_instances['node-base_legal-field_tipo_de_documento'] = array(
    'bundle' => 'base_legal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tipo_de_documento',
    'label' => 'Tipo de documento',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Adjuntar documento');
  t('Tipo de documento');

  return $field_instances;
}
