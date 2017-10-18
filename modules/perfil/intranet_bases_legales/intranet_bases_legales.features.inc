<?php
/**
 * @file
 * intranet_bases_legales.features.inc
 */

/**
 * Implements hook_views_api().
 */
function intranet_bases_legales_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function intranet_bases_legales_node_info() {
  $items = array(
    'base_legal' => array(
      'name' => t('Base Legal'),
      'base' => 'node_content',
      'description' => t('Una base legal es un documento oficial de caracter legislativo.'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
  );
  return $items;
}
