<?php
/**
 * @file
 * intranet_avisos.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function intranet_avisos_user_default_permissions() {
  $permissions = array();

  // Exported permission: create aviso content.
  $permissions['create aviso content'] = array(
    'name' => 'create aviso content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any aviso content.
  $permissions['delete any aviso content'] = array(
    'name' => 'delete any aviso content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own aviso content.
  $permissions['delete own aviso content'] = array(
    'name' => 'delete own aviso content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any aviso content.
  $permissions['edit any aviso content'] = array(
    'name' => 'edit any aviso content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own aviso content.
  $permissions['edit own aviso content'] = array(
    'name' => 'edit own aviso content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
