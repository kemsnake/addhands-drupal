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

  // Exported permission: 'create advert_house_sell content'.
  $permissions['create advert_house_sell content'] = array(
    'name' => 'create advert_house_sell content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any advert_house_sell content'.
  $permissions['delete any advert_house_sell content'] = array(
    'name' => 'delete any advert_house_sell content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own advert_house_sell content'.
  $permissions['delete own advert_house_sell content'] = array(
    'name' => 'delete own advert_house_sell content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
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

  // Exported permission: 'edit any advert_house_sell content'.
  $permissions['edit any advert_house_sell content'] = array(
    'name' => 'edit any advert_house_sell content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own advert_house_sell content'.
  $permissions['edit own advert_house_sell content'] = array(
    'name' => 'edit own advert_house_sell content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
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
