<?php
/**
 * @file
 * sartori_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function sartori_features_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dados_da_pasta|node|dados_da_pasta|form';
  $field_group->group_name = 'group_dados_da_pasta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dados_da_pasta';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_processo';
  $field_group->data = array(
    'label' => 'Dados da Pasta',
    'weight' => '24',
    'children' => array(
      0 => 'field_data_de_distribuicao',
      1 => 'field_cliente',
      2 => 'field_instancia_inicial',
      3 => 'field_advogado_responsavel',
      4 => 'field_fase',
      5 => 'field_acao',
      6 => 'field_natureza',
      7 => 'field_rito',
      8 => 'field_orgao_inicial',
      9 => 'field_posicao_do_cliente',
      10 => 'field_tabela_horas',
      11 => 'field_parte_contraria',
      12 => 'field_advogado_contrario',
      13 => 'title',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dados-da-pasta field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dados_da_pasta|node|dados_da_pasta|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exito_ou_perda|node|dados_da_pasta|form';
  $field_group->group_name = 'group_exito_ou_perda';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dados_da_pasta';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_previsao_resultados';
  $field_group->data = array(
    'label' => 'Probabilidade de Êxito ou Perda',
    'weight' => '33',
    'children' => array(
      0 => 'field_perda_ou_exito',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exito-ou-perda field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_exito_ou_perda|node|dados_da_pasta|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|dados_da_pasta|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dados_da_pasta';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_processo';
  $field_group->data = array(
    'label' => 'Informações',
    'weight' => '23',
    'children' => array(
      0 => 'field_escritorio_de_origem',
      1 => 'field_escritorio_responsavel',
      2 => 'field_id_pasta',
      3 => 'field_n_inicial',
      4 => 'field_n_principal',
      5 => 'field_status',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Informações',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-info field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_info|node|dados_da_pasta|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objetos_e_pedidos|node|dados_da_pasta|form';
  $field_group->group_name = 'group_objetos_e_pedidos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dados_da_pasta';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_processo';
  $field_group->data = array(
    'label' => 'Objetos e Pedidos',
    'weight' => '26',
    'children' => array(
      0 => 'field_observacoes',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-objetos-e-pedidos field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_objetos_e_pedidos|node|dados_da_pasta|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_previsao_resultados|node|dados_da_pasta|form';
  $field_group->group_name = 'group_previsao_resultados';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dados_da_pasta';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_processo';
  $field_group->data = array(
    'label' => 'Previsão / Resultados',
    'weight' => '27',
    'children' => array(
      0 => 'group_exito_ou_perda',
      1 => 'group_risco_e_resultado',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-previsao-resultados field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_previsao_resultados|node|dados_da_pasta|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_processo|node|dados_da_pasta|form';
  $field_group->group_name = 'group_processo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dados_da_pasta';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Processo',
    'weight' => '1',
    'children' => array(
      0 => 'group_info',
      1 => 'group_dados_da_pasta',
      2 => 'group_envolvidos',
      3 => 'group_objetos_e_pedidos',
      4 => 'group_previsao_resultados',
      5 => 'group_valores',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => '',
      ),
    ),
  );
  $export['group_processo|node|dados_da_pasta|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_risco_e_resultado|node|dados_da_pasta|form';
  $field_group->group_name = 'group_risco_e_resultado';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dados_da_pasta';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_previsao_resultados';
  $field_group->data = array(
    'label' => 'Risco e Resultado',
    'weight' => '34',
    'children' => array(
      0 => 'field_data_de_dist_resultado',
      1 => 'field_data_ingresso',
      2 => 'field_data_da_decisao',
      3 => 'field_data_da_baixa',
      4 => 'field_data_do_encerramento',
      5 => 'field_variacao_na_data_planejada',
      6 => 'field_status_da_pontualidade',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-risco-e-resultado field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_risco_e_resultado|node|dados_da_pasta|form'] = $field_group;

  return $export;
}
