<?php
/**
 * @file
 * feature_user_management.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_user_management_taxonomy_default_vocabularies() {
  return array(
    'cities' => array(
      'name' => 'Города',
      'machine_name' => 'cities',
      'description' => 'Города и регионы России (для регистрации пользователей)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
