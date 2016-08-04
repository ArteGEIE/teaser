<?php
/**
 * @file
 * teaser_quote.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function teaser_quote_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__teaser_quote';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
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
      'teaser_featured' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_featured_extra' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_basic' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '8',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'redirect' => array(
          'weight' => '5',
        ),
        'xmlsitemap' => array(
          'weight' => '6',
        ),
        'language' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__teaser_quote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_teaser_quote';
  $strongarm->value = 1;
  $export['i18n_node_extended_teaser_quote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_teaser_quote';
  $strongarm->value = array();
  $export['i18n_node_options_teaser_quote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_teaser_quote';
  $strongarm->value = '4';
  $export['language_content_type_teaser_quote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_teaser_quote';
  $strongarm->value = array();
  $export['menu_options_teaser_quote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_teaser_quote';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_teaser_quote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_teaser_quote';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_teaser_quote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_teaser_quote';
  $strongarm->value = '1';
  $export['node_preview_teaser_quote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_teaser_quote';
  $strongarm->value = 0;
  $export['node_submitted_teaser_quote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_teaser_quote_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_teaser_quote_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_teaser_quote_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_teaser_quote_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_teaser_quote_pattern';
  $strongarm->value = 'teaser-quote/[node:title]';
  $export['pathauto_node_teaser_quote_pattern'] = $strongarm;

  return $export;
}
