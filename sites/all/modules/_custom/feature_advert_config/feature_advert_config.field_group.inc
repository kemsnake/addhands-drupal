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
  $field_group->identifier = 'group_advert_description|node|advert_zone_sell|form';
  $field_group->group_name = 'group_advert_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert_zone_sell';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Описание',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
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
  $export['group_advert_description|node|advert_zone_sell|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advert_description|node|advert_house_rent|form';
  $field_group->group_name = 'group_advert_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert_house_rent';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Описание',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
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
  $export['group_advert_description|node|advert_house_rent|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advert_description|node|advert_house_sell|form';
  $field_group->group_name = 'group_advert_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert_house_sell';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Описание',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-advert-house-sell-description field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_advert_description|node|advert_house_sell|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advert_type|node|advert_house_sell|form';
  $field_group->group_name = 'group_advert_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert_house_sell';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Тип объявления',
    'weight' => '0',
    'children' => array(
      1 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-advert-house-sell-house-sell-type field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_advert_type|node|advert_house_sell|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|advert_zone_sell|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert_zone_sell';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Детали',
    'weight' => '2',
    'children' => array(
      0 => 'field_zone_details',
      1 => 'field_about_advert',
      2 => 'field_price',
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
  $export['group_details|node|advert_zone_sell|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|advert_house_rent|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert_house_rent';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Детали',
    'weight' => '2',
    'children' => array(
      0 => 'field_comfort',
      1 => 'field_guests_count',
      2 => 'field_full_house',
      3 => 'field_about_advert',
      4 => 'field_price',
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
  $export['group_details|node|advert_house_rent|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|advert_house_sell|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert_house_sell';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Детали',
    'weight' => '3',
    'children' => array(
      0 => 'field_details',
      1 => 'field_price',
      2 => 'field_about_advert',
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
  $export['group_details|node|advert_house_sell|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_info|node|advert_zone_sell|form';
  $field_group->group_name = 'group_short_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert_zone_sell';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Краткая анкета',
    'weight' => '1',
    'children' => array(
      0 => 'field_zone',
      1 => 'field_zone_type',
      2 => 'field_zone_documents',
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
  $export['group_short_info|node|advert_zone_sell|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_info|node|advert_house_rent|form';
  $field_group->group_name = 'group_short_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert_house_rent';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Краткая анкета',
    'weight' => '1',
    'children' => array(
      0 => 'field_area',
      1 => 'field_build_type',
      2 => 'field_wall_type',
      3 => 'field_zone',
      4 => 'field_number_of_storeys',
      5 => 'field_toilet_count',
      6 => 'field_room_count',
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
  $export['group_short_info|node|advert_house_rent|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_info|node|advert_house_sell|form';
  $field_group->group_name = 'group_short_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advert_house_sell';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Краткая анкета',
    'weight' => '2',
    'children' => array(
      0 => 'field_area',
      1 => 'field_build_type',
      2 => 'field_facing_type',
      3 => 'field_number_of_storeys',
      4 => 'field_ready_state',
      5 => 'field_room_count',
      6 => 'field_toilet_count',
      7 => 'field_wall_type',
      8 => 'field_zone',
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
  $export['group_short_info|node|advert_house_sell|form'] = $field_group;

  return $export;
}
