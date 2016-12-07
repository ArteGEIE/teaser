<?php
/**
 * @file
 * teaser_facebook.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function teaser_facebook_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_teaser_facebook';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_teaser_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_teaser_facebook';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_teaser_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__teaser_facebook';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_featured' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_featured_extra' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_medium' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_small' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_small_extra' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_tiny' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_basic' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__teaser_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_teaser_facebook';
  $strongarm->value = 1;
  $export['i18n_node_extended_teaser_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_teaser_facebook';
  $strongarm->value = array();
  $export['i18n_node_options_teaser_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_teaser_facebook';
  $strongarm->value = '4';
  $export['language_content_type_teaser_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_teaser_facebook';
  $strongarm->value = array();
  $export['menu_options_teaser_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_teaser_facebook';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_teaser_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_teaser_facebook';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_teaser_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_teaser_facebook';
  $strongarm->value = '1';
  $export['node_preview_teaser_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_teaser_facebook';
  $strongarm->value = 0;
  $export['node_submitted_teaser_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_teaser_facebook_pattern';
  $strongarm->value = 'teaser-facebook/[node:title]';
  $export['pathauto_node_teaser_facebook_pattern'] = $strongarm;

  return $export;
}
