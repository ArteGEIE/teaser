<?php

/**
 * Implements hook_migrate_api().
 */
function teaser_quote_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'TeaserQuoteDemo' => array(
        'class_name' => 'TeaserQuoteDemoMigration',
        'group_name' => 'teaser_demo',
      ),
    ),
  );
  return $api;
}


