<?php
/**
 * @file
 * feature_site_configuration.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function feature_site_configuration_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-header-register-menu.
  $menus['menu-header-register-menu'] = array(
    'menu_name' => 'menu-header-register-menu',
    'title' => 'Header register menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Header register menu');


  return $menus;
}
