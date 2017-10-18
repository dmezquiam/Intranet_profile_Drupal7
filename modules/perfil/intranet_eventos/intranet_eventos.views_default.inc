<?php
/**
 * @file
 * intranet_eventos.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function intranet_eventos_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'eventos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Eventos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Eventos';
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
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_evento_imagen']['id'] = 'field_evento_imagen';
  $handler->display->display_options['fields']['field_evento_imagen']['table'] = 'field_data_field_evento_imagen';
  $handler->display->display_options['fields']['field_evento_imagen']['field'] = 'field_evento_imagen';
  $handler->display->display_options['fields']['field_evento_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_evento_imagen']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_evento_imagen']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_evento_imagen']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_evento_imagen']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_evento_imagen']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_evento_imagen']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_evento_imagen']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_evento_imagen']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_evento_imagen']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_evento_imagen']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_evento_imagen']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_evento_imagen']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_evento_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_evento_imagen']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_evento_imagen']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_evento_imagen']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_evento_imagen']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_evento_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_evento_imagen']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_evento_imagen']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
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
    'evento' => 'evento',
  );

  /* Display: Pagina_eventos */
  $handler = $view->new_display('page', 'Pagina_eventos', 'page_eventos');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Todos los eventos';
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
  /* Field: Content: Fecha */
  $handler->display->display_options['fields']['field_evento_fecha']['id'] = 'field_evento_fecha';
  $handler->display->display_options['fields']['field_evento_fecha']['table'] = 'field_data_field_evento_fecha';
  $handler->display->display_options['fields']['field_evento_fecha']['field'] = 'field_evento_fecha';
  $handler->display->display_options['fields']['field_evento_fecha']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_evento_fecha']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_evento_fecha']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_evento_fecha']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_evento_fecha']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_evento_fecha']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_evento_fecha']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_evento_fecha']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_evento_fecha']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_evento_fecha']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_evento_fecha']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_evento_fecha']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_evento_fecha']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_evento_fecha']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_evento_fecha']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_evento_fecha']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_evento_fecha']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_evento_fecha']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_evento_fecha']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'eventos';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Eventos';
  $handler->display->display_options['menu']['weight'] = '2';

  /* Display: Bloque_eventos */
  $handler = $view->new_display('block', 'Bloque_eventos', 'bloque_eventos');
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
  $handler->display->display_options['block_description'] = 'Eventos';
  $export['eventos'] = $view;

  return $export;
}
