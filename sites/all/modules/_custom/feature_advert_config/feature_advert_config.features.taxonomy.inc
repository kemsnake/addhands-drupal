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
      'name' => 'Детали объявления(продажа дома)',
      'machine_name' => 'advert_details',
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
    'comfort_vocabulary' => array(
      'name' => 'Удобства',
      'machine_name' => 'comfort_vocabulary',
      'description' => 'Список удобств для описания дома для аренды',
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
    'zone_details' => array(
      'name' => 'Детали объявления(продажа участка)',
      'machine_name' => 'zone_details',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'zone_documents' => array(
      'name' => 'Документы',
      'machine_name' => 'zone_documents',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'zone_types' => array(
      'name' => 'Типы участков',
      'machine_name' => 'zone_types',
      'description' => 'Типы земельных участков',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
