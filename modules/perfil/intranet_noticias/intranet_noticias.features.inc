<?php
/**
 * @file
 * intranet_noticias.features.inc
 */

/**
 * Implements hook_views_api().
 */
function intranet_noticias_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function intranet_noticias_node_info() {
  $items = array(
    'noticia' => array(
      'name' => t('Noticia'),
      'base' => 'node_content',
      'description' => t('Una noticia es un hecho, un acontecimiento nacional o internacional.'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
  );
  return $items;
}
