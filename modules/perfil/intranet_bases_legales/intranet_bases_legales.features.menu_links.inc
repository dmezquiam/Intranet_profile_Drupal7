<?php
/**
 * @file
 * intranet_bases_legales.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function intranet_bases_legales_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:bases-legales
  $menu_links['main-menu:bases-legales'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'bases-legales',
    'router_path' => 'bases-legales',
    'link_title' => 'Bases legales',
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
    'weight' => 3,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bases legales');


  return $menu_links;
}
