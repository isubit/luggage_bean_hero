<?php
/**
 * @file
 * luggage_bean_hero.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_bean_hero_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit any hero bean'.
  $permissions['edit any hero bean'] = array(
    'name' => 'edit any hero bean',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any hero bean'.
  $permissions['view any hero bean'] = array(
    'name' => 'view any hero bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
