<?php
/**
 * @file
 * blog_feature.features.inc
 */

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
  );
  return $items;
}
