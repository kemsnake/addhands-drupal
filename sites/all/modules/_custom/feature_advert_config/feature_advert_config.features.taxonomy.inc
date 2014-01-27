<?php
/**
 * @file
 * feature_advert_config.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_advert_config_taxonomy_default_vocabularies() {
  return array(
    'advert_details' => array(
      'name' => 'Детали объявления',
      'machine_name' => 'advert_details',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'advert_types' => array(
      'name' => 'Типы объявлений',
      'machine_name' => 'advert_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'build_types' => array(
      'name' => 'Типы сооружений',
      'machine_name' => 'build_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'facing_types' => array(
      'name' => 'Виды отделки',
      'machine_name' => 'facing_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'number_of_storeys' => array(
      'name' => 'Этажность',
      'machine_name' => 'number_of_storeys',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'ready_states' => array(
      'name' => 'Готовность',
      'machine_name' => 'ready_states',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'wall_types' => array(
      'name' => 'Типы стен',
      'machine_name' => 'wall_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
