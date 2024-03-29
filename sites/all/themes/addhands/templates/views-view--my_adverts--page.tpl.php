<?php

/**
 * @file
 * My adverts view page
 */

$results = $variables['view']->result;
//dsm($results);
if (!$variables['rows']){
  print $variables['empty'];
}
print '<div class="view my-advert-view">';
foreach ($results as $result) {
  $node = $result->_field_data['nid']['entity'];
  print '<div class="advert-row">';
    print '<div class="view-column col-1">';
      print '<div class="advert-photo">';
        print drupal_render($result->field_field_photo[0]['rendered']) . '&nbsp;';
      print '</div>';
    //close col-1
    print '</div>';

    print '<div class="view-column col-2">';
      print '<div class="advert-title">';
        $type_names = node_type_get_names();
        $title_link = l($result->node_title, 'node/' . $node->nid);
        $destination = 'user/' . arg(1) . '/adverts';
        $icon_path = drupal_get_path('theme', 'addhands') . '/images/pencil.ico';
        $edit_link = l(theme_image(array('path' => $icon_path, 'attributes' => array('title' => 'Редактировать объявление'))),
          'node/' . $result->nid . '/edit', array('query' => array('destination' => $destination), 'html' => TRUE));
        print '<h2>' . $title_link . ' ' . $edit_link . ' (' . $type_names[$result->node_type] . ')</h2>';
      print '</div>';

      print '<div class="advert-body">';
        $alter = $variables['view']->field['body']->options['alter'];
        print views_trim_text($alter, $result->field_body[0]['rendered']['#markup']);
      print '</div>';

    //close col-2
    print '</div>';

    print '<div class="view-column col-3">';
      print '<div class="advert-price">';
        print drupal_render($result->field_field_price [0]['rendered']);
      print '</div>';


      if ($node->status){
        $publish_link_text = t('Снять с публикации');
        $publish_link_action = 'unpublish';
        $publish_slider_status = 'publish-slider-published';
        $publish_slider_text = t('Опубликовано');
      }
      else{
        $publish_link_text = t('Опубликовать');
        $publish_link_action = 'publish';
        $publish_slider_status = 'publish-slider-unpublished';
        $publish_slider_text = t('Не опубликовано');
      }
      drupal_add_js(array('publish_slider_' . $node->nid => $node->status), 'setting');
      drupal_add_library('system', 'ui.slider');
      print '<div id="' .$node->nid . '" class="publish-link-block ' . $publish_slider_status . '"><div class="publish-slider-text">' . $publish_slider_text . '</div></div>'
        . l($publish_link_text, 'node/' . $node->nid . '/' . $publish_link_action, array('attributes'=> array('class' => 'publish-slider-link-nojs')));
    //close col-3
    print '</div>';

  //close advert-row
  print '</div>';
}
//close view
print '</div>';


?>



