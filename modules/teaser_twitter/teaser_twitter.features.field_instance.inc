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

  // Exported field_instance: 'node-teaser_twitter-field_xiti_chapters'
  $field_instances['node-teaser_twitter-field_xiti_chapters'] = array(
    'bundle' => 'teaser_twitter',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter Xiti chapters one by one, separated by a comma. Please, do not enter all chapters at once.<br/>Format : parent, child, second-child',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 4,
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
    'field_name' => 'field_xiti_chapters',
    'label' => 'Xiti chapters',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 44,
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
  t('Enter Xiti chapters one by one, separated by a comma. Please, do not enter all chapters at once.<br/>Format : parent, child, second-child');
  t('ID of the Twitter timeline to embed. You can get the ID from the URL of the twitter widget. <a href="https://dev.twitter.com/docs/embedded-timelines">Learn how to create a Twitter timeline</a>.');
  t('Title');
  t('Twitter ID');
  t('Xiti chapters');

  return $field_instances;
}
