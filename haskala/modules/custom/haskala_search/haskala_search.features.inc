<?php
/**
 * @file
 * haskala_search.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function haskala_search_default_search_api_index() {
  $items = array();
  $items['haskala'] = entity_import('search_api_index', '{
    "name" : "Haskala",
    "machine_name" : "haskala",
    "description" : null,
    "server" : "index_depot",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "500",
      "fields" : {
        "field_alignment" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_bar_ilan_library_id" : { "type" : "text" },
        "field_berlin_library_id" : { "type" : "text" },
        "field_book" : { "type" : "integer", "entity_type" : "node" },
        "field_book_availability_notes" : { "type" : "text" },
        "field_book_not_available" : { "type" : "boolean" },
        "field_book_structure_notes" : { "type" : "text" },
        "field_british_library_id" : { "type" : "text" },
        "field_catalog_numbers_notes" : { "type" : "text" },
        "field_contemporary_references" : { "type" : "text" },
        "field_contents_table_notes" : { "type" : "text" },
        "field_copy_of_book_used" : { "type" : "text" },
        "field_date_of_birth" : { "type" : "text" },
        "field_date_of_death" : { "type" : "text" },
        "field_dedications" : { "type" : "boolean" },
        "field_dedications_notes" : { "type" : "text" },
        "field_diagrams_book_pages" : { "type" : "text" },
        "field_diagrams_notes" : { "type" : "text" },
        "field_diagrams_text" : { "type" : "text" },
        "field_edition_changes" : { "type" : "text" },
        "field_edition_city" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_edition_references" : { "type" : "text" },
        "field_edition_year" : { "type" : "text" },
        "field_epilogue" : { "type" : "boolean" },
        "field_epilogue_notes" : { "type" : "text" },
        "field_examined_volume_number" : { "type" : "integer" },
        "field_fonts" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_format_of_publication_date" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_formatted_display_title" : { "type" : "text" },
        "field_frankfurt_library_id" : { "type" : "text" },
        "field_full_title" : { "type" : "text", "boost" : "5.0" },
        "field_funders" : { "type" : "boolean" },
        "field_gender" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_german_name" : { "type" : "text" },
        "field_gregorian_year" : { "type" : "integer" },
        "field_gregorian_year_pub_other" : { "type" : "text" },
        "field_harvard_library_id" : { "type" : "text" },
        "field_heb_year_publication_other" : { "type" : "text" },
        "field_hebrew_name" : { "type" : "text" },
        "field_hebrew_year_of_publication" : { "type" : "text" },
        "field_height" : { "type" : "decimal" },
        "field_huji_library_id" : { "type" : "text" },
        "field_illustrations_diagrams" : { "type" : "boolean" },
        "field_language" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_language_of_footnotes" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_languages_number" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_last_known_edition" : { "type" : "text" },
        "field_later_references" : { "type" : "text" },
        "field_location" : { "type" : "text" },
        "field_location_of_footnotes" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_mentionee" : { "type" : "integer", "entity_type" : "node" },
        "field_mentionee_city" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_mentionee_description" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_motto" : { "type" : "text" },
        "field_name_in_book" : { "type" : "text" },
        "field_name_of_series" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_new_york_library_id" : { "type" : "text" },
        "field_occasional_words_languages" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_occupation" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_other_books_names" : { "type" : "text" },
        "field_other_libraries" : { "type" : "text" },
        "field_other_volumes" : { "type" : "text" },
        "field_page" : { "type" : "text" },
        "field_pages_number" : { "type" : "text" },
        "field_person_book_references" : { "type" : "text" },
        "field_person_name_appear" : { "type" : "boolean" },
        "field_personal_address" : { "type" : "boolean" },
        "field_personal_addresse_notes" : { "type" : "text" },
        "field_place_of_birth" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_place_of_death" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_planned_volumes" : { "type" : "text" },
        "field_preface" : { "type" : "boolean" },
        "field_preface_notes" : { "type" : "text" },
        "field_preface_number" : { "type" : "text" },
        "field_preface_title" : { "type" : "text" },
        "field_presented_as_original" : { "type" : "boolean" },
        "field_price" : { "type" : "text" },
        "field_printed_originally" : { "type" : "boolean" },
        "field_printers" : { "type" : "boolean" },
        "field_printing_press_notes" : { "type" : "text" },
        "field_printing_press_references" : { "type" : "text" },
        "field_producer" : { "type" : "integer", "entity_type" : "node" },
        "field_producer_evidence" : { "type" : "text" },
        "field_production_evidence" : { "type" : "text" },
        "field_proofreaders" : { "type" : "boolean" },
        "field_pseudonym" : { "type" : "text" },
        "field_publication_place" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_publication_place_other" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_publication_year_in_book" : { "type" : "text" },
        "field_publication_year_in_other" : { "type" : "text" },
        "field_publisher_name" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_rabbinical_approbations" : { "type" : "boolean" },
        "field_recommendations" : { "type" : "boolean" },
        "field_references_for_editions" : { "type" : "text" },
        "field_references_notes" : { "type" : "text" },
        "field_religion" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_role" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_role_in_book_production" : { "type" : "text" },
        "field_roles_notes" : { "type" : "text" },
        "field_secondary_sources" : { "type" : "text" },
        "field_sellers" : { "type" : "boolean" },
        "field_series_part" : { "type" : "boolean" },
        "field_sources_exist" : { "type" : "boolean" },
        "field_sources_list" : { "type" : "text" },
        "field_sources_references" : { "type" : "text" },
        "field_structure_preface_notes" : { "type" : "text" },
        "field_subscribers" : { "type" : "boolean" },
        "field_subscription_appeal" : { "type" : "boolean" },
        "field_table_of_conten" : { "type" : "boolean" },
        "field_target_audience_notes" : { "type" : "text" },
        "field_tel_aviv_library_id" : { "type" : "text" },
        "field_textual_models_notes" : { "type" : "text" },
        "field_thanks" : { "type" : "boolean" },
        "field_title_in_latin_characters" : { "type" : "text" },
        "field_topic" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_topics_notes" : { "type" : "text" },
        "field_total_number_of_editions" : { "type" : "text" },
        "field_translation_city" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_translation_references" : { "type" : "text" },
        "field_translation_year" : { "type" : "text" },
        "field_translator" : { "type" : "integer", "entity_type" : "node" },
        "field_typography" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_volumes_notes" : { "type" : "text" },
        "field_volumes_published_number" : { "type" : "text" },
        "field_width" : { "type" : "decimal" },
        "field_writer_of_preface" : { "type" : "integer", "entity_type" : "node" },
        "field_writing_age" : { "type" : "integer" },
        "field_writing_location" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "book" : "book", "person" : "person" } }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_date_of_birth" : true,
              "field_date_of_death" : true,
              "field_german_name" : true,
              "field_hebrew_name" : true,
              "field_pseudonym" : true,
              "field_bar_ilan_library_id" : true,
              "field_berlin_library_id" : true,
              "field_book_availability_notes" : true,
              "field_book_structure_notes" : true,
              "field_british_library_id" : true,
              "field_catalog_numbers_notes" : true,
              "field_contemporary_references" : true,
              "field_contents_table_notes" : true,
              "field_copy_of_book_used" : true,
              "field_dedications_notes" : true,
              "field_diagrams_book_pages" : true,
              "field_diagrams_notes" : true,
              "field_diagrams_text" : true,
              "field_epilogue_notes" : true,
              "field_formatted_display_title" : true,
              "field_frankfurt_library_id" : true,
              "field_full_title" : true,
              "field_gregorian_year_pub_other" : true,
              "field_harvard_library_id" : true,
              "field_heb_year_publication_other" : true,
              "field_hebrew_year_of_publication" : true,
              "field_huji_library_id" : true,
              "field_last_known_edition" : true,
              "field_later_references" : true,
              "field_motto" : true,
              "field_new_york_library_id" : true,
              "field_other_books_names" : true,
              "field_other_libraries" : true,
              "field_other_volumes" : true,
              "field_pages_number" : true,
              "field_personal_addresse_notes" : true,
              "field_planned_volumes" : true,
              "field_preface_notes" : true,
              "field_preface_number" : true,
              "field_preface_title" : true,
              "field_price" : true,
              "field_printing_press_notes" : true,
              "field_printing_press_references" : true,
              "field_production_evidence" : true,
              "field_publication_year_in_book" : true,
              "field_publication_year_in_other" : true,
              "field_references_for_editions" : true,
              "field_references_notes" : true,
              "field_role_in_book_production" : true,
              "field_secondary_sources" : true,
              "field_sources_list" : true,
              "field_sources_references" : true,
              "field_structure_preface_notes" : true,
              "field_target_audience_notes" : true,
              "field_tel_aviv_library_id" : true,
              "field_textual_models_notes" : true,
              "field_title_in_latin_characters" : true,
              "field_topics_notes" : true,
              "field_total_number_of_editions" : true,
              "field_translation_references" : true,
              "field_translation_year" : true,
              "field_volumes_notes" : true,
              "field_volumes_published_number" : true,
              "field_edition_changes" : true,
              "field_edition_references" : true,
              "field_edition_year" : true,
              "field_name_in_book" : true,
              "field_person_book_references" : true,
              "field_producer_evidence" : true,
              "field_roles_notes" : true,
              "field_location" : true,
              "field_page" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_date_of_birth" : true,
              "field_date_of_death" : true,
              "field_german_name" : true,
              "field_hebrew_name" : true,
              "field_pseudonym" : true,
              "field_bar_ilan_library_id" : true,
              "field_berlin_library_id" : true,
              "field_book_availability_notes" : true,
              "field_book_structure_notes" : true,
              "field_british_library_id" : true,
              "field_catalog_numbers_notes" : true,
              "field_contemporary_references" : true,
              "field_contents_table_notes" : true,
              "field_copy_of_book_used" : true,
              "field_dedications_notes" : true,
              "field_diagrams_book_pages" : true,
              "field_diagrams_notes" : true,
              "field_diagrams_text" : true,
              "field_epilogue_notes" : true,
              "field_formatted_display_title" : true,
              "field_frankfurt_library_id" : true,
              "field_full_title" : true,
              "field_gregorian_year_pub_other" : true,
              "field_harvard_library_id" : true,
              "field_heb_year_publication_other" : true,
              "field_hebrew_year_of_publication" : true,
              "field_huji_library_id" : true,
              "field_last_known_edition" : true,
              "field_later_references" : true,
              "field_motto" : true,
              "field_new_york_library_id" : true,
              "field_other_books_names" : true,
              "field_other_libraries" : true,
              "field_other_volumes" : true,
              "field_pages_number" : true,
              "field_personal_addresse_notes" : true,
              "field_planned_volumes" : true,
              "field_preface_notes" : true,
              "field_preface_number" : true,
              "field_preface_title" : true,
              "field_price" : true,
              "field_printing_press_notes" : true,
              "field_printing_press_references" : true,
              "field_production_evidence" : true,
              "field_publication_year_in_book" : true,
              "field_publication_year_in_other" : true,
              "field_references_for_editions" : true,
              "field_references_notes" : true,
              "field_role_in_book_production" : true,
              "field_secondary_sources" : true,
              "field_sources_list" : true,
              "field_sources_references" : true,
              "field_structure_preface_notes" : true,
              "field_target_audience_notes" : true,
              "field_tel_aviv_library_id" : true,
              "field_textual_models_notes" : true,
              "field_title_in_latin_characters" : true,
              "field_topics_notes" : true,
              "field_total_number_of_editions" : true,
              "field_translation_references" : true,
              "field_translation_year" : true,
              "field_volumes_notes" : true,
              "field_volumes_published_number" : true,
              "field_edition_changes" : true,
              "field_edition_references" : true,
              "field_edition_year" : true,
              "field_name_in_book" : true,
              "field_person_book_references" : true,
              "field_producer_evidence" : true,
              "field_roles_notes" : true,
              "field_location" : true,
              "field_page" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_date_of_birth" : true,
              "field_date_of_death" : true,
              "field_german_name" : true,
              "field_hebrew_name" : true,
              "field_pseudonym" : true,
              "field_bar_ilan_library_id" : true,
              "field_berlin_library_id" : true,
              "field_book_availability_notes" : true,
              "field_book_structure_notes" : true,
              "field_british_library_id" : true,
              "field_catalog_numbers_notes" : true,
              "field_contemporary_references" : true,
              "field_contents_table_notes" : true,
              "field_copy_of_book_used" : true,
              "field_dedications_notes" : true,
              "field_diagrams_book_pages" : true,
              "field_diagrams_notes" : true,
              "field_diagrams_text" : true,
              "field_epilogue_notes" : true,
              "field_formatted_display_title" : true,
              "field_frankfurt_library_id" : true,
              "field_full_title" : true,
              "field_gregorian_year_pub_other" : true,
              "field_harvard_library_id" : true,
              "field_heb_year_publication_other" : true,
              "field_hebrew_year_of_publication" : true,
              "field_huji_library_id" : true,
              "field_last_known_edition" : true,
              "field_later_references" : true,
              "field_motto" : true,
              "field_new_york_library_id" : true,
              "field_other_books_names" : true,
              "field_other_libraries" : true,
              "field_other_volumes" : true,
              "field_pages_number" : true,
              "field_personal_addresse_notes" : true,
              "field_planned_volumes" : true,
              "field_preface_notes" : true,
              "field_preface_number" : true,
              "field_preface_title" : true,
              "field_price" : true,
              "field_printing_press_notes" : true,
              "field_printing_press_references" : true,
              "field_production_evidence" : true,
              "field_publication_year_in_book" : true,
              "field_publication_year_in_other" : true,
              "field_references_for_editions" : true,
              "field_references_notes" : true,
              "field_role_in_book_production" : true,
              "field_secondary_sources" : true,
              "field_sources_list" : true,
              "field_sources_references" : true,
              "field_structure_preface_notes" : true,
              "field_target_audience_notes" : true,
              "field_tel_aviv_library_id" : true,
              "field_textual_models_notes" : true,
              "field_title_in_latin_characters" : true,
              "field_topics_notes" : true,
              "field_total_number_of_editions" : true,
              "field_translation_references" : true,
              "field_translation_year" : true,
              "field_volumes_notes" : true,
              "field_volumes_published_number" : true,
              "field_edition_changes" : true,
              "field_edition_references" : true,
              "field_edition_year" : true,
              "field_name_in_book" : true,
              "field_person_book_references" : true,
              "field_producer_evidence" : true,
              "field_roles_notes" : true,
              "field_location" : true,
              "field_page" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_date_of_birth" : true,
              "field_date_of_death" : true,
              "field_german_name" : true,
              "field_hebrew_name" : true,
              "field_pseudonym" : true,
              "field_bar_ilan_library_id" : true,
              "field_berlin_library_id" : true,
              "field_book_availability_notes" : true,
              "field_book_structure_notes" : true,
              "field_british_library_id" : true,
              "field_catalog_numbers_notes" : true,
              "field_contemporary_references" : true,
              "field_contents_table_notes" : true,
              "field_copy_of_book_used" : true,
              "field_dedications_notes" : true,
              "field_diagrams_book_pages" : true,
              "field_diagrams_notes" : true,
              "field_diagrams_text" : true,
              "field_epilogue_notes" : true,
              "field_formatted_display_title" : true,
              "field_frankfurt_library_id" : true,
              "field_full_title" : true,
              "field_gregorian_year_pub_other" : true,
              "field_harvard_library_id" : true,
              "field_heb_year_publication_other" : true,
              "field_hebrew_year_of_publication" : true,
              "field_huji_library_id" : true,
              "field_last_known_edition" : true,
              "field_later_references" : true,
              "field_motto" : true,
              "field_new_york_library_id" : true,
              "field_other_books_names" : true,
              "field_other_libraries" : true,
              "field_other_volumes" : true,
              "field_pages_number" : true,
              "field_personal_addresse_notes" : true,
              "field_planned_volumes" : true,
              "field_preface_notes" : true,
              "field_preface_number" : true,
              "field_preface_title" : true,
              "field_price" : true,
              "field_printing_press_notes" : true,
              "field_printing_press_references" : true,
              "field_production_evidence" : true,
              "field_publication_year_in_book" : true,
              "field_publication_year_in_other" : true,
              "field_references_for_editions" : true,
              "field_references_notes" : true,
              "field_role_in_book_production" : true,
              "field_secondary_sources" : true,
              "field_sources_list" : true,
              "field_sources_references" : true,
              "field_structure_preface_notes" : true,
              "field_target_audience_notes" : true,
              "field_tel_aviv_library_id" : true,
              "field_textual_models_notes" : true,
              "field_title_in_latin_characters" : true,
              "field_topics_notes" : true,
              "field_total_number_of_editions" : true,
              "field_translation_references" : true,
              "field_translation_year" : true,
              "field_volumes_notes" : true,
              "field_volumes_published_number" : true,
              "field_edition_changes" : true,
              "field_edition_references" : true,
              "field_edition_year" : true,
              "field_name_in_book" : true,
              "field_person_book_references" : true,
              "field_producer_evidence" : true,
              "field_roles_notes" : true,
              "field_location" : true,
              "field_page" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_page().
 */
