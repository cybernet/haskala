<?php

/**
 * Preprocess page.
 */
function haskala_theme_preprocess_page(&$variables) {
  $variables['top_menu'] = menu_tree('menu-top-menu');
  $variables['user_menu'] = menu_tree('user-menu');
}