<?php
/**
 * @file
 * luggage_bean_hero.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function luggage_bean_hero_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_hero_caption_color'.
  $field_bases['field_hero_caption_color'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hero_caption_color',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'bean-hero_overlay' => 'Overlay Caption',
        'bean-hero_red' => 'Red Caption',
        'bean-hero_blue' => 'Blue Caption',
        'bean-hero_green' => 'Green Caption',
        'bean-hero_dark-red' => 'Dark Red Caption',
        'bean-hero_dark-blue' => 'Dark Blue Caption',
        'bean-hero_dark-green' => 'Dark Green Caption',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_hero_caption_icon'.
  $field_bases['field_hero_caption_icon'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hero_caption_icon',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'fa-book' => 'Book',
        'fa-pencil' => 'Pencil',
        'fa-leaf' => 'Leaf',
        'fa-coffee' => 'Coffee',
        'fa-desktop' => 'Computer',
        'fa-play-circle ' => 'Play Button',
        'fa-newspaper-o' => 'Newspaper',
        'fa-calendar' => 'Calendar',
        'fa-file-text-o' => 'Text Document',
        'fa-envelope-o' => 'Envelope',
        'fa-phone' => 'Phone',
        'fa-star-o' => 'Star',
        'fa-heart-o' => 'Heart',
        'fa-map-marker' => 'Map Marker',
        'fa-graduation-cap' => 'Graduation Cap',
        'fa-area-chart' => 'Area Chart',
        'fa-bar-chart' => 'Bar Chart',
        'fa-pie-chart' => 'Pie Chart',
        'fa-facebook-official' => 'Facebook',
        'fa-twitter' => 'Twitter',
        'fa-youtube' => 'YouTube',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_hero_caption_position'.
  $field_bases['field_hero_caption_position'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hero_caption_position',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'bean-hero_right' => 'Right',
        'bean-hero_center' => 'Center',
        'bean-hero_bottom' => 'Bottom',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_hero_image'.
  $field_bases['field_hero_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hero_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_hero_text_size'.
  $field_bases['field_hero_text_size'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hero_text_size',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'bean-hero_text-sm' => 'Small Text',
        'bean-hero_text-md' => 'Medium Text',
        'bean-hero_text-lg' => 'Large Text',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_hero_url'.
  $field_bases['field_hero_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hero_url',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  return $field_bases;
}
