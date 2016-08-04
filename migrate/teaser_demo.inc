<?php

/**
 * Common features for all the Teaser Demo migrations.
 */
abstract class TeaserDemoMigration extends Migration {

  protected function sourceFileOptions() {
    return array(
      'header_rows' => 1,
      'delimiter' => ",",
      'enclosure' => '"',
    );
  }
}
