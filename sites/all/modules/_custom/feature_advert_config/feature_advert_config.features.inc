<?php
/**
 * @file
 * feature_advert_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_advert_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_advert_config_node_info() {
  $items = array(
    'advert_zone_sell' => array(
      'name' => t('Объявление о продаже земельного участка'),
      'base' => 'node_content',
      'description' => t('Объявление о продаже земельных участков'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'advert_house_rent' => array(
      'name' => t('Объявление об аренде дома'),
      'base' => 'node_content',
      'description' => t('Объявление об аренде домов'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'advert_house_sell' => array(
      'name' => t('Объявление о продаже дома'),
      'base' => 'node_content',
      'description' => t('Объявление о продаже домов.'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
  );
  return $items;
}
