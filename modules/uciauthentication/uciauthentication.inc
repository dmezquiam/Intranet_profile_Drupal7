<?php

/**
 * @file
 * Install, update, and uninstall functions for the XXX module.
 */

function _get_dominios() {
  try {
    $service = wsclient_service_load('uciauthentication_autenticacion');
    $result = $service->obtenerNodos();
    $dominios = array();
    foreach ($result as $node) {
      $dominios[$node->NodeDomain] = $node->NodeName;
    }
    return $dominios;
  }
  catch (exception $e) {
    drupal_set_message(t('Error en servicio de autenticación.'), 'error');
    return array('error' => 'Error');
  }
  return array('error' => 'Error');
}

function _autenticar_usuario_servicio($usuario, $password, $dominio) {
  try {
    $service = wsclient_service_load('uciauthentication_autenticacion');
    $result = $service->autenticarUsuario($usuario, $password, $dominio);
    return $result;
  }
  catch (exception $e) {
    drupal_set_message(t('Error en servicio de autenticación.'), 'error');
    return FALSE;
  }
  return FALSE;
}

function uciauthentication_fix_username($name) {
  $lower_case_name = strtolower($name);
  $parts_of_name = explode(' ', $lower_case_name);
  $final_name_parts = '';
  foreach ($parts_of_name as $part)
    $final_name_parts[] = ucfirst($part);
  return implode(' ', $final_name_parts);
}
