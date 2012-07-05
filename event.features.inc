<?php
/**
 * @file
 * event.features.inc
 */

/**
 * Implements hook_views_api().
 */
function event_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Used to create events that allow signup, manage sponsorship requests, etc.'),
      'has_title' => '1',
      'title_label' => t('Event Name'),
      'help' => '',
    ),
  );
  return $items;
}
