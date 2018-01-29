<?php
/**
 * @file
 * luggage_bean_hero.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function luggage_bean_hero_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-hero-field_hero_caption_color'.
  $field_instances['bean-hero-field_hero_caption_color'] = array(
    'bundle' => 'hero',
    'default_value' => array(
      0 => array(
        'value' => 'bean-hero_overlay',
      ),
    ),
    'deleted' => 0,
    'description' => 'Choose the color of the caption background. The default is a dark overlay.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_hero_caption_color',
    'label' => 'Caption Color',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-hero-field_hero_caption_icon'.
  $field_instances['bean-hero-field_hero_caption_icon'] = array(
    'bundle' => 'hero',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the icon that will appear in the caption. Optional.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_hero_caption_icon',
    'label' => 'Icon',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bean-hero-field_hero_caption_position'.
  $field_instances['bean-hero-field_hero_caption_position'] = array(
    'bundle' => 'hero',
    'default_value' => array(
      0 => array(
        'value' => 'bean-hero_right',
      ),
    ),
    'deleted' => 0,
    'description' => 'Choose where the caption will appear on the hero image. The default will be on the right.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_hero_caption_position',
    'label' => 'Caption Position',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'bean-hero-field_hero_image'.
  $field_instances['bean-hero-field_hero_image'] = array(
    'bundle' => 'hero',
    'deleted' => 0,
    'description' => 'This is the hero banner image. Recommended image width is 1500px.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_hero_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'alt_field_required' => 0,
      'default_image' => 0,
      'file_directory' => 'hero/images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'title_field_required' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_announcement_full' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_people_full' => 0,
          'image_people_thumb' => 0,
          'image_sceenshot_medium_200' => 0,
          'image_screenshot_thumbnail' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'large',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'bean-hero-field_hero_text_size'.
  $field_instances['bean-hero-field_hero_text_size'] = array(
    'bundle' => 'hero',
    'default_value' => array(
      0 => array(
        'value' => 'bean-hero_text-md',
      ),
    ),
    'deleted' => 0,
    'description' => 'Choose the size of the caption text. Default is medium.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_hero_text_size',
    'label' => 'Text Size',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'bean-hero-field_hero_url'.
  $field_instances['bean-hero-field_hero_url'] = array(
    'bundle' => 'hero',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the URL that you want the caption to link to. Optional.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_hero_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Caption Color');
  t('Caption Position');
  t('Choose the color of the caption background. The default is a dark overlay.');
  t('Choose the size of the caption text. Default is medium.');
  t('Choose where the caption will appear on the hero image. The default will be on the right.');
  t('Enter the URL that you want the caption to link to. Optional.');
  t('Icon');
  t('Image');
  t('Text Size');
  t('This is the hero banner image. Recommended image width is 1500px.');
  t('This is the icon that will appear in the caption. Optional.');
  t('URL');

  return $field_instances;
}
