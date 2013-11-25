<?php
/**
 * @file
 * sartori_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sartori_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function sartori_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sartori_features_node_info() {
  $items = array(
    'andamento_processual' => array(
      'name' => t('Andamento Processual'),
      'base' => 'node_content',
      'description' => t('Cadastro dos andamentos processuais'),
      'has_title' => '1',
      'title_label' => t('Autor do andamento'),
      'help' => '',
    ),
    'contato' => array(
      'name' => t('Contato'),
      'base' => 'node_content',
      'description' => t('Esses serão os contatos dos advogados do sistema'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'dados_da_pasta' => array(
      'name' => t('Processo'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pasta'),
      'help' => '',
    ),
    'processo' => array(
      'name' => t('Processo_old'),
      'base' => 'node_content',
      'description' => t('Cadastro dos processos do escritório'),
      'has_title' => '1',
      'title_label' => t('Nome do Processo'),
      'help' => '',
    ),
    'tabela_de_horas' => array(
      'name' => t('Tabela de Horas'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nome da tabela de valores'),
      'help' => '',
    ),
  );
  return $items;
}
