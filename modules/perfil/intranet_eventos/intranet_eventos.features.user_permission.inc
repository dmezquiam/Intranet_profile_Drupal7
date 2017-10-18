<?php
/**
 * @file
 * intranet_eventos.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function intranet_eventos_user_default_permissions() {
  $permissions = array();

  // Exported permission: create evento content.
  $permissions['create evento content'] = array(
    'name' => 'create evento content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any evento content.
  $permissions['delete any evento content'] = array(
    'name' => 'delete any evento content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own evento content.
  $permissions['delete own evento content'] = array(
    'name' => 'delete own evento content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any evento content.
  $permissions['edit any evento content'] = array(
    'name' => 'edit any evento content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own evento content.
  $permissions['edit own evento content'] = array(
    'name' => 'edit own evento content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
