<?php
/**
 * @file
 * teaser_facebook.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function teaser_facebook_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|teaser_facebook|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'teaser_facebook';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'arte_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'primary' => array(
        0 => 'field_teaser_facebook_name',
      ),
    ),
    'fields' => array(
      'field_teaser_facebook_name' => 'primary',
    ),
    'classes' => array(),
    'wrappers' => array(
      'primary' => 'div',
      'secondary' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|teaser_facebook|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|teaser_facebook|teaser_medium';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'teaser_facebook';
  $ds_layout->view_mode = 'teaser_medium';
  $ds_layout->layout = 'arte_teaser_medium';
  $ds_layout->settings = array(
    'regions' => array(
      'primary' => array(
        0 => 'field_teaser_facebook_name',
      ),
    ),
    'fields' => array(
      'field_teaser_facebook_name' => 'primary',
    ),
    'classes' => array(),
    'wrappers' => array(
      'primary' => 'div',
      'secondary' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|teaser_facebook|teaser_medium'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|teaser_facebook|teaser_small';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'teaser_facebook';
  $ds_layout->view_mode = 'teaser_small';
  $ds_layout->layout = 'arte_teaser_small';
  $ds_layout->settings = array(
    'regions' => array(
      'primary' => array(
        0 => 'field_teaser_facebook_name',
      ),
    ),
    'fields' => array(
      'field_teaser_facebook_name' => 'primary',
    ),
    'classes' => array(),
    'wrappers' => array(
      'primary' => 'div',
      'secondary' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|teaser_facebook|teaser_small'] = $ds_layout;

  return $export;
}
