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
      'name' => 'Сities',
      'machine_name' => 'cities',
      'description' => 'Города и регионы россии',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
