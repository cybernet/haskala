<?php
/**
 * @file
 * Contains \HaskalaBooksMigrate.
 */
class HaskalaBooksMigrate extends HaskalaMigration {
  public $entityType = 'node';
  public $bundle = 'book';

  public $csvColumns = array(
    array('field_alignment', 'Alignment of text'),
    array('field_dedications', 'Are there dedications'),
    array('field_illustrations_diagrams', 'Are there illustrations/diagrams'),
    array('field_personal_address', 'Are there personal addresses'),
    array('field_rabbinical_approbations', 'Are there rabbinical approbations'),
    array('field_recommendations', 'Are there recommendations'),
    array('field_sources_exist', 'Are there sources mentioned in the book itself'),
    array('field_thanks', 'Are there thanks'),
    array('field_contemporary_references', 'Contemporary references to the book'),
    array('field_copy_of_book_used', 'Copy of book used'),
    array('field_production_evidence', 'Evidence about book production'),
    array('field_fonts', 'Fonts'),
    array('field_format_of_publication_date', 'Format of publication date'),
    array('field_formatted_display_title', 'Formatted display title'),
    array('field_frankfurt_library_id', 'Frankfurt University Library catalog number'),
    array('field_full_title', 'Full title'),
    array('field_gregorian_year', 'Gregorian year of publication as it appears in the book'),
    array('field_hebrew_year_of_publication', 'Hebrew year of publication as it appears in the book'),
    array('field_height', 'Height of book, in cm'),
    array('field_funders', 'Is there a list of funders'),
    array('field_printers', 'Is there a list of printers'),
    array('field_proofreaders', 'Is there a list of proofreaders'),
    array('field_sellers', 'Is there a list of sellers'),
    array('field_subscribers', 'Is there a list of subscribers'),
    array('field_preface', 'Is there a preface'),
    array('field_table_of_conten', 'Is there a table of contents'),
    array('field_subscription_appeal', 'Is there an appeal to sell subscriptions'),
    array('field_epilogue', 'Is there an epilogue'),
    array('field_language', 'Language in book'),
    array('field_language_of_footnotes', 'Language of footnotes'),
    array('field_last_known_edition', 'Last known edition'),
    array('field_later_references', 'Later references to the book'),
    array('field_bar_ilan_library_id', 'Library of Bar Ilan University catalog number'),
    array('field_link_to_digital_book', 'Link to digital book'),
    array('field_sources_list', 'List of sources mentioned in the book'),
    array('field_location_of_footnotes', 'Location of footnotes'),
    array('field_motto', 'Motto'),
    array('field_publisher_name', 'Name of publisher'),
    array('field_name_of_series', 'Name of series'),
    array('field_other_volumes', 'Names of other published volumes'),
    array('field_berlin_library_id', 'National Library of Berlin catalog number'),
    array('field_huji_library_id', 'National Library of Hebrew University catalog number'),
    array('field_book_structure_notes', 'Notes on book structure'),
    array('field_catalog_numbers_notes', 'Notes on catalog numbers'),
    array('field_dedications_notes', 'Notes on dedications'),
    array('field_personal_addresse_notes', 'Notes on personal addresses'),
    array('field_structure_preface_notes', 'Notes on preface'),
    array('field_references_notes', 'Notes on references'),
    array('field_target_audience_notes', 'Notes on target audience'),
    array('field_textual_models_notes', 'Notes on textual models'),
    array('field_volumes_notes', 'field_volumes_notes'),
    array('field_examined_volume_number', 'Number of examined volume'),
    array('field_languages_number', 'Number of languages'),
    array('field_pages_number', 'Number of pages'),
    array('field_preface_number', 'Number of preface'),
    array('field_volumes_published_number', 'Number of volumes published'),
    array('field_publication_place', 'Place of publication as it appears in the book'),
    array('field_preface_title', 'Preface title'),
    array('field_references_for_editions', 'References for editions'),
    array('field_sources_references', 'References for sources mentioned in the book'),
    array('field_role_in_book_production', 'Role in book production'),
    array('field_secondary_sources', 'Secondary sources used by researchers'),
    array('field_target_audience', 'Target audience as described in the book'),
    array('field_presented_as_original', 'Text is presented as original'),
    array('field_title_in_latin_characters', 'Title in Latin characters'),
    array('field_topic', 'Topic'),
    array('field_total_number_of_editions', 'Total number of editions'),
    array('field_typography', 'Typography'),
    array('field_width', 'Width of book, in cm'),
    array('field_writer_of_preface', 'Writer of preface'),
    array('field_publication_year_in_book', 'Year of publication as it appears in the book'),

  );

  public $dependencies = array(
    'HaskalaCityTermsMigrate',
    'HaskalaPeopleMigrate',
  );

  public function __construct($arguments) {
    parent::__construct($arguments);

    $simple_mappings = array(
      'field_dedications',
      'field_illustrations_diagrams',
      'field_personal_address',
      'field_rabbinical_approbations',
      'field_recommendations',
      'field_sources_exist',
      'field_thanks',
      'field_contemporary_references',
      'field_copy_of_book_used',
      'field_production_evidence',
      'field_formatted_display_title',
      'field_frankfurt_library_id',
      'field_full_title',
      'field_gregorian_year',
      'field_hebrew_year_of_publication',
      'field_height',
      'field_funders',
      'field_printers',
      'field_proofreaders',
      'field_sellers',
      'field_subscribers',
      'field_preface',
      'field_table_of_conten',
      'field_subscription_appeal',
      'field_epilogue',
      'field_last_known_edition',
      'field_later_references',
      'field_bar_ilan_library_id',
      'field_link_to_digital_book',
      'field_sources_list',
      'field_motto',
      'field_other_volumes',
      'field_berlin_library_id',
      'field_huji_library_id',
      'field_book_structure_notes',
      'field_catalog_numbers_notes',
      'field_dedications_notes',
      'field_personal_addresse_notes',
      'field_structure_preface_notes',
      'field_references_notes',
      'field_target_audience_notes',
      'field_textual_models_notes',
      'field_volumes_notes',
      'field_examined_volume_number',
      'field_pages_number',
      'field_preface_number',
      'field_volumes_published_number',
      'field_preface_title',
      'field_references_for_editions',
      'field_sources_references',
      'field_role_in_book_production',
      'field_secondary_sources',
      'field_presented_as_original',
      'field_title_in_latin_characters',
      'field_publication_year_in_book',
      'field_total_number_of_editions',
      'field_width',
    );
    $this->addSimpleMappings($simple_mappings);

    $term_references = array(
      'field_languages_number',
      'field_alignment',
      'field_fonts',
      'field_language',
      'field_language_of_footnotes',
      'field_location_of_footnotes',
      'field_publisher_name',
      'field_publication_place',
      'field_target_audience',
      'field_topic',
      'field_typography',
      'field_format_of_publication_date',
    );
    $this->addTermReferenceMappings($term_references);

    $this->addFieldMapping('field_name_of_series', 'field_name_of_series');
    $this->addFieldMapping('field_name_of_series:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_name_of_series:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_writer_of_preface', 'field_writer_of_preface')
      ->sourceMigration('HaskalaPeopleMigrate');
  }
}
