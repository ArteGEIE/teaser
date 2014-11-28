<?php
/**
 * @file
 * teaser.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function teaser_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'arte_teaser';
  $linkit_profile->admin_title = 'Arte Teaser';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '2';
  $linkit_profile->data = array(
    'search_plugins' => array(
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:Workflow' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:scald_atom' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:WorkflowState' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'article' => 0,
        'cluster' => 0,
        'list' => 0,
        'site' => 0,
        'teaser' => 0,
        'teaser_facebook' => 0,
        'teaser_quote' => 0,
        'teaser_twitter' => 0,
      ),
      'group_by_bundle' => 0,
      'include_unpublished' => 0,
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'scald_authors' => 0,
        'scald_tags' => 0,
        'apios_case_numbers' => 0,
        'keywords' => 0,
        'genres' => 0,
        'videotypes' => 0,
        'karambolage_keywords' => 0,
        'tracks_keywords' => 0,
        'personnenebouge_keywords' => 0,
        'cinema_keywords' => 0,
        'qsdf_keywords' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:scald_atom' => array(
      'result_description' => '',
      'bundles' => array(
        'gallery' => 0,
        'iframe' => 0,
        'image' => 0,
        'video' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'entity:Workflow' => array(
      'result_description' => '',
    ),
    'entity:WorkflowState' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'plugin' => 'raw_url',
      'url_method' => '1',
    ),
    'attribute_plugins' => array(
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['arte_teaser'] = $linkit_profile;

  return $export;
}
