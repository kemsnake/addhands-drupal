<?php
/**
 * @file
 * feature_advert_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_advert_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create advert content'.
  $permissions['create advert content'] = array(
    'name' => 'create advert content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any advert content'.
  $permissions['delete any advert content'] = array(
    'name' => 'delete any advert content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own advert content'.
  $permissions['delete own advert content'] = array(
    'name' => 'delete own advert content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in advert_types'.
  $permissions['delete terms in advert_types'] = array(
    'name' => 'delete terms in advert_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in build_types'.
  $permissions['delete terms in build_types'] = array(
    'name' => 'delete terms in build_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in number_of_storeys'.
  $permissions['delete terms in number_of_storeys'] = array(
    'name' => 'delete terms in number_of_storeys',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in wall_types'.
  $permissions['delete terms in wall_types'] = array(
    'name' => 'delete terms in wall_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any advert content'.
  $permissions['edit any advert content'] = array(
    'name' => 'edit any advert content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own advert content'.
  $permissions['edit own advert content'] = array(
    'name' => 'edit own advert content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in advert_types'.
  $permissions['edit terms in advert_types'] = array(
    'name' => 'edit terms in advert_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in build_types'.
  $permissions['edit terms in build_types'] = array(
    'name' => 'edit terms in build_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in number_of_storeys'.
  $permissions['edit terms in number_of_storeys'] = array(
    'name' => 'edit terms in number_of_storeys',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in wall_types'.
  $permissions['edit terms in wall_types'] = array(
    'name' => 'edit terms in wall_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
