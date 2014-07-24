<?php

/**
 * Implements hook_migrate_api().
 */
function teaser_standard_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'TeaserStandardDemo' => array(
        'class_name' => 'TeaserStandardDemoMigration',
        'group_name' => 'teaser_demo',
        'dependencies' => array(
          'ImageTeaserStandardDemo',
        ),
      ),
      'ImageTeaserStandardDemo' => array(
        'class_name' => 'ImageTeaserStandardDemoMigration',
        'group_name' => 'teaser_demo',
      ),
    ),
  );
  return $api;
}


