<?php

/**
 * Settings form.
 */
function geofield_ymap_settings_form($form, &$form_state) {
  $form['geofield_ymap_use_loader'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use loader'),
    '#description' => t('Enable if you want to use Yandex Map filter or show map by html code.'),
    '#default_value' => variable_get('geofield_ymap_use_loader', FALSE),
  );

  return system_settings_form($form);
}
