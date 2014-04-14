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
        'weight' => -29,
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
    'pages' => 'node/*/edit',
    'roles' => array(),
    'themes' => array(
      'addhands' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'addhands',
        'weight' => -30,
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

  $export['custom_addhands-advert_updated'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'advert_updated',
    'module' => 'custom_addhands',
    'node_types' => array(
      0 => 'advert_house_rent',
      1 => 'advert_house_sell',
      2 => 'advert_zone_sell',
    ),
    'pages' => 'node/*/edit',
    'roles' => array(),
    'themes' => array(
      'addhands' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'addhands',
        'weight' => -31,
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

  $export['custom_addhands-footer_logo'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'footer_logo',
    'module' => 'custom_addhands',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'addhands' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'addhands',
        'weight' => -12,
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
    'pages' => 'node/add/*
node/*/edit',
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

  $export['custom_addhands-top_banner'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'top_banner',
    'module' => 'custom_addhands',
    'node_types' => array(
      0 => 'page',
      1 => 'webform',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'addhands' => array(
        'region' => 'branding',
        'status' => 1,
        'theme' => 'addhands',
        'weight' => -13,
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

  $export['custom_addhands-user_header_dropdown_menu'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'user_header_dropdown_menu',
    'module' => 'custom_addhands',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'addhands' => array(
        'region' => 'header',
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

  $export['custom_addhands-user_header_menu'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'user_header_menu',
    'module' => 'custom_addhands',
    'node_types' => array(),
    'pages' => 'user/*/adverts
user/*/create_advert
user/*/edit',
    'roles' => array(),
    'themes' => array(
      'addhands' => array(
        'region' => 'menu',
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
    'visibility' => 1,
  );

  $export['views--exp-advert_search-page_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-advert_search-page_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'advert-search',
    'roles' => array(),
    'themes' => array(
      'addhands' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'addhands',
        'weight' => -25,
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
    'visibility' => 1,
  );

  $export['views-advert_search-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'advert_search-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'advert-search',
    'roles' => array(),
    'themes' => array(
      'addhands' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'addhands',
        'weight' => -24,
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
    'title' => 'Результаты поиска',
    'visibility' => 1,
  );

  $export['views-frontpage_slideshow-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'frontpage_slideshow-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'addhands' => array(
        'region' => 'branding',
        'status' => 1,
        'theme' => 'addhands',
        'weight' => -17,
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
    'visibility' => 1,
  );

  $export['views-nearest_object-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nearest_object-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'advert_house_sell',
    ),
    'pages' => 'node/*/edit',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['views-nearest_object-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nearest_object-block_1',
    'module' => 'views',
    'node_types' => array(
      0 => 'advert_house_rent',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['views-nearest_object-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nearest_object-block_2',
    'module' => 'views',
    'node_types' => array(
      0 => 'advert_zone_sell',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'addhands' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'addhands',
        'weight' => -26,
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
