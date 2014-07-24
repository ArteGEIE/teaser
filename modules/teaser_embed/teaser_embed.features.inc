<?php
/**
 * @file
 * teaser_embed.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teaser_embed_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function teaser_embed_node_info() {
  $items = array(
    'teaser_embed' => array(
      'name' => t('Teaser Embed'),
      'base' => 'node_content',
      'description' => t('A <em>teaser embed</em> can be used to embed iframes and other embeddable content as a teaser.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
