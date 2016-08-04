<?php
/**
 * @file
 * teaser.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function teaser_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_switch_view_mode';
  $strongarm->value = 1;
  $export['ds_extras_switch_view_mode'] = $strongarm;

  return $export;
}
