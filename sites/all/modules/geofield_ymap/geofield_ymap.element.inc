<?php

/**
 * Implements hook_element_info().
 */
function geofield_ymap_element_info() {
  return array(
    'geofield_ymap' => array(
      '#input' => TRUE,
      '#process' => array('geofield_ymap_element_process'),
      '#theme' => array('geofield_ymap'),
      '#theme_wrappers' => array('form_element'),
      '#map_editable' => TRUE,
      '#map_object_types' => array('point'),
    ),
  );
}

/**
 * Element process callback.
 */
function geofield_ymap_element_process($element, &$form_state, $form) {
  $element['#map_input_id'] = $element['#id'];

  $element['objects'] = array(
    '#type' => 'hidden',
    '#attributes' => array('id' => $element['#id']),
    '#default_value' => is_array($element['#value']) ? _geofield_ymap_json_encode($element['#value']) : $element['#value'],
  );

  if (isset($element['#parents'])) {
    $element['objects']['#parents'] = $element['#parents'];
  }

  return $element;
}
