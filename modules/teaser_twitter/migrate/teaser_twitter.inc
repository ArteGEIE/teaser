<?php

class TeaserTwitterDemoMigration extends TeaserDemoMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->description = t('Teaser Twitter');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(
      drupal_get_path('module', 'teaser_twitter') . '/migrate/teaser_twitter.csv',
      array(),
      $this->sourceFileOptions()
    );

    $this->destination = new MigrateDestinationNode('teaser_twitter');

    $this->addFieldMapping('title', 'title');

    // Author, default to admin
    $this->addFieldMapping('uid')->defaultValue(1);

    // Published by default
    $this->addFieldMapping('field_teaser_twitter_id', 'twitter_id');

    // Language
    $this->addFieldMapping('language', 'language');
  }

  public function prepareRow($row) {
  }
}
