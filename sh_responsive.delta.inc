<?php
/**
 * @file
 * sh_responsive.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function sh_responsive_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'iisg_home';
  $delta->name = 'IISG home';
  $delta->description = '';
  $delta->theme = 'iisg';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_iisg_settings' => array(
      'favicon_path' => 'favicon.ico',
      'alpha_viewport' => 1,
      'alpha_viewport_max_scale' => '1.5',
      'alpha_viewport_user_scaleable' => 1,
      'alpha_toggle_feed_icons' => 0,
      'alpha_region_content_force' => 1,
      'alpha_region_content_weight' => '1',
      'alpha_region_sidebar_first_columns' => '3',
      'alpha_region_sidebar_first_weight' => '2',
      'alpha_region_sidebar_second_columns' => '3',
    ),
  );
  $export['iisg_home'] = $delta;

  return $export;
}
