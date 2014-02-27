<?php
/**
 * @file
 * feature_advert_config.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_advert_config_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['cck_blocks-field_map'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'field_map',
    'module' => 'cck_blocks',
    'node_types' => array(
      0 => 'advert_house_rent',
      1 => 'advert_house_sell',
      2 => 'advert_zone_sell',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'addhands' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'addhands',
        'weight' => -27,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['custom_addhands-advert_price'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'advert_price',
    'module' => 'custom_addhands',
    'node_types' => array(
      0 => 'advert_house_rent',
      1 => 'advert_house_sell',
      2 => 'advert_zone_sell',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'addhands' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'addhands',
        'weight' => -28,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['custom_addhands-request_advert_info'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'request_advert_info',
    'module' => 'custom_addhands',
    'node_types' => array(
      0 => 'advert_house_rent',
      1 => 'advert_house_sell',
      2 => 'advert_zone_sell',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'addhands' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'addhands',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-nearest_object-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nearest_object-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'advert_house_sell',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'addhands' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'addhands',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
