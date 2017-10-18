<?php
/**
 * @file
 * intranet_bases_legales.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function intranet_bases_legales_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'bases_legales';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bases legales';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bases legales';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Tipo de documento */
  $handler->display->display_options['fields']['field_tipo_de_documento']['id'] = 'field_tipo_de_documento';
  $handler->display->display_options['fields']['field_tipo_de_documento']['table'] = 'field_data_field_tipo_de_documento';
  $handler->display->display_options['fields']['field_tipo_de_documento']['field'] = 'field_tipo_de_documento';
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tipo_de_documento']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tipo_de_documento']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tipo_de_documento']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tipo_de_documento']['field_api_classes'] = 0;
  /* Field: Content: Adjuntar documento */
  $handler->display->display_options['fields']['field_documento_adjunto']['id'] = 'field_documento_adjunto';
  $handler->display->display_options['fields']['field_documento_adjunto']['table'] = 'field_data_field_documento_adjunto';
  $handler->display->display_options['fields']['field_documento_adjunto']['field'] = 'field_documento_adjunto';
  $handler->display->display_options['fields']['field_documento_adjunto']['label'] = '';
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_documento_adjunto']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_documento_adjunto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_documento_adjunto']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_documento_adjunto']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_documento_adjunto']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_documento_adjunto']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_documento_adjunto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documento_adjunto']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_documento_adjunto']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_documento_adjunto']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_documento_adjunto']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_documento_adjunto']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'base_legal' => 'base_legal',
  );

  /* Display: Pagina_bases_legales */
  $handler = $view->new_display('page', 'Pagina_bases_legales', 'page_bases_legales');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Todas las bases legales';
  $handler->display->display_options['path'] = 'bases-legales';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Bases legales';
  $handler->display->display_options['menu']['weight'] = '3';

  /* Display: Bloque_bases_legales */
  $handler = $view->new_display('block', 'Bloque_bases_legales', 'bloque_bases_legales');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Tipo de documento */
  $handler->display->display_options['fields']['field_tipo_de_documento']['id'] = 'field_tipo_de_documento';
  $handler->display->display_options['fields']['field_tipo_de_documento']['table'] = 'field_data_field_tipo_de_documento';
  $handler->display->display_options['fields']['field_tipo_de_documento']['field'] = 'field_tipo_de_documento';
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tipo_de_documento']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tipo_de_documento']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tipo_de_documento']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tipo_de_documento']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tipo_de_documento']['field_api_classes'] = 0;
  $handler->display->display_options['block_description'] = 'Bases legales';
  $export['bases_legales'] = $view;

  return $export;
}
