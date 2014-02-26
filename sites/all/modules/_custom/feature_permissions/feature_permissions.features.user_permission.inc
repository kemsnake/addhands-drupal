<?php
/**
 * @file
 * feature_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer Compact Forms'.
  $permissions['administer Compact Forms'] = array(
    'name' => 'administer Compact Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'compact_forms',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer media'.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer popup elements'.
  $permissions['administer popup elements'] = array(
    'name' => 'administer popup elements',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'popup',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create advert_zone_sell content'.
  $permissions['create advert_zone_sell content'] = array(
    'name' => 'create advert_zone_sell content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create advert_house_rent content'.
  $permissions['create advert_house_rent content'] = array(
    'name' => 'create advert_house_rent content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create advert_house_sell content'.
  $permissions['create advert_house_sell content'] = array(
    'name' => 'create advert_house_sell content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create frontpage_slideshow content'.
  $permissions['create frontpage_slideshow content'] = array(
    'name' => 'create frontpage_slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any advert_zone_sell content'.
  $permissions['delete any advert_zone_sell content'] = array(
    'name' => 'delete any advert_zone_sell content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any advert_house_rent content'.
  $permissions['delete any advert_house_rent content'] = array(
    'name' => 'delete any advert_house_rent content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any advert_house_sell content'.
  $permissions['delete any advert_house_sell content'] = array(
    'name' => 'delete any advert_house_sell content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any frontpage_slideshow content'.
  $permissions['delete any frontpage_slideshow content'] = array(
    'name' => 'delete any frontpage_slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own advert_zone_sell content'.
  $permissions['delete own advert_zone_sell content'] = array(
    'name' => 'delete own advert_zone_sell content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own advert_house_rent content'.
  $permissions['delete own advert_house_rent content'] = array(
    'name' => 'delete own advert_house_rent content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own advert_house_sell content'.
  $permissions['delete own advert_house_sell content'] = array(
    'name' => 'delete own advert_house_sell content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own frontpage_slideshow content'.
  $permissions['delete own frontpage_slideshow content'] = array(
    'name' => 'delete own frontpage_slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in advert_details'.
  $permissions['delete terms in advert_details'] = array(
    'name' => 'delete terms in advert_details',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in build_types'.
  $permissions['delete terms in build_types'] = array(
    'name' => 'delete terms in build_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in cities'.
  $permissions['delete terms in cities'] = array(
    'name' => 'delete terms in cities',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in comfort_vocabulary'.
  $permissions['delete terms in comfort_vocabulary'] = array(
    'name' => 'delete terms in comfort_vocabulary',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in facing_types'.
  $permissions['delete terms in facing_types'] = array(
    'name' => 'delete terms in facing_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in number_of_storeys'.
  $permissions['delete terms in number_of_storeys'] = array(
    'name' => 'delete terms in number_of_storeys',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ready_states'.
  $permissions['delete terms in ready_states'] = array(
    'name' => 'delete terms in ready_states',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in wall_types'.
  $permissions['delete terms in wall_types'] = array(
    'name' => 'delete terms in wall_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in zone_details'.
  $permissions['delete terms in zone_details'] = array(
    'name' => 'delete terms in zone_details',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in zone_documents'.
  $permissions['delete terms in zone_documents'] = array(
    'name' => 'delete terms in zone_documents',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in zone_types'.
  $permissions['delete terms in zone_types'] = array(
    'name' => 'delete terms in zone_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any advert_zone_sell content'.
  $permissions['edit any advert_zone_sell content'] = array(
    'name' => 'edit any advert_zone_sell content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any advert_house_rent content'.
  $permissions['edit any advert_house_rent content'] = array(
    'name' => 'edit any advert_house_rent content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any advert_house_sell content'.
  $permissions['edit any advert_house_sell content'] = array(
    'name' => 'edit any advert_house_sell content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any frontpage_slideshow content'.
  $permissions['edit any frontpage_slideshow content'] = array(
    'name' => 'edit any frontpage_slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit media'.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'edit own advert_zone_sell content'.
  $permissions['edit own advert_zone_sell content'] = array(
    'name' => 'edit own advert_zone_sell content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own advert_house_rent content'.
  $permissions['edit own advert_house_rent content'] = array(
    'name' => 'edit own advert_house_rent content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own advert_house_sell content'.
  $permissions['edit own advert_house_sell content'] = array(
    'name' => 'edit own advert_house_sell content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own frontpage_slideshow content'.
  $permissions['edit own frontpage_slideshow content'] = array(
    'name' => 'edit own frontpage_slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in advert_details'.
  $permissions['edit terms in advert_details'] = array(
    'name' => 'edit terms in advert_details',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in build_types'.
  $permissions['edit terms in build_types'] = array(
    'name' => 'edit terms in build_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in cities'.
  $permissions['edit terms in cities'] = array(
    'name' => 'edit terms in cities',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in comfort_vocabulary'.
  $permissions['edit terms in comfort_vocabulary'] = array(
    'name' => 'edit terms in comfort_vocabulary',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in facing_types'.
  $permissions['edit terms in facing_types'] = array(
    'name' => 'edit terms in facing_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in number_of_storeys'.
  $permissions['edit terms in number_of_storeys'] = array(
    'name' => 'edit terms in number_of_storeys',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ready_states'.
  $permissions['edit terms in ready_states'] = array(
    'name' => 'edit terms in ready_states',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in wall_types'.
  $permissions['edit terms in wall_types'] = array(
    'name' => 'edit terms in wall_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in zone_details'.
  $permissions['edit terms in zone_details'] = array(
    'name' => 'edit terms in zone_details',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in zone_documents'.
  $permissions['edit terms in zone_documents'] = array(
    'name' => 'edit terms in zone_documents',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in zone_types'.
  $permissions['edit terms in zone_types'] = array(
    'name' => 'edit terms in zone_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view media'.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
