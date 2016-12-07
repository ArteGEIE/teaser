<?php
/**
 * @file
 * teaser_twitter.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function teaser_twitter_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-teaser_twitter-field_teaser_twitter_id'
  $field_instances['node-teaser_twitter-field_teaser_twitter_id'] = array(
    'bundle' => 'teaser_twitter',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ID of the Twitter timeline to embed. You can get the ID from the URL of the twitter widget. <a href="https://dev.twitter.com/docs/embedded-timelines">Learn how to create a Twitter timeline</a>.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'teaser_twitter',
        'settings' => array(),
        'type' => 'teaser_twitter_timeline',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'teaser_twitter',
        'settings' => array(),
        'type' => 'teaser_twitter_timeline',
        'weight' => 1,
      ),
      'teaser_medium' => array(
        'label' => 'hidden',
        'module' => 'teaser_twitter',
        'settings' => array(),
        'type' => 'teaser_twitter_timeline',
        'weight' => 1,
      ),
      'teaser_small' => array(
        'label' => 'hidden',
        'module' => 'teaser_twitter',
        'settings' => array(),
        'type' => 'teaser_twitter_timeline',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_teaser_twitter_id',
    'label' => 'Twitter ID',
    'required' => 1,
    'settings' => array(
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-teaser_twitter-title_field'
  $field_instances['node-teaser_twitter-title_field'] = array(
    'bundle' => 'teaser_twitter',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_medium' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_small' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'context' => '',
      'dnd_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('ID of the Twitter timeline to embed. You can get the ID from the URL of the twitter widget. <a href="https://dev.twitter.com/docs/embedded-timelines">Learn how to create a Twitter timeline</a>.');
  t('Title');
  t('Twitter ID');

  return $field_instances;
}
