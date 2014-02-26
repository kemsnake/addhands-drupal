<?php

/**
 * Preprocess function for theme_geofield_ymap().
 */
function template_preprocess_geofield_ymap(&$variables) {
  $element = $variables['element'];

  if (!empty($element['#id'])) {
    $variables['#attributes']['id'] = $element['#id'] . '-map';
  }
  if (!empty($element['#map_objects'])) {
    if (is_array($element['#map_objects'])) {
      $element['#map_objects'] = _geofield_ymap_json_encode($element['#map_objects']);
    }
    else {
      $element['#map_objects'] = trim($element['#map_objects']);
    }
  }
  $variables['#attributes']['class'][] = 'geofield-ymap';

  $map_settings = array(
    'map_type',
    'map_center',
    'map_zoom',
    'map_auto_centering',
    'map_auto_zooming',
    'map_controls',
    'map_editable',
    'map_multiple',
    'map_clusterize',
    'map_object_types',
    'map_object_preset',
    'map_input_id',
    'map_objects',
  );
  foreach ($map_settings as $key) {
    if (isset($element['#' . $key])) {
      $attribute_name = 'data-' . str_replace('_', '-', $key);
      if (is_array($element['#' . $key])) {
        $element['#' . $key] = implode(',', $element['#' . $key]);
      }
      $variables['#attributes'][$attribute_name] = $element['#' . $key];
    }
  }

  drupal_add_library('geofield_ymap', 'geofield_ymap');
}

/**
 * Return map markup.
 */
function theme_geofield_ymap($variables) {
  return '<div' . drupal_attributes($variables['#attributes']) . '></div>' . drupal_render_children($variables['element']);
}
