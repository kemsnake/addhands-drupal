<?php
/**
 * @file
 * feature_advert_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_advert_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_advert_config_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_advert_config_image_default_styles() {
  $styles = array();

  // Exported image style: advert-slider-big-image.
  $styles['advert-slider-big-image'] = array(
    'name' => 'advert-slider-big-image',
    'label' => 'advert-slider-big-image',
    'effects' => array(
      5 => array(
        'label' => 'Смена соотношения сторон',
        'help' => 'Использование различных эффектов в зависимости от того, в портретном',
        'effect callback' => 'canvasactions_aspect_effect',
        'dimensions callback' => 'canvasactions_aspect_dimensions',
        'form callback' => 'canvasactions_aspect_form',
        'summary theme' => 'canvasactions_aspect_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_aspect',
        'data' => array(
          'portrait' => 'advert-slider-big-image-landscape',
          'landscape' => 'advert-slider-big-image-portrait',
          'ratio_adjustment' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: advert-slider-big-image-landscape.
  $styles['advert-slider-big-image-landscape'] = array(
    'name' => 'advert-slider-big-image-landscape',
    'label' => 'advert-slider-big-image-landscape',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 630,
          'height' => 367,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: advert-slider-big-image-portrait.
  $styles['advert-slider-big-image-portrait'] = array(
    'name' => 'advert-slider-big-image-portrait',
    'label' => 'advert-slider-big-image-portrait',
    'effects' => array(
      4 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 467,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: advert-slider-images.
  $styles['advert-slider-images'] = array(
    'name' => 'advert-slider-images',
    'label' => 'advert-slider-images',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 74,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function feature_advert_config_node_info() {
  $items = array(
    'advert_house_rent' => array(
      'name' => t('Объявление об аренде дома'),
      'base' => 'node_content',
      'description' => t('Объявление об аренде домов'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'advert_house_sell' => array(
      'name' => t('Объявление о продаже дома'),
      'base' => 'node_content',
      'description' => t('Объявление о продаже домов.'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
    'advert_zone_sell' => array(
      'name' => t('Объявление о продаже земельного участка'),
      'base' => 'node_content',
      'description' => t('Объявление о продаже земельных участков'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
  );
  return $items;
}
