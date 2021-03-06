<?php
/**
 * @file
 * teaser_facebook.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teaser_facebook_ctools_plugin_api($module = NULL, $api = NULL) {
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
function teaser_facebook_node_info() {
  $items = array(
    'teaser_facebook' => array(
      'name' => t('Teaser Facebook'),
      'base' => 'node_content',
      'description' => t('A <em>Teaser Facebook</em> can be used to create Facebook timelines for Facebook pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
