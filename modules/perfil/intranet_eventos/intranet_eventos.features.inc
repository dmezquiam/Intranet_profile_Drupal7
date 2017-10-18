<?php
/**
 * @file
 * intranet_eventos.features.inc
 */

/**
 * Implements hook_views_api().
 */
function intranet_eventos_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function intranet_eventos_node_info() {
  $items = array(
    'evento' => array(
      'name' => t('Evento'),
      'base' => 'node_content',
      'description' => t('Un evento es cualquier acontecimiento, circunstancia o suceso que pudiera ocurrir en un momento determinado.'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
  );
  return $items;
}
