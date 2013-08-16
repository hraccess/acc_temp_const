<?php
/**
 * @file
 * acc_temp_const.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function acc_temp_const_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function acc_temp_const_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function acc_temp_const_node_info() {
  $items = array(
    'acc_temporary_constraint' => array(
      'name' => t('Temporary Constraint'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
