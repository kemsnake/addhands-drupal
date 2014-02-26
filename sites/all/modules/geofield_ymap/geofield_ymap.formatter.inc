<?php

/**
 * Implements hook_field_formatter_info().
 */
function geofield_ymap_field_formatter_info() {
  return array(
    'geofield_ymap' => array(
      'label' => t('Yandex Map'),
      'field types' => array('geofield'),
      'settings' => array(
        'map_type' => 'yandex#map',
        'map_center' => '0,0',
        'map_zoom' => 1,
        'map_auto_centering' => FALSE,
        'map_auto_zooming' => FALSE,
        'map_clusterize' => FALSE,
      ),
    ),
  );
}

/**
 * Implements hook_field_formatter_settings_form().
 */
function geofield_ymap_field_formatter_settings_form($field, $instance, $view_mode, $form, &$form_state) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];

  $element['map_type'] = array(
    '#type' => 'select',
    '#title' => t('Map type'),
    '#options' => _geofield_ymap_get_map_types(),
    '#default_value' => $settings['map_type'],
  );

  $element['map_center'] = array(
    '#type' => 'textfield',
    '#title' => t('Map center'),
    '#description' => t('Map center coordinates: Latitude,Longtitude'),
    '#default_value' => $settings['map_center'],
    '#size' => 30,
  );

  $element['map_zoom'] = array(
    '#type' => 'textfield',
    '#title' => t('Map zoom'),
    '#description' => t('From 1 to 16'),
    '#default_value' => $settings['map_zoom'],
    '#size' => 5,
  );

  $element['map_auto_centering'] = array(
    '#type' => 'checkbox',
    '#title' => t('Map auto centering'),
    '#default_value' => $settings['map_auto_centering'],
  );

  $element['map_auto_zooming'] = array(
    '#type' => 'checkbox',
    '#title' => t('Map auto zooming'),
    '#default_value' => $settings['map_auto_zooming'],
  );

  $element['map_clusterize'] = array(
    '#type' => 'checkbox',
    '#title' => t('Clusterize placemarks'),
    '#default_value' => $settings['map_clusterize'],
  );

  return $element;
}

/**
 * Implements hook_field_formatter_settings_summary().
 */
function geofield_ymap_field_formatter_settings_summary($field, $instance, $view_mode) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];
  $map_types = _geofield_ymap_get_map_types();

  $summary = array(
    t('Map type: @map_type', array('@map_type' => $map_types[$settings['map_type']])),
    t('Map center: @map_center', array('@map_center' => $settings['map_center'])),
    t('Map zoom: @map_zoom', array('@map_zoom' => $settings['map_zoom'])),
    t('Map auto centering: @map_auto_centering', array('@map_auto_centering' => $settings['map_auto_centering'] ? t('Yes') : t('No'))),
    t('Map auto zooming: @map_auto_zooming', array('@map_auto_zooming' => $settings['map_auto_zooming'] ? t('Yes') : t('No'))),
    t('Clusterize placemarks: @clusterize', array('@clusterize' => $settings['map_clusterize'] ? t('Yes') : t('No'))),
  );

  return implode('<br />', $summary);
}

/**
 * Implements hook_field_formatter_view().
 */
function geofield_ymap_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $settings = $display['settings'];
  $element = array();

  if ($items) {
    $element[] = array(
      '#theme' => 'geofield_ymap',
      '#map_type' => $settings['map_type'],
      '#map_center' => $settings['map_center'],
      '#map_zoom' => $settings['map_zoom'],
      '#map_auto_centering' => $settings['map_auto_centering'],
      '#map_auto_zooming' => $settings['map_auto_zooming'],
      '#map_clusterize' => $settings['map_clusterize'],
      '#map_objects' => geofield_ymap_items_to_geojson($items),
    );
  }

  return $element;
}
