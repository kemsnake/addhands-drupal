<?php
/**
 * @file
 * feature_content_management.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function feature_content_management_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-first.
  $menus['menu-footer-first'] = array(
    'menu_name' => 'menu-footer-first',
    'title' => 'Footer first',
    'description' => '',
  );
  // Exported menu: menu-footer-second.
  $menus['menu-footer-second'] = array(
    'menu_name' => 'menu-footer-second',
    'title' => 'Footer second',
    'description' => '',
  );
  // Exported menu: menu-footer-third.
  $menus['menu-footer-third'] = array(
    'menu_name' => 'menu-footer-third',
    'title' => 'Footer third',
    'description' => '',
  );
  // Exported menu: menu-main-menu.
  $menus['menu-main-menu'] = array(
    'menu_name' => 'menu-main-menu',
    'title' => 'Main menu (sidebar)',
    'description' => 'Меню левой колонки. Главное меню сайта.',
  );
  // Exported menu: menu-top-menu.
  $menus['menu-top-menu'] = array(
    'menu_name' => 'menu-top-menu',
    'title' => 'Top menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer first');
  t('Footer second');
  t('Footer third');
  t('Main menu (sidebar)');
  t('Top menu');
  t('Меню левой колонки. Главное меню сайта.');


  return $menus;
}
