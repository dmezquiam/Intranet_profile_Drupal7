<?php

/**
 * Implements hook_install_tasks().
 */
function intranet_install_tasks() {
    
    $tasks = array();
    $tasks['servicios_disponibles_form'] = array(
        // Mostrar una tarea adicional durante la instalacion.
        'display_name' => 'Servicios disponibles',
        'type' => 'form',
        );    
    return $tasks;    
}

/**
 * Implements hook_form().
 */
function servicios_disponibles_form($form, &$form_state){
   drupal_set_title('Servicios disponibles');
   
   // Mostrar todos los servicios disponibles.
   $form['servicios'] = array(
    '#type' => 'checkboxes',
    '#default_value' => array(1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15),
    '#options' => array(
      1  => ('Gestión de eventos'),
      2  => ('Gestión de avisos'),
      3  => ('Gestión de noticias'),      
      5  => ('Cumpleaños'),
      6  => ('Gestión de bases legales y planillas'),
      7  => ('Autenticación'),
      8  => ('Búsqueda de contenidos'),
      9  => ('Imprimir información'),
      10 => ('Votar por información'),
      11 => ('Galería de imágenes'),
      12 => ('Mapa del sitio'),
      13 => ('Mostrar calendario'),
      14 => ('Estadísticas y visitas al sitio'),
      15 => ('Usuarios conectados'),
    ),
    '#title' => 'Los siguientes servicios estarán disponibles para su uso.',
    '#description' => 'Los servicios pueden ser configurados para su uso o desactivados a través del área de administración de módulos',  
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Continuar',
  );  
  return $form;
}

/**
 * Implements hook_form_submit().
 */
function servicios_disponibles_form_submit($form, &$form_state){	
    $activar = array();    
    
    // Si seleccionado, activar servicio de "eventos".
    if ($form_state['values']['servicios'][1]) {
        $activar['evento'] = 'intranet_eventos';                
    }
    // Si seleccionado, activar servicio de "avisos".
    if ($form_state['values']['servicios'][2]) {
        $activar['aviso'] = 'intranet_avisos';
        variable_set('aviso', TRUE);
    }
    // Si seleccionado, activar servicio de "noticias".
    if ($form_state['values']['servicios'][3]) {
        $activar['noticia'] = 'intranet_noticias';
    }
    // Si seleccionado, activar servicio de "cumpleaños".
    if ($form_state['values']['servicios'][5]) {
        $activar['cumple'] = 'cumples';
        variable_set('cumple', TRUE);
    }  
    // Si seleccionado, activar servicio de "bases legales".
    if ($form_state['values']['servicios'][6]) {
        $activar['bases'] = 'intranet_bases_legales';
    }
    // Si seleccionado, activar servicio de "autenticación".
    if ($form_state['values']['servicios'][7]) {
        $activar['autenticar'] = 'uciauthentication';
        variable_set('autenticar', TRUE);
    }
    // Si seleccionado, activar servicio para "busqueda de contenido".
    if ($form_state['values']['servicios'][8]) {
        variable_set('search', TRUE);
    } 
    // Si seleccionado, activar servicio para "imprimir informacion".
    if ($form_state['values']['servicios'][9]) {
        $activar['imprimir'] = 'print';        
    } 
    // Si seleccionado, activar servicio para "votacion de contenido".
    if ($form_state['values']['servicios'][10]) {
        $activar['votar'] = 'fivestar';
    }   
    // Si seleccionado, activar servicio para una "galeria de imagenes".
    if ($form_state['values']['servicios'][11]) {
        $activar['galeria'] = 'galerie';
    }    
    // Si seleccionado, activar servicio de "mapa del sitio".
    if ($form_state['values']['servicios'][12]) {
        $activar['mapa'] = 'site_map';
    }    
    // Si seleccionado, activar servicio de "mostrar calendario".
    if ($form_state['values']['servicios'][13]) {
        $activar['calendar'] = 'intranet_calendario';
        variable_set('calendario_activado', TRUE);
    }    
    // Si seleccionado, activar servicio de "visitas al sitio".
    if ($form_state['values']['servicios'][14]) {
        $activar['visitas'] = 'visitors';
        variable_set('visitas_sitio', TRUE);
    }
    // Si seleccionado, activar servicio de "usuarios conectados".
    if ($form_state['values']['servicios'][15]) {               
        variable_set('usuarios_conectados', TRUE);
    }  
    
    // Activar otros modulos.
  $activar['ckeditor'] = 'ckeditor';
  $activar['colorbox'] = 'colorbox';
  $activar['contenido'] = 'intranet_contenido_ejemplo'; 
  
  // Activar los modulos del array con todas sus dependencias.
  module_enable($activar, TRUE);  
  
  // Crear un link para el mapa del sitio.
  $mapa = array(
    'link_title' => 'Mapa del sitio',
    'link_path' => 'sitemap',
    'menu_name' => 'main-menu',   
    'weight' => 4,
  );       
  menu_link_save($mapa);
  menu_rebuild();
}

