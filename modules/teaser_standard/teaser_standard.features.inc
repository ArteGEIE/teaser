<?php
/**
 * @file
 * teaser_standard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teaser_standard_ctools_plugin_api($module = NULL, $api = NULL) {
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
function teaser_standard_node_info() {
  $items = array(
    'teaser' => array(
      'name' => t('Teaser'),
      'base' => 'node_content',
      'description' => t('A <em>teaser</em> node can be used for teasering of content that does not exist as an individual node on the platform. It can have an image, a video and some other text fields.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
