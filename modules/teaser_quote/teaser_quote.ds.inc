<?php
/**
 * @file
 * teaser_quote.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function teaser_quote_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|teaser_quote|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'teaser_quote';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|teaser_quote|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|teaser_quote|teaser_medium';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'teaser_quote';
  $ds_fieldsetting->view_mode = 'teaser_medium';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|teaser_quote|teaser_medium'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|teaser_quote|teaser_small';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'teaser_quote';
  $ds_fieldsetting->view_mode = 'teaser_small';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|teaser_quote|teaser_small'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function teaser_quote_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|teaser_quote|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'teaser_quote';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'arte_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'secondary' => array(
        0 => 'title',
        1 => 'field_teaser_quote_author',
        2 => 'field_teaser_subtitle',
      ),
    ),
    'fields' => array(
      'title' => 'secondary',
      'field_teaser_quote_author' => 'secondary',
      'field_teaser_subtitle' => 'secondary',
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
  $export['node|teaser_quote|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|teaser_quote|teaser_featured';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'teaser_quote';
  $ds_layout->view_mode = 'teaser_featured';
  $ds_layout->layout = 'arte_teaser_featured';
  $ds_layout->settings = array(
    'regions' => array(
      'secondary' => array(
        0 => 'title',
        1 => 'field_teaser_quote_author',
        2 => 'field_teaser_subtitle',
      ),
    ),
    'fields' => array(
      'title' => 'secondary',
      'field_teaser_quote_author' => 'secondary',
      'field_teaser_subtitle' => 'secondary',
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
  $export['node|teaser_quote|teaser_featured'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|teaser_quote|teaser_medium';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'teaser_quote';
  $ds_layout->view_mode = 'teaser_medium';
  $ds_layout->layout = 'arte_teaser_medium';
  $ds_layout->settings = array(
    'regions' => array(
      'secondary' => array(
        0 => 'title',
        1 => 'field_teaser_quote_author',
        2 => 'field_teaser_subtitle',
      ),
    ),
    'fields' => array(
      'title' => 'secondary',
      'field_teaser_quote_author' => 'secondary',
      'field_teaser_subtitle' => 'secondary',
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
  $export['node|teaser_quote|teaser_medium'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|teaser_quote|teaser_small';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'teaser_quote';
  $ds_layout->view_mode = 'teaser_small';
  $ds_layout->layout = 'arte_teaser_small';
  $ds_layout->settings = array(
    'regions' => array(
      'secondary' => array(
        0 => 'title',
        1 => 'field_teaser_quote_author',
        2 => 'field_teaser_subtitle',
      ),
    ),
    'fields' => array(
      'title' => 'secondary',
      'field_teaser_quote_author' => 'secondary',
      'field_teaser_subtitle' => 'secondary',
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
  $export['node|teaser_quote|teaser_small'] = $ds_layout;

  return $export;
}
