<?php
/**
 * @file
 * teaser.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function teaser_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser_basic';
  $ds_view_mode->label = 'Teaser Basic';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['teaser_basic'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser_featured';
  $ds_view_mode->label = 'Teaser Featured';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['teaser_featured'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser_featured_extra';
  $ds_view_mode->label = 'Teaser Featured Extra';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['teaser_featured_extra'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser_medium';
  $ds_view_mode->label = 'Teaser Medium';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['teaser_medium'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser_small';
  $ds_view_mode->label = 'Teaser Small';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['teaser_small'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser_small_extra';
  $ds_view_mode->label = 'Teaser Small Extra';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['teaser_small_extra'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser_tiny';
  $ds_view_mode->label = 'Teaser Tiny';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['teaser_tiny'] = $ds_view_mode;

  return $export;
}
