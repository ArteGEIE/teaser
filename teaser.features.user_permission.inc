<?php
/**
 * @file
 * teaser.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function teaser_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer linkit'.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'linkit',
  );

  return $permissions;
}
