<?php
/**
 * @file
 * sh_responsive.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sh_responsive_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.7';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_css_selectors';
  $strongarm->value = '#block-nice-menus-1';
  $export['responsive_menus_css_selectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_disable_mouse_events';
  $strongarm->value = array(
    1 => '1',
  );
  $export['responsive_menus_disable_mouse_events'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_ignore_admin';
  $strongarm->value = array(
    1 => '1',
  );
  $export['responsive_menus_ignore_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_media_size';
  $strongarm->value = '980';
  $export['responsive_menus_media_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_no_jquery_update';
  $strongarm->value = array(
    1 => 0,
  );
  $export['responsive_menus_no_jquery_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_remove_attributes';
  $strongarm->value = array(
    1 => '1',
  );
  $export['responsive_menus_remove_attributes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_simple_absolute';
  $strongarm->value = array(
    1 => '1',
  );
  $export['responsive_menus_simple_absolute'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_simple_text';
  $strongarm->value = '<img src="/sites/all/themes/iisg/images/hamburger.png" alt="Menu"> Menu';
  $export['responsive_menus_simple_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'responsive_menus_style';
  $strongarm->value = 'responsive_menus_simple';
  $export['responsive_menus_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_iisg_alpha_css';
  $strongarm->value = array(
    'alpha-reset.css' => array(
      'name' => 'Reset',
      'description' => 'Created by <a href="http://meyerweb.com/eric/tools/css/reset/">Eric Meyer</a>.',
      'file' => 'alpha-reset.css',
      'path' => 'sites/all/themes/omega/alpha/css/alpha-reset.css',
      'options' => array(
        'weight' => '-20',
        'group' => 100,
      ),
    ),
    'alpha-mobile.css' => array(
      'name' => 'Mobile',
      'description' => 'Default stylesheet for mobile styles.',
      'file' => 'alpha-mobile.css',
      'path' => 'sites/all/themes/omega/alpha/css/alpha-mobile.css',
      'options' => array(
        'weight' => '-20',
        'group' => 100,
      ),
    ),
    'alpha-alpha.css' => array(
      'name' => 'Alpha',
      'description' => 'Default styles & resets for Alpha/Omega base theme.',
      'file' => 'alpha-alpha.css',
      'path' => 'sites/all/themes/omega/alpha/css/alpha-alpha.css',
      'options' => array(
        'weight' => '-20',
        'group' => 100,
      ),
    ),
    'omega-text.css' => array(
      'name' => 'Text Styles',
      'description' => 'Default text styles for Omega.',
      'file' => 'omega-text.css',
      'path' => 'sites/all/themes/omega/omega/css/omega-text.css',
      'options' => array(
        'weight' => '-10',
        'group' => 100,
      ),
    ),
    'omega-branding.css' => array(
      'name' => 'Branding Styles',
      'description' => 'Provides positioning for the logo, title and slogan.',
      'file' => 'omega-branding.css',
      'path' => 'sites/all/themes/omega/omega/css/omega-branding.css',
      'options' => array(
        'weight' => '-10',
        'group' => 100,
      ),
    ),
    'omega-menu.css' => array(
      'name' => 'Menu Styles',
      'description' => 'Provides positoning and basic CSS for primary and secondary menus.',
      'file' => 'omega-menu.css',
      'path' => 'sites/all/themes/omega/omega/css/omega-menu.css',
      'options' => array(
        'weight' => '-10',
        'group' => 100,
      ),
    ),
    'omega-forms.css' => array(
      'name' => 'Form Styles',
      'description' => 'Provides basic form styles.',
      'file' => 'omega-forms.css',
      'path' => 'sites/all/themes/omega/omega/css/omega-forms.css',
      'options' => array(
        'weight' => '-10',
        'group' => 100,
      ),
    ),
    'omega-visuals.css' => array(
      'name' => 'Omega Styles',
      'description' => 'Custom visual styles for Omega. (pagers, menus, etc.)',
      'file' => 'omega-visuals.css',
      'path' => 'sites/all/themes/omega/omega/css/omega-visuals.css',
      'options' => array(
        'weight' => '-10',
        'group' => 100,
      ),
    ),
    'mobile.css' => array(
      'name' => 'Mobile Styles',
      'description' => 'Your custom CSS for the mobile version of your website (mobile first).',
      'file' => 'mobile.css',
      'path' => 'sites/all/themes/iisg/css/mobile.css',
      'options' => array(
        'weight' => '-89',
        'group' => 100,
      ),
    ),
    'styles.css' => array(
      'name' => 'Main Styles',
      'description' => 'Your main custom CSS file.',
      'file' => 'styles.css',
      'path' => 'sites/all/themes/iisg/css/styles.css',
      'options' => array(
        'weight' => '10',
        'group' => 100,
      ),
    ),
  );
  $export['theme_iisg_alpha_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_iisg_alpha_grids';
  $strongarm->value = array(
    'alpha_default' => array(
      'name' => 'Default (960px)',
      'path' => 'sites/all/themes/omega/alpha/css/grid/alpha_default',
      'layouts' => array(
        'fluid' => array(
          'name' => 'Fluid',
          'attached' => array(),
        ),
        'narrow' => array(
          'name' => 'Narrow',
          'attached' => array(),
        ),
        'normal' => array(
          'name' => 'Normal',
          'attached' => array(),
        ),
        'wide' => array(
          'name' => 'Wide',
          'attached' => array(),
        ),
      ),
      'columns' => array(
        12 => '12 Columns',
        16 => '16 Columns',
        24 => '24 Columns',
      ),
    ),
    'alpha_fluid' => array(
      'name' => 'Fluid',
      'path' => 'sites/all/themes/omega/alpha/css/grid/alpha_fluid',
      'layouts' => array(
        'normal' => array(
          'name' => 'Normal',
          'attached' => array(),
        ),
      ),
      'columns' => array(
        12 => '12 Columns',
        16 => '16 Columns',
        24 => '24 Columns',
      ),
    ),
  );
  $export['theme_iisg_alpha_grids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_iisg_alpha_libraries';
  $strongarm->value = array(
    'omega_formalize' => array(
      'name' => 'Formalize',
      'description' => 'Formalize is a framework by <a href="http://formalize.me/" title="Formalize">Nathan Smith</a> for neat looking cross-browser forms with extended functionality.',
      'css' => array(
        0 => array(
          'path' => 'sites/all/themes/omega/omega/css/formalize.css',
          'options' => array(
            'weight' => '-20',
            'group' => 100,
          ),
        ),
      ),
      'js' => array(
        0 => array(
          'path' => 'sites/all/themes/omega/omega/js/jquery.formalize.js',
          'options' => array(
            'weight' => '-20',
            'group' => 100,
          ),
        ),
      ),
    ),
    'omega_equalheights' => array(
      'name' => 'Equal heights',
      'description' => 'Allows you to force all regions of a zone or all blocks of a region to be of equal size. <span class="marker">This library reveals a corresponding checkbox on every region and zone configuration panel if activated.</span>',
      'js' => array(
        0 => array(
          'path' => 'sites/all/themes/omega/omega/js/jquery.equalheights.js',
          'options' => array(
            'weight' => '-19',
            'group' => 100,
          ),
        ),
        1 => array(
          'path' => 'sites/all/themes/omega/omega/js/omega-equalheights.js',
          'options' => array(
            'weight' => '-19',
            'group' => 100,
          ),
        ),
      ),
    ),
    'omega_mediaqueries' => array(
      'name' => 'Media queries',
      'description' => 'Provides a tiny JavaScript library that can be used in your custom JavaScript.',
      'js' => array(
        0 => array(
          'path' => 'sites/all/themes/omega/omega/js/omega-mediaqueries.js',
          'options' => array(
            'weight' => '-18',
            'group' => 100,
          ),
        ),
      ),
    ),
  );
  $export['theme_iisg_alpha_libraries'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_iisg_alpha_registry';
  $strongarm->value = array(
    'preprocess' => array(
      'node' => array(
        0 => array(
          'type' => 'preprocess',
          'hook' => 'node',
          'theme' => 'iisg',
          'path' => '/home/www/deviisg.iisg.nl/public_html/sites/all/themes/omega/omega/preprocess/preprocess-node.inc',
          'function' => 'omega_alpha_preprocess_node',
        ),
      ),
      'region' => array(
        0 => array(
          'type' => 'preprocess',
          'hook' => 'region',
          'theme' => 'iisg',
          'path' => '/home/www/deviisg.iisg.nl/public_html/sites/all/themes/omega/alpha/preprocess/preprocess-region.inc',
          'function' => 'alpha_alpha_preprocess_region',
        ),
        1 => array(
          'type' => 'preprocess',
          'hook' => 'region',
          'theme' => 'iisg',
          'path' => '/home/www/deviisg.iisg.nl/public_html/sites/all/themes/omega/omega/preprocess/preprocess-region.inc',
          'function' => 'omega_alpha_preprocess_region',
        ),
      ),
      'block' => array(
        0 => array(
          'type' => 'preprocess',
          'hook' => 'block',
          'theme' => 'iisg',
          'path' => '/home/www/deviisg.iisg.nl/public_html/sites/all/themes/omega/alpha/preprocess/preprocess-block.inc',
          'function' => 'alpha_alpha_preprocess_block',
        ),
        1 => array(
          'type' => 'preprocess',
          'hook' => 'block',
          'theme' => 'iisg',
          'path' => '/home/www/deviisg.iisg.nl/public_html/sites/all/themes/omega/omega/preprocess/preprocess-block.inc',
          'function' => 'omega_alpha_preprocess_block',
        ),
      ),
      'html' => array(
        0 => array(
          'type' => 'preprocess',
          'hook' => 'html',
          'theme' => 'iisg',
          'path' => '/home/www/deviisg.iisg.nl/public_html/sites/all/themes/omega/alpha/preprocess/preprocess-html.inc',
          'function' => 'alpha_alpha_preprocess_html',
        ),
        1 => array(
          'type' => 'preprocess',
          'hook' => 'html',
          'theme' => 'iisg',
          'path' => '/home/www/deviisg.iisg.nl/public_html/sites/all/themes/omega/omega/preprocess/preprocess-html.inc',
          'function' => 'omega_alpha_preprocess_html',
        ),
      ),
      'zone' => array(
        0 => array(
          'type' => 'preprocess',
          'hook' => 'zone',
          'theme' => 'iisg',
          'path' => '/home/www/deviisg.iisg.nl/public_html/sites/all/themes/omega/omega/preprocess/preprocess-zone.inc',
          'function' => 'omega_alpha_preprocess_zone',
        ),
      ),
      'page' => array(
        0 => array(
          'type' => 'preprocess',
          'hook' => 'page',
          'theme' => 'iisg',
          'path' => '/home/www/deviisg.iisg.nl/public_html/sites/all/themes/omega/alpha/preprocess/preprocess-page.inc',
          'function' => 'alpha_alpha_preprocess_page',
        ),
      ),
    ),
    'process' => array(
      'region' => array(
        0 => array(
          'type' => 'process',
          'hook' => 'region',
          'theme' => 'iisg',
          'path' => '/home/www/deviisg.iisg.nl/public_html/sites/all/themes/omega/omega/process/process-region.inc',
          'function' => 'omega_alpha_process_region',
        ),
        1 => array(
          'type' => 'process',
          'hook' => 'region',
          'theme' => 'iisg',
          'path' => '/home/www/deviisg.iisg.nl/public_html/sites/all/themes/iisg/process/process-region.inc',
          'function' => 'iisg_alpha_process_region',
        ),
      ),
      'zone' => array(
        0 => array(
          'type' => 'process',
          'hook' => 'zone',
          'theme' => 'iisg',
          'path' => '/home/www/deviisg.iisg.nl/public_html/sites/all/themes/omega/omega/process/process-zone.inc',
          'function' => 'omega_alpha_process_zone',
        ),
        1 => array(
          'type' => 'process',
          'hook' => 'zone',
          'theme' => 'iisg',
          'path' => '/home/www/deviisg.iisg.nl/public_html/sites/all/themes/iisg/process/process-zone.inc',
          'function' => 'iisg_alpha_process_zone',
        ),
      ),
      'page' => array(
        0 => array(
          'type' => 'process',
          'hook' => 'page',
          'theme' => 'iisg',
          'path' => '/home/www/deviisg.iisg.nl/public_html/sites/all/themes/omega/alpha/process/process-page.inc',
          'function' => 'alpha_alpha_process_page',
        ),
      ),
    ),
  );
  $export['theme_iisg_alpha_registry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_iisg_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'sites/all/themes/iisg/images/logo-en.png',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'sites/default/files/favicon.ico',
    'favicon_upload' => '',
    'alpha_grid' => 'alpha_default',
    'alpha_responsive' => 1,
    'alpha_viewport' => 1,
    'alpha_viewport_initial_scale' => '1',
    'alpha_viewport_min_scale' => '1',
    'alpha_viewport_max_scale' => '1.5',
    'alpha_viewport_user_scaleable' => 1,
    'alpha_primary_alpha_default' => 'normal',
    'alpha_layouts_alpha_default_normal_responsive' => 1,
    'alpha_layouts_alpha_default_normal_weight' => '2',
    'alpha_layouts_alpha_default_normal_media' => 'all and (min-width: 980px) and (min-device-width: 980px), all and (max-device-width: 1024px) and (min-width: 1024px) and (orientation:landscape)',
    'alpha_layouts_alpha_default_fluid_responsive' => 0,
    'alpha_layouts_alpha_default_fluid_weight' => '0',
    'alpha_layouts_alpha_default_fluid_media' => 'all and (min-width: 740px) and (min-device-width: 740px), (max-device-width: 800px) and (min-width: 740px) and (orientation:landscape)',
    'alpha_layouts_alpha_default_narrow_responsive' => 0,
    'alpha_layouts_alpha_default_narrow_weight' => '1',
    'alpha_layouts_alpha_default_narrow_media' => 'all and (min-width: 740px) and (min-device-width: 740px), (max-device-width: 800px) and (min-width: 740px) and (orientation:landscape)',
    'alpha_layouts_alpha_default_wide_responsive' => 0,
    'alpha_layouts_alpha_default_wide_weight' => '3',
    'alpha_layouts_alpha_default_wide_media' => 'all and (min-width: 1220px)',
    'alpha_primary_alpha_fluid' => 'normal',
    'alpha_layouts_alpha_fluid_normal_responsive' => 0,
    'alpha_layouts_alpha_fluid_normal_weight' => '0',
    'alpha_layouts_alpha_fluid_normal_media' => 'all and (min-width: 740px) and (min-device-width: 740px), (max-device-width: 800px) and (min-width: 740px) and (orientation:landscape)',
    'alpha_libraries' => array(
      'omega_formalize' => 'omega_formalize',
      'omega_mediaqueries' => 'omega_mediaqueries',
      'omega_equalheights' => 'omega_equalheights',
    ),
    'alpha_css' => array(
      'alpha-reset.css' => 'alpha-reset.css',
      'alpha-mobile.css' => 'alpha-mobile.css',
      'alpha-alpha.css' => 'alpha-alpha.css',
      'omega-branding.css' => 'omega-branding.css',
      'omega-menu.css' => 'omega-menu.css',
      'omega-forms.css' => 'omega-forms.css',
      'styles.css' => 'styles.css',
      'omega-text.css' => 0,
      'omega-visuals.css' => 0,
      'mobile.css' => 0,
    ),
    'alpha_exclude' => array(
      'modules/aggregator/aggregator.css' => 'modules/aggregator/aggregator.css',
      'modules/field/theme/field.css' => 'modules/field/theme/field.css',
      'modules/node/node.css' => 'modules/node/node.css',
      'modules/search/search.css' => 'modules/search/search.css',
      'modules/user/user.css' => 'modules/user/user.css',
      'modules/block/block.css' => 'modules/block/block.css',
      'modules/dblog/dblog.css' => 'modules/dblog/dblog.css',
      'modules/file/file.css' => 'modules/file/file.css',
      'modules/filter/filter.css' => 'modules/filter/filter.css',
      'modules/help/help.css' => 'modules/help/help.css',
      'modules/menu/menu.css' => 'modules/menu/menu.css',
      'modules/openid/openid.css' => 'modules/openid/openid.css',
      'modules/profile/profile.css' => 'modules/profile/profile.css',
      'modules/statistics/statistics.css' => 'modules/statistics/statistics.css',
      'modules/syslog/syslog.css' => 'modules/syslog/syslog.css',
      'modules/system/admin.css' => 'modules/system/admin.css',
      'modules/system/maintenance.css' => 'modules/system/maintenance.css',
      'modules/system/system.css' => 'modules/system/system.css',
      'modules/system/system.admin.css' => 'modules/system/system.admin.css',
      'modules/system/system.maintenance.css' => 'modules/system/system.maintenance.css',
      'modules/system/system.menus.css' => 'modules/system/system.menus.css',
      'modules/system/system.messages.css' => 'modules/system/system.messages.css',
      'modules/taxonomy/taxonomy.css' => 'modules/taxonomy/taxonomy.css',
      'modules/tracker/tracker.css' => 'modules/tracker/tracker.css',
      'modules/update/update.css' => 'modules/update/update.css',
      'modules/book/book.css' => 0,
      'sites/all/modules/contrib/date/date_api/date.css' => 0,
      'sites/all/modules/contrib/date/date_popup/themes/datepicker.1.7.css' => 0,
      'sites/all/modules/contrib/extlink/extlink.css' => 0,
      'sites/all/modules/contrib/picture/picture_wysiwyg.css' => 0,
      'sites/all/modules/contrib/views/css/views.css' => 0,
      'misc/vertical-tabs.css' => 0,
      'modules/system/system.base.css' => 0,
      'modules/system/system.theme.css' => 0,
    ),
    'alpha_debug_block_toggle' => 0,
    'alpha_debug_block_active' => 0,
    'alpha_debug_grid_toggle' => 0,
    'alpha_debug_grid_active' => 0,
    'alpha_debug_grid_roles' => array(
      3 => '3',
      1 => 0,
      2 => 0,
      6 => 0,
      5 => 0,
      8 => 0,
      9 => 0,
      10 => 0,
      4 => 0,
      11 => 0,
      12 => 0,
      13 => 0,
      14 => 0,
      15 => 0,
      16 => 0,
      17 => 0,
    ),
    'alpha_toggle_messages' => 1,
    'alpha_toggle_action_links' => 1,
    'alpha_toggle_tabs' => 1,
    'alpha_toggle_breadcrumb' => 1,
    'alpha_toggle_page_title' => 1,
    'alpha_toggle_feed_icons' => 1,
    'alpha_hidden_title' => 0,
    'alpha_hidden_site_name' => 0,
    'alpha_hidden_site_slogan' => 0,
    'alpha_region_dashboard_sidebar_force' => 0,
    'alpha_region_dashboard_sidebar_zone' => NULL,
    'alpha_region_dashboard_sidebar_prefix' => '0',
    'alpha_region_dashboard_sidebar_columns' => '1',
    'alpha_region_dashboard_sidebar_suffix' => '0',
    'alpha_region_dashboard_sidebar_weight' => '-50',
    'alpha_region_dashboard_sidebar_position' => '0',
    'alpha_region_dashboard_sidebar_css' => '',
    'alpha_region_dashboard_sidebar_equal_height_element' => FALSE,
    'alpha_region_dashboard_sidebar_equal_height_container' => 0,
    'alpha_region_dashboard_main_force' => 0,
    'alpha_region_dashboard_main_zone' => NULL,
    'alpha_region_dashboard_main_prefix' => '0',
    'alpha_region_dashboard_main_columns' => '1',
    'alpha_region_dashboard_main_suffix' => '0',
    'alpha_region_dashboard_main_weight' => '-50',
    'alpha_region_dashboard_main_position' => '0',
    'alpha_region_dashboard_main_css' => '',
    'alpha_region_dashboard_main_equal_height_element' => FALSE,
    'alpha_region_dashboard_main_equal_height_container' => 0,
    'alpha_region_dashboard_inactive_force' => 0,
    'alpha_region_dashboard_inactive_zone' => NULL,
    'alpha_region_dashboard_inactive_prefix' => '0',
    'alpha_region_dashboard_inactive_columns' => '1',
    'alpha_region_dashboard_inactive_suffix' => '0',
    'alpha_region_dashboard_inactive_weight' => '-50',
    'alpha_region_dashboard_inactive_position' => '0',
    'alpha_region_dashboard_inactive_css' => '',
    'alpha_region_dashboard_inactive_equal_height_element' => FALSE,
    'alpha_region_dashboard_inactive_equal_height_container' => 0,
    'alpha_zone_user_wrapper' => 1,
    'alpha_zone_user_force' => 0,
    'alpha_zone_user_order' => 0,
    'alpha_zone_user_section' => 'header',
    'alpha_zone_user_weight' => '1',
    'alpha_zone_user_columns' => '12',
    'alpha_zone_user_primary' => NULL,
    'alpha_zone_user_css' => '',
    'alpha_zone_user_wrapper_css' => '',
    'alpha_zone_user_equal_height_container' => 0,
    'alpha_region_user_first_force' => 0,
    'alpha_region_user_first_zone' => 'user',
    'alpha_region_user_first_prefix' => '0',
    'alpha_region_user_first_columns' => '8',
    'alpha_region_user_first_suffix' => '0',
    'alpha_region_user_first_weight' => '1',
    'alpha_region_user_first_position' => '0',
    'alpha_region_user_first_css' => '',
    'alpha_region_user_first_equal_height_element' => 0,
    'alpha_region_user_first_equal_height_container' => 0,
    'alpha_region_user_second_force' => 0,
    'alpha_region_user_second_zone' => 'user',
    'alpha_region_user_second_prefix' => '0',
    'alpha_region_user_second_columns' => '4',
    'alpha_region_user_second_suffix' => '0',
    'alpha_region_user_second_weight' => '2',
    'alpha_region_user_second_position' => '0',
    'alpha_region_user_second_css' => '',
    'alpha_region_user_second_equal_height_element' => 0,
    'alpha_region_user_second_equal_height_container' => 0,
    'alpha_zone_branding_wrapper' => 1,
    'alpha_zone_branding_force' => 0,
    'alpha_zone_branding_order' => 0,
    'alpha_zone_branding_section' => 'header',
    'alpha_zone_branding_weight' => '2',
    'alpha_zone_branding_columns' => '12',
    'alpha_zone_branding_primary' => NULL,
    'alpha_zone_branding_css' => '',
    'alpha_zone_branding_wrapper_css' => '',
    'alpha_zone_branding_equal_height_container' => 0,
    'alpha_region_branding_force' => 1,
    'alpha_region_branding_zone' => 'branding',
    'alpha_region_branding_prefix' => '0',
    'alpha_region_branding_columns' => '12',
    'alpha_region_branding_suffix' => '0',
    'alpha_region_branding_weight' => '1',
    'alpha_region_branding_position' => '0',
    'alpha_region_branding_css' => '',
    'alpha_region_branding_equal_height_element' => 0,
    'alpha_region_branding_equal_height_container' => 0,
    'alpha_zone_menu_wrapper' => 1,
    'alpha_zone_menu_force' => 0,
    'alpha_zone_menu_order' => 0,
    'alpha_zone_menu_section' => 'header',
    'alpha_zone_menu_weight' => '3',
    'alpha_zone_menu_columns' => '12',
    'alpha_zone_menu_primary' => NULL,
    'alpha_zone_menu_css' => '',
    'alpha_zone_menu_wrapper_css' => '',
    'alpha_zone_menu_equal_height_container' => 0,
    'alpha_region_menu_first_force' => 0,
    'alpha_region_menu_first_zone' => 'menu',
    'alpha_region_menu_first_prefix' => '0',
    'alpha_region_menu_first_columns' => '8',
    'alpha_region_menu_first_suffix' => '0',
    'alpha_region_menu_first_weight' => '0',
    'alpha_region_menu_first_position' => '0',
    'alpha_region_menu_first_css' => '',
    'alpha_region_menu_first_equal_height_element' => 0,
    'alpha_region_menu_first_equal_height_container' => 0,
    'alpha_region_menu_second_force' => 0,
    'alpha_region_menu_second_zone' => 'menu',
    'alpha_region_menu_second_prefix' => '0',
    'alpha_region_menu_second_columns' => '4',
    'alpha_region_menu_second_suffix' => '0',
    'alpha_region_menu_second_weight' => '1',
    'alpha_region_menu_second_position' => '0',
    'alpha_region_menu_second_css' => '',
    'alpha_region_menu_second_equal_height_element' => 0,
    'alpha_region_menu_second_equal_height_container' => 0,
    'alpha_zone_header_wrapper' => 1,
    'alpha_zone_header_force' => 0,
    'alpha_zone_header_order' => 0,
    'alpha_zone_header_section' => 'header',
    'alpha_zone_header_weight' => '4',
    'alpha_zone_header_columns' => '12',
    'alpha_zone_header_primary' => NULL,
    'alpha_zone_header_css' => '',
    'alpha_zone_header_wrapper_css' => '',
    'alpha_zone_header_equal_height_container' => 0,
    'alpha_region_header_first_force' => 0,
    'alpha_region_header_first_zone' => 'header',
    'alpha_region_header_first_prefix' => '0',
    'alpha_region_header_first_columns' => '12',
    'alpha_region_header_first_suffix' => '0',
    'alpha_region_header_first_weight' => '1',
    'alpha_region_header_first_position' => '0',
    'alpha_region_header_first_css' => '',
    'alpha_region_header_first_equal_height_element' => 0,
    'alpha_region_header_first_equal_height_container' => 0,
    'alpha_region_header_second_force' => 0,
    'alpha_region_header_second_zone' => 'header',
    'alpha_region_header_second_prefix' => '0',
    'alpha_region_header_second_columns' => '12',
    'alpha_region_header_second_suffix' => '0',
    'alpha_region_header_second_weight' => '2',
    'alpha_region_header_second_position' => '0',
    'alpha_region_header_second_css' => '',
    'alpha_region_header_second_equal_height_element' => 0,
    'alpha_region_header_second_equal_height_container' => 0,
    'alpha_zone_preface_wrapper' => 1,
    'alpha_zone_preface_force' => 1,
    'alpha_zone_preface_order' => 0,
    'alpha_zone_preface_section' => 'content',
    'alpha_zone_preface_weight' => '1',
    'alpha_zone_preface_columns' => '12',
    'alpha_zone_preface_primary' => NULL,
    'alpha_zone_preface_css' => '',
    'alpha_zone_preface_wrapper_css' => '',
    'alpha_zone_preface_equal_height_container' => 0,
    'alpha_region_preface_first_force' => 0,
    'alpha_region_preface_first_zone' => 'preface',
    'alpha_region_preface_first_prefix' => '0',
    'alpha_region_preface_first_columns' => '6',
    'alpha_region_preface_first_suffix' => '0',
    'alpha_region_preface_first_weight' => '1',
    'alpha_region_preface_first_position' => '0',
    'alpha_region_preface_first_css' => '',
    'alpha_region_preface_first_equal_height_element' => 0,
    'alpha_region_preface_first_equal_height_container' => 0,
    'alpha_region_preface_second_force' => 0,
    'alpha_region_preface_second_zone' => 'preface',
    'alpha_region_preface_second_prefix' => '0',
    'alpha_region_preface_second_columns' => '6',
    'alpha_region_preface_second_suffix' => '0',
    'alpha_region_preface_second_weight' => '2',
    'alpha_region_preface_second_position' => '0',
    'alpha_region_preface_second_css' => '',
    'alpha_region_preface_second_equal_height_element' => 0,
    'alpha_region_preface_second_equal_height_container' => 0,
    'alpha_zone_content_wrapper' => 1,
    'alpha_zone_content_force' => 1,
    'alpha_zone_content_order' => 0,
    'alpha_zone_content_section' => 'content',
    'alpha_zone_content_weight' => '2',
    'alpha_zone_content_columns' => '12',
    'alpha_zone_content_primary' => 'content',
    'alpha_zone_content_css' => '',
    'alpha_zone_content_wrapper_css' => '',
    'alpha_zone_content_equal_height_container' => 0,
    'alpha_region_sidebar_first_force' => 1,
    'alpha_region_sidebar_first_zone' => 'content',
    'alpha_region_sidebar_first_prefix' => '0',
    'alpha_region_sidebar_first_columns' => '2',
    'alpha_region_sidebar_first_suffix' => '0',
    'alpha_region_sidebar_first_weight' => '1',
    'alpha_region_sidebar_first_position' => '0',
    'alpha_region_sidebar_first_css' => '',
    'alpha_region_sidebar_first_equal_height_element' => 0,
    'alpha_region_sidebar_first_equal_height_container' => 0,
    'alpha_region_content_force' => 0,
    'alpha_region_content_zone' => 'content',
    'alpha_region_content_prefix' => '0',
    'alpha_region_content_columns' => '6',
    'alpha_region_content_suffix' => '0',
    'alpha_region_content_weight' => '2',
    'alpha_region_content_position' => '0',
    'alpha_region_content_css' => '',
    'alpha_region_content_equal_height_element' => 0,
    'alpha_region_content_equal_height_container' => 0,
    'alpha_region_sidebar_second_force' => 1,
    'alpha_region_sidebar_second_zone' => 'content',
    'alpha_region_sidebar_second_prefix' => '0',
    'alpha_region_sidebar_second_columns' => '4',
    'alpha_region_sidebar_second_suffix' => '0',
    'alpha_region_sidebar_second_weight' => '3',
    'alpha_region_sidebar_second_position' => '0',
    'alpha_region_sidebar_second_css' => '',
    'alpha_region_sidebar_second_equal_height_element' => 0,
    'alpha_region_sidebar_second_equal_height_container' => 0,
    'alpha_zone_postscript_wrapper' => 1,
    'alpha_zone_postscript_force' => 0,
    'alpha_zone_postscript_order' => 0,
    'alpha_zone_postscript_section' => 'content',
    'alpha_zone_postscript_weight' => '3',
    'alpha_zone_postscript_columns' => '12',
    'alpha_zone_postscript_primary' => NULL,
    'alpha_zone_postscript_css' => '',
    'alpha_zone_postscript_wrapper_css' => '',
    'alpha_zone_postscript_equal_height_container' => 0,
    'alpha_region_postscript_first_force' => 0,
    'alpha_region_postscript_first_zone' => 'postscript',
    'alpha_region_postscript_first_prefix' => '0',
    'alpha_region_postscript_first_columns' => '3',
    'alpha_region_postscript_first_suffix' => '0',
    'alpha_region_postscript_first_weight' => '1',
    'alpha_region_postscript_first_position' => '0',
    'alpha_region_postscript_first_css' => '',
    'alpha_region_postscript_first_equal_height_element' => 0,
    'alpha_region_postscript_first_equal_height_container' => 0,
    'alpha_region_postscript_second_force' => 0,
    'alpha_region_postscript_second_zone' => 'postscript',
    'alpha_region_postscript_second_prefix' => '0',
    'alpha_region_postscript_second_columns' => '3',
    'alpha_region_postscript_second_suffix' => '0',
    'alpha_region_postscript_second_weight' => '2',
    'alpha_region_postscript_second_position' => '0',
    'alpha_region_postscript_second_css' => 'settings[alpha_region_postscript_third_equal_height] = \'\'',
    'alpha_region_postscript_second_equal_height_element' => 0,
    'alpha_region_postscript_second_equal_height_container' => 0,
    'alpha_region_postscript_third_force' => 0,
    'alpha_region_postscript_third_zone' => 'postscript',
    'alpha_region_postscript_third_prefix' => '0',
    'alpha_region_postscript_third_columns' => '3',
    'alpha_region_postscript_third_suffix' => '0',
    'alpha_region_postscript_third_weight' => '3',
    'alpha_region_postscript_third_position' => '0',
    'alpha_region_postscript_third_css' => '',
    'alpha_region_postscript_third_equal_height_element' => 0,
    'alpha_region_postscript_third_equal_height_container' => 0,
    'alpha_region_postscript_fourth_force' => 0,
    'alpha_region_postscript_fourth_zone' => 'postscript',
    'alpha_region_postscript_fourth_prefix' => '0',
    'alpha_region_postscript_fourth_columns' => '3',
    'alpha_region_postscript_fourth_suffix' => '0',
    'alpha_region_postscript_fourth_weight' => '4',
    'alpha_region_postscript_fourth_position' => '0',
    'alpha_region_postscript_fourth_css' => '',
    'alpha_region_postscript_fourth_equal_height_element' => 0,
    'alpha_region_postscript_fourth_equal_height_container' => 0,
    'alpha_zone_footer_wrapper' => 1,
    'alpha_zone_footer_force' => 0,
    'alpha_zone_footer_order' => 0,
    'alpha_zone_footer_section' => 'footer',
    'alpha_zone_footer_weight' => '1',
    'alpha_zone_footer_columns' => '12',
    'alpha_zone_footer_primary' => NULL,
    'alpha_zone_footer_css' => '',
    'alpha_zone_footer_wrapper_css' => '',
    'alpha_zone_footer_equal_height_container' => 0,
    'alpha_region_footer_first_force' => 0,
    'alpha_region_footer_first_zone' => 'footer',
    'alpha_region_footer_first_prefix' => '0',
    'alpha_region_footer_first_columns' => '6',
    'alpha_region_footer_first_suffix' => '0',
    'alpha_region_footer_first_weight' => '1',
    'alpha_region_footer_first_position' => '0',
    'alpha_region_footer_first_css' => '',
    'alpha_region_footer_first_equal_height_element' => 0,
    'alpha_region_footer_first_equal_height_container' => 0,
    'alpha_region_footer_second_force' => 0,
    'alpha_region_footer_second_zone' => 'footer',
    'alpha_region_footer_second_prefix' => '0',
    'alpha_region_footer_second_columns' => '2',
    'alpha_region_footer_second_suffix' => '0',
    'alpha_region_footer_second_weight' => '2',
    'alpha_region_footer_second_position' => '0',
    'alpha_region_footer_second_css' => '',
    'alpha_region_footer_second_equal_height_element' => 0,
    'alpha_region_footer_second_equal_height_container' => 0,
    'alpha_region_footer_third_force' => 0,
    'alpha_region_footer_third_zone' => 'footer',
    'alpha_region_footer_third_prefix' => '0',
    'alpha_region_footer_third_columns' => '2',
    'alpha_region_footer_third_suffix' => '0',
    'alpha_region_footer_third_weight' => '3',
    'alpha_region_footer_third_position' => '0',
    'alpha_region_footer_third_css' => '',
    'alpha_region_footer_third_equal_height_element' => 0,
    'alpha_region_footer_third_equal_height_container' => 0,
    'alpha_region_footer_fourth_force' => 0,
    'alpha_region_footer_fourth_zone' => 'footer',
    'alpha_region_footer_fourth_prefix' => '0',
    'alpha_region_footer_fourth_columns' => '2',
    'alpha_region_footer_fourth_suffix' => '0',
    'alpha_region_footer_fourth_weight' => '4',
    'alpha_region_footer_fourth_position' => '0',
    'alpha_region_footer_fourth_css' => '',
    'alpha_region_footer_fourth_equal_height_element' => 0,
    'alpha_region_footer_fourth_equal_height_container' => 0,
    'jquery_update_jquery_version' => '',
    'nice_menus_custom_css' => 'sites/all/themes/iisg/css/menu.css',
    'favicon_mimetype' => 'image/vnd.microsoft.icon',
  );
  $export['theme_iisg_settings'] = $strongarm;

  return $export;
}
