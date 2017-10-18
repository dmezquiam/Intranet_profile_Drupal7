<?php
/**
 * @file
 * intranet_avisos.features.inc
 */

/**
 * Implements hook_views_api().
 */
function intranet_avisos_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function intranet_avisos_node_info() {
  $items = array(
    'aviso' => array(
      'name' => t('Aviso'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
  );
  return $items;
}
