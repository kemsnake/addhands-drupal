<?php
/**
 * @file
 * feature_user_management.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_user_management_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_company|user|user|form';
  $field_group->group_name = 'group_company';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Данные организации',
    'weight' => '6',
    'children' => array(
      0 => 'field_company_name',
      1 => 'field_business_profile',
      2 => 'field_company_address',
      3 => 'field_company_site',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-company field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_company|user|user|form'] = $field_group;

  return $export;
}
