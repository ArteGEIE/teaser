<?php
/**
 * @file
 * teaser_twitter.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function teaser_twitter_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_teaser_twitter_id'
  $field_bases['field_teaser_twitter_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_teaser_twitter_id',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
