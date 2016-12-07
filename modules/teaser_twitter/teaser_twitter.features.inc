<?php
/**
 * @file
 * teaser_twitter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teaser_twitter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function teaser_twitter_node_info() {
  $items = array(
    'teaser_twitter' => array(
      'name' => t('Teaser Twitter'),
      'base' => 'node_content',
      'description' => t('A <em>Teaser Twitter</em> can be used to create Twitter timelines from hash tags, user timelines, etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
