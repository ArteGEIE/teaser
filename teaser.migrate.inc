<?php

/**
 * Implements hook_migrate_api().
 */
function teaser_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'teaser_demo' => array(
        'title' => t('Teaser demo content'),
      ),
    ),
  );
  return $api;
}
