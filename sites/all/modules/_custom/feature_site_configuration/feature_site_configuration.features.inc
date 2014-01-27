<?php
/**
 * @file
 * feature_site_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_site_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_popupformat_defaults().
 */
function feature_site_configuration_popupformat_defaults() {
  return array(
    'Default click' => array(
      'label' => 'Default click',
      'origin' => 'bottom-left',
      'expand' => 'bottom-right',
      'effect' => 'default',
      'opacity' => '1.0',
      'width' => 150,
      'activate' => 'click',
      'close' => 1,
    ),
    'Default hover' => array(
      'label' => 'Default hover',
      'origin' => 'bottom-left',
      'expand' => 'bottom-right',
      'effect' => 'default',
      'opacity' => '1.0',
      'width' => 150,
      'activate' => 'hover',
    ),
    'Default node' => array(
      'label' => 'Default node',
      'origin' => 'bottom-left',
      'expand' => 'bottom-right',
      'effect' => 'default',
      'opacity' => '1.0',
      'width' => 150,
      'activate' => 'hover',
      'teaser' => 1,
      'links' => 1,
    ),
    'Flat popup menu' => array(
      'label' => 'Flat popup menu',
      'origin' => 'top-right',
      'expand' => 'bottom-right',
      'effect' => 'default',
      'opacity' => '1.0',
      'width' => 200,
      'activate' => 'hover',
      'flat' => 1,
    ),
    'Left block' => array(
      'label' => 'Left block',
      'origin' => 'top-right',
      'expand' => 'bottom-right',
      'effect' => 'default',
      'opacity' => '1.0',
      'width' => 150,
      'activate' => 'hover',
    ),
    'Popup menu' => array(
      'label' => 'Popup menu',
      'origin' => 'top-right',
      'expand' => 'bottom-right',
      'effect' => 'default',
      'opacity' => '1.0',
      'submenu-origin' => 'top-right',
      'submenu-expand' => 'bottom-right',
      'width' => 200,
      'activate' => 'hover',
    ),
    'Right block' => array(
      'label' => 'Right block',
      'origin' => 'top-left',
      'expand' => 'bottom-left',
      'effect' => 'default',
      'opacity' => '1.0',
      'width' => 150,
      'activate' => 'hover',
    ),
  );
}
