<?php
/**
 * @file
 * sartori_features.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function sartori_features_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Campo numérico inicial';
  $rule->name = 'campo_numerico_inicial';
  $rule->field_name = 'field_n_inicial';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'dados_da_pasta';
  $rule->validator = 'field_validation_numeric2_validator';
  $rule->settings = array(
    'min' => '',
    'max' => '',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Somente números são permitidos';
  $export['campo_numerico_inicial'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Campo numérico principal';
  $rule->name = 'campo_numerico_principal';
  $rule->field_name = 'field_n_principal';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'dados_da_pasta';
  $rule->validator = 'field_validation_numeric2_validator';
  $rule->settings = array(
    'min' => '',
    'max' => '',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Número deve conter vinte algarismos';
  $export['campo_numerico_principal'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'email_validation';
  $rule->name = 'email_validation';
  $rule->field_name = 'field_email';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'contato';
  $rule->validator = 'field_validation_email_validator';
  $rule->settings = array(
    'errors' => 0,
  );
  $rule->error_message = 'Email em formato inválido';
  $export['email_validation'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Número de vinte digitos inicial';
  $rule->name = 'vinte_digitos_inicial';
  $rule->field_name = 'field_n_inicial';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'dados_da_pasta';
  $rule->validator = 'field_validation_length_validator';
  $rule->settings = array(
    'min' => '20',
    'max' => '20',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Número deve conter vinte algarismos';
  $export['vinte_digitos_inicial'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Número de vinte digitos';
  $rule->name = 'vinte_digitos_principal';
  $rule->field_name = 'field_n_principal';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'dados_da_pasta';
  $rule->validator = 'field_validation_length_validator';
  $rule->settings = array(
    'min' => '20',
    'max' => '20',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      4 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Número deve conter vinte algarismos';
  $export['vinte_digitos_principal'] = $rule;

  return $export;
}
