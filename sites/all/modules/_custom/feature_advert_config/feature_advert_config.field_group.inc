<?php
/**
 * @file
 * feature_advert_config.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_advert_config_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advert_description|node|advert|form';
  $field_group->group_name = 'group_advert_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Описание',
    'weight' => '1',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-advert-description field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_advert_description|node|advert|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advert_type|node|advert|form';
  $field_group->group_name = 'group_advert_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Тип объявления',
    'weight' => '0',
    'children' => array(
      0 => 'field_advert_type',
      1 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-advert-type field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_advert_type|node|advert|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|advert|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Детали',
    'weight' => '3',
    'children' => array(
      0 => 'field_about_advert',
      1 => 'field_price',
      2 => 'field_details',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_details|node|advert|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_info|node|advert|form';
  $field_group->group_name = 'group_short_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Краткая анкета',
    'weight' => '2',
    'children' => array(
      0 => 'field_area',
      1 => 'field_ready_state',
      2 => 'field_build_type',
      3 => 'field_wall_type',
      4 => 'field_facing_type',
      5 => 'field_number_of_storeys',
      6 => 'field_zone',
      7 => 'field_room_count',
      8 => 'field_toilet_count',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-short-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_short_info|node|advert|form'] = $field_group;

  return $export;
}
