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
    'acao' => array(
      'name' => t('Ação'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nome da ação'),
      'help' => '',
    ),
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
      'title_label' => t('Nome'),
      'help' => '',
    ),
    'dados_da_pasta' => array(
      'name' => t('Dados da pasta'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'escritorio' => array(
      'name' => t('Escritório'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nome do escritório'),
      'help' => '',
    ),
    'fase' => array(
      'name' => t('Fase'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nome da fase'),
      'help' => '',
    ),
    'natureza' => array(
      'name' => t('Natureza'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nome da natureza'),
      'help' => '',
    ),
    'orgao_inicial' => array(
      'name' => t('Órgão Inicial'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nome do órgão inicial'),
      'help' => '',
    ),
    'posicao_do_cliente' => array(
      'name' => t('Posição do Cliente'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nome da posição do cliente'),
      'help' => '',
    ),
    'processo' => array(
      'name' => t('Processo'),
      'base' => 'node_content',
      'description' => t('Cadastro dos processos do escritório'),
      'has_title' => '1',
      'title_label' => t('Nome do Processo'),
      'help' => '',
    ),
    'rito' => array(
      'name' => t('Rito'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nome do rito'),
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
