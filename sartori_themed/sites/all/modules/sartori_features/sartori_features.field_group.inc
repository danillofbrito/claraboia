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
  $field_group->identifier = 'group_cnpj|node|contato|form';
  $field_group->group_name = 'group_cnpj';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contato';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dados_empresa';
  $field_group->data = array(
    'label' => 'CNPJ',
    'weight' => '6',
    'children' => array(
      0 => 'field_numero_cnpj',
      1 => 'field_cnpj_nao_disponivel',
      2 => 'field_justificativa_cnpj',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cnpj|node|contato|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_config_endereco|node|contato|form';
  $field_group->group_name = 'group_config_endereco';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contato';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_enderecos_telefones';
  $field_group->data = array(
    'label' => 'Configurações do endereço',
    'weight' => '55',
    'children' => array(
      0 => 'field_endereco_para',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_config_endereco|node|contato|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contato|node|contato|form';
  $field_group->group_name = 'group_contato';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contato';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contato',
    'weight' => '1',
    'children' => array(
      0 => 'group_dados_pessoais',
      1 => 'group_enderecos_telefones',
      2 => 'group_dados_empresa',
      3 => 'group_info',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => 'group-contato field-group-accordion',
      ),
    ),
  );
  $export['group_contato|node|contato|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cpf|node|contato|form';
  $field_group->group_name = 'group_cpf';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contato';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dados_pessoais';
  $field_group->data = array(
    'label' => 'CPF',
    'weight' => '45',
    'children' => array(
      0 => 'field_numero_cpf',
      1 => 'field_cpf_nao_disponivel',
      2 => 'field_justificativa_cpf',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cpf field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cpf|node|contato|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ctps|node|contato|form';
  $field_group->group_name = 'group_ctps';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contato';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dados_pessoais';
  $field_group->data = array(
    'label' => 'CTPS',
    'weight' => '42',
    'children' => array(
      0 => 'field_numero_ctps',
      1 => 'field_serie_ctps',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ctps field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ctps|node|contato|form'] = $field_group;

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
      0 => 'field_advogado_contrario',
      1 => 'field_cliente',
      2 => 'field_data_de_distribuicao',
      3 => 'field_parte_contraria',
      4 => 'field_tabela_horas',
      5 => 'field_titulo',
      6 => 'field_instancia_inicial',
      7 => 'field_fase',
      8 => 'field_acao',
      9 => 'field_natureza',
      10 => 'field_rito',
      11 => 'field_advogado_responsavel',
      12 => 'field_posicao_do_cliente',
      13 => 'field_orgao_inicial',
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
  $field_group->identifier = 'group_dados_empresa|node|contato|form';
  $field_group->group_name = 'group_dados_empresa';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contato';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contato';
  $field_group->data = array(
    'label' => 'Dados da Empresa / Órgão',
    'weight' => '69',
    'children' => array(
      0 => 'field_insc_estadual',
      1 => 'field_insc_municipal',
      2 => 'field_nome_fantasia',
      3 => 'field_codigo_empresa',
      4 => 'group_cnpj',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dados-empresa field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dados_empresa|node|contato|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dados_pessoais|node|contato|form';
  $field_group->group_name = 'group_dados_pessoais';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contato';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contato';
  $field_group->data = array(
    'label' => 'Dados Pessoais',
    'weight' => '68',
    'children' => array(
      0 => 'field_sexo',
      1 => 'field_oab',
      2 => 'field_tratamento',
      3 => 'field_estado_civil',
      4 => 'field_nacionalidade',
      5 => 'field_doc_de_identidade',
      6 => 'field_profissao_ocupacao',
      7 => 'field_matricula_codigo',
      8 => 'field_data_de_nascimento',
      9 => 'field_n_titulo_de_eleitor',
      10 => 'field_colaborador_do_escritorio',
      11 => 'group_cpf',
      12 => 'group_ctps',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dados-pessoais field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dados_pessoais|node|contato|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_enderecos_telefones|node|contato|form';
  $field_group->group_name = 'group_enderecos_telefones';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contato';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contato';
  $field_group->data = array(
    'label' => 'Endereços e Telefones',
    'weight' => '70',
    'children' => array(
      0 => 'field_bairro',
      1 => 'field_cep',
      2 => 'field_email',
      3 => 'field_endereco',
      4 => 'field_website',
      5 => 'field_localizacao',
      6 => 'field_local',
      7 => 'field_complemento',
      8 => 'field_pessoa_de_contato',
      9 => 'group_telefones',
      10 => 'group_config_endereco',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-enderecos-telefones field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_enderecos_telefones|node|contato|form'] = $field_group;

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
  $field_group->identifier = 'group_info|node|contato|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contato';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contato';
  $field_group->data = array(
    'label' => 'Informações',
    'weight' => '62',
    'children' => array(
      0 => 'field_tipo_do_contato',
      1 => 'field_tipo_de_escritorio',
      2 => 'field_razao_social',
      3 => 'field_tipo_de_pessoa',
      4 => 'field_nome',
      5 => 'title',
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
  $export['group_info|node|contato|form'] = $field_group;

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
      0 => 'field_status',
      1 => 'field_contrato',
      2 => 'field_n_inicial',
      3 => 'field_n_principal',
      4 => 'field_escritorio_de_origem',
      5 => 'field_escritorio_responsavel',
      6 => 'title',
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
      1 => 'field_objetos',
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
      0 => 'group_dados_da_pasta',
      1 => 'group_info',
      2 => 'group_objetos_e_pedidos',
      3 => 'group_previsao_resultados',
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
      0 => 'field_data_da_baixa',
      1 => 'field_data_da_decisao',
      2 => 'field_data_de_dist_resultado',
      3 => 'field_data_do_encerramento',
      4 => 'field_data_ingresso',
      5 => 'field_status_da_pontualidade',
      6 => 'field_variacao_na_data_planejada',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_telefones|node|contato|form';
  $field_group->group_name = 'group_telefones';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contato';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_enderecos_telefones';
  $field_group->data = array(
    'label' => 'Telefones',
    'weight' => '54',
    'children' => array(
      0 => 'field_telefone_1',
      1 => 'field_telefone_2',
      2 => 'field_telefone_3',
      3 => 'field_tipo_1',
      4 => 'field_tipo_2',
      5 => 'field_tipo_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_telefones|node|contato|form'] = $field_group;

  return $export;
}
