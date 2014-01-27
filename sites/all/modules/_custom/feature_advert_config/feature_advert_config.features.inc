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
    'advert' => array(
      'name' => t('Объявление'),
      'base' => 'node_content',
      'description' => t('Объявление о продаже/аренде домов и участков.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
