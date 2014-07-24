<?php

/**
 * Implements hook_migrate_api().
 */
function teaser_embed_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'TeaserEmbedDemo' => array(
        'class_name' => 'TeaserEmbedDemoMigration',
        'group_name' => 'teaser_demo',
      ),
    ),
  );
  return $api;
}


