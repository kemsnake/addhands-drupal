<?php
/**
 * @file
 * feature_site_configuration.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_site_configuration_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
