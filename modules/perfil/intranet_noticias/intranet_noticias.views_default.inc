<?php
/**
 * @file
 * intranet_noticias.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function intranet_noticias_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'noticias';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Noticias';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Noticias';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
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
    'noticia' => 'noticia',
  );

  /* Display: Pagina_noticias */
  $handler = $view->new_display('page', 'Pagina_noticias', 'page_noticias');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ultimas noticias';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
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
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Comentarios';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = 1;
  $handler->display->display_options['fields']['comment_count']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = 0;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_noticia_imagen']['id'] = 'field_noticia_imagen';
  $handler->display->display_options['fields']['field_noticia_imagen']['table'] = 'field_data_field_noticia_imagen';
  $handler->display->display_options['fields']['field_noticia_imagen']['field'] = 'field_noticia_imagen';
  $handler->display->display_options['fields']['field_noticia_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_noticia_imagen']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_noticia_imagen']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_noticia_imagen']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_noticia_imagen']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_noticia_imagen']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_noticia_imagen']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_noticia_imagen']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_noticia_imagen']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_noticia_imagen']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_noticia_imagen']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_noticia_imagen']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_noticia_imagen']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_noticia_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_noticia_imagen']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_noticia_imagen']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_noticia_imagen']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_noticia_imagen']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_noticia_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_noticia_imagen']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_noticia_imagen']['field_api_classes'] = 0;
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
  /* Field: Content: Calificacion */
  $handler->display->display_options['fields']['field_calificacion']['id'] = 'field_calificacion';
  $handler->display->display_options['fields']['field_calificacion']['table'] = 'field_data_field_calificacion';
  $handler->display->display_options['fields']['field_calificacion']['field'] = 'field_calificacion';
  $handler->display->display_options['fields']['field_calificacion']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_calificacion']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_calificacion']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_calificacion']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_calificacion']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_calificacion']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_calificacion']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_calificacion']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_calificacion']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_calificacion']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_calificacion']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_calificacion']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_calificacion']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_calificacion']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_calificacion']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_calificacion']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_calificacion']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_calificacion']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_calificacion']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'profiles/intranet/modules/fivestar/widgets/oxygen/oxygen.css',
    ),
    'expose' => 1,
    'style' => 'user',
    'text' => 'user',
  );
  $handler->display->display_options['fields']['field_calificacion']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'noticias';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Noticias';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['noticias'] = $view;

  return $export;
}
