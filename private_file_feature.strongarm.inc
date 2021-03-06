<?php
/**
 * @file
 * private_file_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function private_file_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = 'sites/default/files/private';
  $export['file_private_path'] = $strongarm;

  return $export;
}