/**
* Implements hook_block_info_alter().
* 
* Activar los bloques a mostrar en el portal.
* 
*/
function intranet_block_info_alter(&$blocks, $theme, $code_blocks) {        
    
    // Activa el menu principal.
    $blocks['system']['main-menu']['status'] = TRUE;  
    $blocks['system']['main-menu']['region'] = 'main_menu';  
    //$blocks['system']['main-menu']['theme'] = 'businesstime'; 
      
    // Activa el bloque de usuario.
    $blocks['system']['user-menu']['status'] = TRUE;  
    $blocks['system']['user-menu']['region'] = 'user_menu';
    //$blocks['system']['user-menu']['theme'] = 'businesstime';            
    
    if (variable_get('aviso', FALSE)) {
    // Activa el bloque de avisos.
    $blocks['views']['avisos-bloque_avisos']['status'] = TRUE;
    $blocks['views']['avisos-bloque_avisos']['region'] = 'sidebar_first';
    $blocks['views']['avisos-bloque_avisos']['weight'] = -1;  
    //$blocks['user']['online']['theme'] = 'businesstime';
    }     
    
    if (variable_get('cumple', FALSE)) {
    // Activa el bloque cumpleanos.
    $blocks['cumples']['bloque_cumpleanos']['status'] = TRUE;
    $blocks['cumples']['bloque_cumpleanos']['region'] = 'sidebar_first';
    $blocks['cumples']['bloque_cumpleanos']['weight'] = -1;  
    //$blocks['user']['online']['theme'] = 'businesstime';
    }          
    
    if (variable_get('usuarios_conectados', FALSE)) {
    // Activa el bloque de usuarios en linea.
    $blocks['user']['online']['status'] = TRUE;
    $blocks['user']['online']['region'] = 'sidebar_second';
    //$blocks['user']['online']['theme'] = 'businesstime';
    }    
       
    if (variable_get('visitas_sitio', FALSE)) {
    // Activa el bloque de visitas al sitio.
    $blocks['visitors'][0]['status'] = TRUE;  
    $blocks['visitors'][0]['region'] = 'sidebar_first'; 
    $blocks['visitors'][0]['weight'] = 3;  
    //$blocks['visitors'][0]['theme'] = 'businesstime';  
    } 
        
    if (variable_get('search', FALSE)) {
    // Activa el formulario de busqueda.
    $blocks['search']['form']['status'] = TRUE;  
    $blocks['search']['form']['region'] = 'search_box';
    //$blocks['search']['form']['theme'] = 'businesstime'; 
    }            
    
    if (variable_get('autenticar', FALSE)) {
    // Activa el bloque de autenticacion UCI.
    $blocks['uciauthentication']['uciauthentication_user_info']['status'] = TRUE;  
    $blocks['uciauthentication']['uciauthentication_user_info']['region'] = 'sidebar_second';  
    $blocks['uciauthentication']['uciauthentication_user_info']['weight'] = -2;  
    //$blocks['uciauthentication']['uciauthentication_user_info']['theme'] = 'businesstime';
    }        
    
    if (variable_get('calendario_activado', FALSE)) {
    // Activa el bloque del calendario.
    $blocks['views']['calendario_de_noticias-block_1']['status'] = TRUE;  
    $blocks['views']['calendario_de_noticias-block_1']['region'] = 'sidebar_second';  
    $blocks['views']['calendario_de_noticias-block_1']['weight'] = -1;  
    } 
}

/**
 * Implements hook_form_alter().
 * 
 * Permitir alterar el formulario de configuracion del sitio.
 */
function intranet_form_alter(&$form, &$form_state, $form_id) {    
    if ($form_id == 'install_configure_form') {
        
        // Establecer "Intranet" como nombre del sitio por defecto.
        $form['site_information']['site_name']['#default_value'] = 'Intranet';
        $form['site_information']['site_name']['#disabled'] = TRUE;  
        
        // Establecer correos por defecto.
        $form['site_information']['site_mail']['#default_value'] = 'intranet@uci.cu';
        $form['admin_account']['account']['mail']['#default_value'] = 'intranet@uci.cu';
        
        // Establecer "admin" como nombre de usuario por defecto.
        $form['admin_account']['account']['name']['#default_value'] = 'admin';
        $form['admin_account']['account']['name']['#disabled'] = TRUE;           
        
        // Establecer "Cuba" como el pais por defecto.
        $form['server_settings']['site_default_country']['#value'] = 'CU';
                
        // Ocultar los avisos de actualizaciones.
        $form['update_notifications']['update_status_module']['#value'] = FALSE;               
        $form['update_notifications']['#access'] = FALSE;       
    } 
}
