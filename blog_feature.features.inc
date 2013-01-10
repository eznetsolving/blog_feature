<?php
/**
 * @file
 * blog_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blog_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function blog_feature_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function blog_feature_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => t('This is a blog.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'naujas' => array(
      'name' => t('naujas'),
      'base' => 'node_content',
      'description' => t('test turinio tipas'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
