<?php
/**
 * @file
 * intranet_eventos.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function intranet_eventos_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:eventos
  $menu_links['main-menu:eventos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'eventos',
    'router_path' => 'eventos',
    'link_title' => 'Eventos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Eventos');


  return $menu_links;
}
