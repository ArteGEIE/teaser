<?php
/**
 * @file
 * teaser_standard.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function teaser_standard_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|teaser|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'teaser';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|teaser|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|teaser|teaser_basic';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'teaser';
  $ds_fieldsetting->view_mode = 'teaser_basic';
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
  $export['node|teaser|teaser_basic'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|teaser|teaser_featured';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'teaser';
  $ds_fieldsetting->view_mode = 'teaser_featured';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'teaser_standard_video' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|teaser|teaser_featured'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|teaser|teaser_medium';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'teaser';
  $ds_fieldsetting->view_mode = 'teaser_medium';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|teaser|teaser_medium'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|teaser|teaser_small';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'teaser';
  $ds_fieldsetting->view_mode = 'teaser_small';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|teaser|teaser_small'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function teaser_standard_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|teaser|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'teaser';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'arte_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'primary' => array(
        0 => 'field_teaser_image',
      ),
      'secondary' => array(
        1 => 'field_teaser_section',
        2 => 'field_teaser_icon',
        3 => 'title',
        4 => 'field_teaser_descshort',
        5 => 'field_teaser_subtitle',
      ),
    ),
    'fields' => array(
      'field_teaser_image' => 'primary',
      'field_teaser_section' => 'secondary',
      'field_teaser_icon' => 'secondary',
      'title' => 'secondary',
      'field_teaser_descshort' => 'secondary',
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
  $export['node|teaser|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|teaser|teaser_basic';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'teaser';
  $ds_layout->view_mode = 'teaser_basic';
  $ds_layout->layout = 'arte_teaser_basic';
  $ds_layout->settings = array(
    'regions' => array(
      'primary' => array(
        0 => 'title',
      ),
      'secondary' => array(
        1 => 'field_teaser_descshort',
      ),
    ),
    'fields' => array(
      'title' => 'primary',
      'field_teaser_descshort' => 'secondary',
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
  $export['node|teaser|teaser_basic'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|teaser|teaser_featured';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'teaser';
  $ds_layout->view_mode = 'teaser_featured';
  $ds_layout->layout = 'arte_teaser_featured';
  $ds_layout->settings = array(
    'regions' => array(
      'primary' => array(
        0 => 'teaser_standard_video',
      ),
      'secondary' => array(
        1 => 'field_teaser_section',
        2 => 'title',
        3 => 'field_teaser_descshort',
      ),
    ),
    'fields' => array(
      'teaser_standard_video' => 'primary',
      'field_teaser_section' => 'secondary',
      'title' => 'secondary',
      'field_teaser_descshort' => 'secondary',
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
  $export['node|teaser|teaser_featured'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|teaser|teaser_medium';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'teaser';
  $ds_layout->view_mode = 'teaser_medium';
  $ds_layout->layout = 'arte_teaser_medium';
  $ds_layout->settings = array(
    'regions' => array(
      'primary' => array(
        0 => 'field_teaser_image',
      ),
      'secondary' => array(
        1 => 'field_teaser_section',
        2 => 'field_teaser_icon',
        3 => 'title',
        4 => 'field_teaser_subtitle',
      ),
    ),
    'fields' => array(
      'field_teaser_image' => 'primary',
      'field_teaser_section' => 'secondary',
      'field_teaser_icon' => 'secondary',
      'title' => 'secondary',
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
  $export['node|teaser|teaser_medium'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|teaser|teaser_small';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'teaser';
  $ds_layout->view_mode = 'teaser_small';
  $ds_layout->layout = 'arte_teaser_small';
  $ds_layout->settings = array(
    'regions' => array(
      'primary' => array(
        0 => 'field_teaser_image',
      ),
      'secondary' => array(
        1 => 'field_teaser_section',
        2 => 'field_teaser_icon',
        3 => 'title',
        4 => 'field_teaser_subtitle',
      ),
    ),
    'fields' => array(
      'field_teaser_image' => 'primary',
      'field_teaser_section' => 'secondary',
      'field_teaser_icon' => 'secondary',
      'title' => 'secondary',
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
  $export['node|teaser|teaser_small'] = $ds_layout;

  return $export;
}
