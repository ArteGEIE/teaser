<?php
/**
 * @file
 * teaser_facebook.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function teaser_facebook_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-teaser_facebook-field_teaser_facebook_name'
  $field_instances['node-teaser_facebook-field_teaser_facebook_name'] = array(
    'bundle' => 'teaser_facebook',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'teaser_facebook',
        'settings' => array(),
        'type' => 'teaser_facebook_likebox',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'teaser_facebook',
        'settings' => array(),
        'type' => 'teaser_facebook_likebox',
        'weight' => 0,
      ),
      'teaser_medium' => array(
        'label' => 'hidden',
        'module' => 'teaser_facebook',
        'settings' => array(),
        'type' => 'teaser_facebook_likebox',
        'weight' => 0,
      ),
      'teaser_small' => array(
        'label' => 'hidden',
        'module' => 'teaser_facebook',
        'settings' => array(),
        'type' => 'teaser_facebook_likebox',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_teaser_facebook_name',
    'label' => 'Facebook Name',
    'required' => 0,
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
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-teaser_facebook-title_field'
  $field_instances['node-teaser_facebook-title_field'] = array(
    'bundle' => 'teaser_facebook',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
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
  t('Facebook Name');
  t('Title');

  return $field_instances;
}
