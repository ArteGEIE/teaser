<?php

/**
 * Implements hook_migrate_api().
 */
function teaser_twitter_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'TeaserTwitterDemo' => array(
        'class_name' => 'TeaserTwitterDemoMigration',
        'group_name' => 'teaser_demo',
      ),
    ),
  );
  return $api;
}


