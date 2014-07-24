<?php

class TeaserEmbedDemoMigration extends TeaserDemoMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->description = t('Teaser Embed.');

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
      drupal_get_path('module', 'teaser_embed') . '/migrate/teaser_embed.csv',
      array(),
      $this->sourceFileOptions()
    );

    $this->destination = new MigrateDestinationNode('teaser_embed');

    $this->addFieldMapping('title', 'title');

    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')->defaultValue('full_html');

    // Author, default to admin
    $this->addFieldMapping('uid')->defaultValue(1);

    // Published by default
    $this->addFieldMapping('status', 'publication_status')->defaultValue(1);

    // Language
    $this->addFieldMapping('language', 'language');
  }
}
