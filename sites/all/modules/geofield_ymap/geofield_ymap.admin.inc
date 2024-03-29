<?php

/**
 * Settings form.
 */
function geofield_ymap_settings_form($form, &$form_state) {
  $form['geofield_ymap_presets_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Path to presets'),
    '#description' => t('Path to Yandex Map presets. Example: !example', array(
      '!example' => '<code>' . drupal_get_path('module', 'geofield_ymap') . '/js/geofield_ymap_presets.example.js' . '</code>',
    )),
    '#default_value' => variable_get('geofield_ymap_presets_path', ''),
  );

  $form['geofield_ymap_preset'] = array(
    '#type' => 'textfield',
    '#title' => t('Global preset'),
    '#description' => t('Global <a href="!url" target="_blank">preset name</a>. Example: <code>islands#blueDotIcon</code>', array(
      '!url' => 'http://api.yandex.ru/maps/doc/jsapi/beta/ref/reference/option.presetStorage.xml',
    )),
    '#default_value' => variable_get('geofield_ymap_preset', ''),
  );

  $form['geofield_ymap_use_loader'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use loader'),
    '#description' => t('Enable if you want to use Yandex Map filter or show map by html code.'),
    '#default_value' => variable_get('geofield_ymap_use_loader', FALSE),
  );

  return system_settings_form($form);
}
