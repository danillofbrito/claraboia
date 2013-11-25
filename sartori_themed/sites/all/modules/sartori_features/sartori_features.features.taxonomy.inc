<?php
/**
 * @file
 * sartori_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function sartori_features_taxonomy_default_vocabularies() {
  return array(
    'acao' => array(
      'name' => 'Ação',
      'machine_name' => 'acao',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
    ),
    'escritorio' => array(
      'name' => 'Escritório',
      'machine_name' => 'escritorio',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
    ),
    'fase' => array(
      'name' => 'Fase',
      'machine_name' => 'fase',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -5,
    ),
    'instancia_inicial' => array(
      'name' => 'Instância Inicial',
      'machine_name' => 'instancia_inicial',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -3,
    ),
    'localizacao' => array(
      'name' => 'Localização',
      'machine_name' => 'localizacao',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'natureza' => array(
      'name' => 'Natureza',
      'machine_name' => 'natureza',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -2,
    ),
    'posicao_do_cliente' => array(
      'name' => 'Posição do Cliente',
      'machine_name' => 'posicao_do_cliente',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 2,
    ),
    'profissao' => array(
      'name' => 'Profissão',
      'machine_name' => 'profissao',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'rito' => array(
      'name' => 'Rito',
      'machine_name' => 'rito',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 5,
    ),
    'titulo' => array(
      'name' => 'Título',
      'machine_name' => 'titulo',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 8,
    ),
  );
}
