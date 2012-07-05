<?php
/**
 * @file
 * event.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function event_user_default_roles() {
  $roles = array();

  // Exported role: event manager.
  $roles['event manager'] = array(
    'name' => 'event manager',
    'weight' => '3',
  );

  return $roles;
}
