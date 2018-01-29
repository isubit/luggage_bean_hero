<div class="bean-hero <?php print $bean->field_hero_caption_position['und'][0]['value'] ?> <?php print $bean->field_hero_caption_color['und'][0]['value'] ?> <?php print $bean->field_hero_text_size['und'][0]['value'] ?>" <?php print $attributes; ?>>

  <img class="bean-hero_image" src="<?php print file_create_url($bean->field_hero_image['und'][0]['uri']); ?>" alt="<?php print $bean->field_hero_image['und'][0]['alt']; ?>">

  <div class="bean-hero_caption">
    <?php if ($bean->title !== ''): ?>

      <?php if (isset($bean->field_hero_url['und'][0]['url'])) : ?>
      <a class="bean-hero_link" href="<?php print $bean->field_hero_url['und'][0]['url']; ?>">
      <?php endif; ?>

        <p class="bean-hero_label">
          <?php if (isset($bean->field_hero_caption_icon['und'][0]['value'])): ?>
            <span class="fa <?php print $bean->field_hero_caption_icon['und'][0]['value']; ?>"></span>
          <?php endif; ?>

          <span><?php print $title; ?></span>
        </p>

      <?php if(isset($bean->field_hero_url['und'][0]['url'])) : ?>
      </a>
      <?php endif; ?>

    <?php endif ?>
  </div>
</div>