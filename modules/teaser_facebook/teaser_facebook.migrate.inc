<?php

/**
 * Implements hook_migrate_api().
 */
function teaser_facebook_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'TeaserFacebookDemo' => array(
        'class_name' => 'TeaserFacebookDemoMigration',
        'group_name' => 'teaser_demo',
      ),
    ),
  );
  return $api;
}


