<?php
/**
 * @file
 * intranet_bases_legales.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function intranet_bases_legales_user_default_permissions() {
  $permissions = array();

  // Exported permission: create base_legal content.
  $permissions['create base_legal content'] = array(
    'name' => 'create base_legal content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any base_legal content.
  $permissions['delete any base_legal content'] = array(
    'name' => 'delete any base_legal content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own base_legal content.
  $permissions['delete own base_legal content'] = array(
    'name' => 'delete own base_legal content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any base_legal content.
  $permissions['edit any base_legal content'] = array(
    'name' => 'edit any base_legal content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own base_legal content.
  $permissions['edit own base_legal content'] = array(
    'name' => 'edit own base_legal content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
