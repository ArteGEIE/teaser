<?php

class TeaserQuoteDemoMigration extends TeaserDemoMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->description = t('Teaser Quote.');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(
      drupal_get_path('module', 'teaser_quote') . '/migrate/teaser_quote.csv',
      array(),
      $this->sourceFileOptions()
    );

    $this->destination = new MigrateDestinationNode('teaser_quote');

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_teaser_subtitle', 'subtitle');
    $this->addFieldMapping('field_teaser_quote_author', 'author');

    // Author, default to admin
    $this->addFieldMapping('uid')->defaultValue(1);

    // Published by default
    $this->addFieldMapping('status', 'publication_status')->defaultValue(1);

    // Language
    $this->addFieldMapping('language', 'language');
  }
}
