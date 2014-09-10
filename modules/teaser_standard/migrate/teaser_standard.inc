<?php

class TeaserStandardDemoMigration extends TeaserDemoMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->description = t('Teaser Standard.');

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
      drupal_get_path('module', 'teaser_standard') . '/migrate/teaser_standard.csv',
      array(),
      $this->sourceFileOptions()
    );

    $this->destination = new MigrateDestinationNode('teaser');

    $this->addFieldMapping('title', 'title');

    // Image thumbnails as previously migrated scald images
    $this->addFieldMapping('field_teaser_image', 'id')
      ->sourceMigration('ImageTeaserStandardDemo');

    // Video atoms, also previously migrated
    $this->addFieldMapping('field_teaser_video', 'video')
      ->sourceMigration('ScaldOPATest');

    $this->addFieldMapping('field_teaser_subtitle', 'subtitle');
    $this->addFieldMapping('field_teaser_section', 'section');
    $this->addFieldMapping('field_teaser_icon', 'icon');
    $this->addFieldMapping('field_teaser_link', 'link');
    $this->addFieldMapping('field_teaser_descshort', 'descshort');

    // Author, default to admin
    $this->addFieldMapping('uid')->defaultValue(1);

    // Published by default
    $this->addFieldMapping('status', 'publication_status')->defaultValue(1);

    // Language
    $this->addFieldMapping('language', 'language');
  }
}

/**
 * Migration class for teaser images.
 */
class ImageTeaserStandardDemoMigration extends TeaserDemoMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->description = t('Import Teaser Standard Images.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationEntityAPI::getKeySchema('scald_atom', 'image')
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(
      drupal_get_path('module', 'teaser_standard') . '/migrate/teaser_standard.csv',
      array(),
      $this->sourceFileOptions()
    );

    // Our destination node
    $this->destination = new MigrateDestinationEntityAPI('scald_atom', 'image');

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('base_id', 'id');

    $this->addFieldMapping('type')->defaultValue('image');
    $this->addFieldMapping('provider')->defaultValue('scald_image');

    // Assign to our migration user
    $this->addFieldMapping('publisher')
      ->defaultValue(1);

    $this->addFieldMapping('scald_thumbnail', 'image');
    $this->addFieldMapping('scald_thumbnail:source_dir')
      ->defaultValue(drupal_get_path('module', 'teaser_standard') . '/migrate/import');
    $this->addFieldMapping('scald_thumbnail:destination_dir')->defaultValue('public://atoms/image');
    $this->addFieldMapping('scald_thumbnail:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
  }

  public function prepareRow($row) {
    if ($row->image == '') {
      // No image, skip this row
      return FALSE;
    }
  }
}