function haskala_search_default_search_api_page() {
  $items = array();
  $items['haskala'] = entity_import('search_api_page', '{
    "index_id" : "haskala",
    "path" : "search",
    "name" : "Haskala",
    "machine_name" : "haskala",
    "description" : "",
    "options" : {
      "mode" : "terms",
      "fields" : {
        "field_bar_ilan_library_id" : "field_bar_ilan_library_id",
        "field_berlin_library_id" : "field_berlin_library_id",
        "field_book_availability_notes" : "field_book_availability_notes",
        "field_book_structure_notes" : "field_book_structure_notes",
        "field_british_library_id" : "field_british_library_id",
        "field_catalog_numbers_notes" : "field_catalog_numbers_notes",
        "field_contemporary_references" : "field_contemporary_references",
        "field_contents_table_notes" : "field_contents_table_notes",
        "field_copy_of_book_used" : "field_copy_of_book_used",
        "field_date_of_birth" : "field_date_of_birth",
        "field_date_of_death" : "field_date_of_death",
        "field_dedications_notes" : "field_dedications_notes",
        "field_diagrams_book_pages" : "field_diagrams_book_pages",
        "field_diagrams_notes" : "field_diagrams_notes",
        "field_diagrams_text" : "field_diagrams_text",
        "field_edition_changes" : "field_edition_changes",
        "field_edition_references" : "field_edition_references",
        "field_edition_year" : "field_edition_year",
        "field_epilogue_notes" : "field_epilogue_notes",
        "field_formatted_display_title" : "field_formatted_display_title",
        "field_frankfurt_library_id" : "field_frankfurt_library_id",
        "field_full_title" : "field_full_title",
        "field_german_name" : "field_german_name",
        "field_gregorian_year_pub_other" : "field_gregorian_year_pub_other",
        "field_harvard_library_id" : "field_harvard_library_id",
        "field_heb_year_publication_other" : "field_heb_year_publication_other",
        "field_hebrew_name" : "field_hebrew_name",
        "field_hebrew_year_of_publication" : "field_hebrew_year_of_publication",
        "field_huji_library_id" : "field_huji_library_id",
        "field_last_known_edition" : "field_last_known_edition",
        "field_later_references" : "field_later_references",
        "field_location" : "field_location",
        "field_motto" : "field_motto",
        "field_name_in_book" : "field_name_in_book",
        "field_new_york_library_id" : "field_new_york_library_id",
        "field_other_books_names" : "field_other_books_names",
        "field_other_libraries" : "field_other_libraries",
        "field_other_volumes" : "field_other_volumes",
        "field_page" : "field_page",
        "field_pages_number" : "field_pages_number",
        "field_person_book_references" : "field_person_book_references",
        "field_personal_addresse_notes" : "field_personal_addresse_notes",
        "field_planned_volumes" : "field_planned_volumes",
        "field_preface_notes" : "field_preface_notes",
        "field_preface_number" : "field_preface_number",
        "field_preface_title" : "field_preface_title",
        "field_price" : "field_price",
        "field_printing_press_notes" : "field_printing_press_notes",
        "field_printing_press_references" : "field_printing_press_references",
        "field_producer_evidence" : "field_producer_evidence",
        "field_production_evidence" : "field_production_evidence",
        "field_pseudonym" : "field_pseudonym",
        "field_publication_year_in_book" : "field_publication_year_in_book",
        "field_publication_year_in_other" : "field_publication_year_in_other",
        "field_references_for_editions" : "field_references_for_editions",
        "field_references_notes" : "field_references_notes",
        "field_role_in_book_production" : "field_role_in_book_production",
        "field_roles_notes" : "field_roles_notes",
        "field_secondary_sources" : "field_secondary_sources",
        "field_sources_list" : "field_sources_list",
        "field_sources_references" : "field_sources_references",
        "field_structure_preface_notes" : "field_structure_preface_notes",
        "field_target_audience_notes" : "field_target_audience_notes",
        "field_tel_aviv_library_id" : "field_tel_aviv_library_id",
        "field_textual_models_notes" : "field_textual_models_notes",
        "field_title_in_latin_characters" : "field_title_in_latin_characters",
        "field_topics_notes" : "field_topics_notes",
        "field_total_number_of_editions" : "field_total_number_of_editions",
        "field_translation_references" : "field_translation_references",
        "field_translation_year" : "field_translation_year",
        "field_volumes_notes" : "field_volumes_notes",
        "field_volumes_published_number" : "field_volumes_published_number",
        "title" : "title"
      },
      "per_page" : "30",
      "result_page_search_form" : 1,
      "get_per_page" : 0,
      "view_mode" : "search_api_page_result"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function haskala_search_default_search_api_server() {
  $items = array();
  $items['index_depot'] = entity_import('search_api_server', '{
    "name" : "Index Depot",
    "machine_name" : "index_depot",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "www.indexdepot.com",
      "port" : "80",
      "path" : "\\/solr\\/5edf275522016919\\/",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
