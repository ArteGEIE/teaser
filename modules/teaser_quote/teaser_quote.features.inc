<?php
/**
 * @file
 * teaser_quote.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teaser_quote_ctools_plugin_api($module = NULL, $api = NULL) {
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
function teaser_quote_node_info() {
  $items = array(
    'teaser_quote' => array(
      'name' => t('Teaser Quote'),
      'base' => 'node_content',
      'description' => t('A <em>Teaser Quote</em> can be used to create quotes with an author and a subtitle.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
