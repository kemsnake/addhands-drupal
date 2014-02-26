<?php
/**
 * @file
 * feature_content_management.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function feature_content_management_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: full_html
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'Strike' => 1,
          'JustifyLeft' => 1,
          'JustifyRight' => 1,
          'JustifyBlock' => 1,
          'BulletedList' => 1,
          'Undo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Image' => 1,
          'Source' => 1,
          'Cut' => 1,
          'Copy' => 1,
          'Paste' => 1,
          'RemoveFormat' => 1,
          'Styles' => 1,
          'Table' => 1,
          'CreateDiv' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 0,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 0,
      'remove_linebreaks' => 0,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
    ),
  );

  return $profiles;
}
