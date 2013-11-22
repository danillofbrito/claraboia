<?php
/**
 * @file
 * sartori_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sartori_features_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'andamento_processual';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Andamento Processual';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Andamento Processual';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_processo' => 'field_processo',
    'field_descricao' => 'field_descricao',
    'field_tipo_andamento_processual' => 'field_tipo_andamento_processual',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_processo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_descricao' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tipo_andamento_processual' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Data */
  $handler->display->display_options['fields']['field_data']['id'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['table'] = 'field_data_field_data';
  $handler->display->display_options['fields']['field_data']['field'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_data']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_data']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_data']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_data']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_data']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_data']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_data']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_data']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_data']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_data']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_data']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_data']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_data']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_data']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_data']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_data']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_data']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_data']['field_api_classes'] = 1;
  /* Field: Content: Descrição */
  $handler->display->display_options['fields']['field_descricao']['id'] = 'field_descricao';
  $handler->display->display_options['fields']['field_descricao']['table'] = 'field_data_field_descricao';
  $handler->display->display_options['fields']['field_descricao']['field'] = 'field_descricao';
  $handler->display->display_options['fields']['field_descricao']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_descricao']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_descricao']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_descricao']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_descricao']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_descricao']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_descricao']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_descricao']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_descricao']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_descricao']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_descricao']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_descricao']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_descricao']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_descricao']['element_type'] = '0';
  $handler->display->display_options['fields']['field_descricao']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_descricao']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_descricao']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_descricao']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_descricao']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_descricao']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_descricao']['field_api_classes'] = 1;
  /* Field: Content: Tipo do Andamento Processual */
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['id'] = 'field_tipo_andamento_processual';
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['table'] = 'field_data_field_tipo_andamento_processual';
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['field'] = 'field_tipo_andamento_processual';
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tipo_andamento_processual']['field_api_classes'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['external'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Editar';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['external'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['delete_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delete_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['delete_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Deletar';
  /* Sort criterion: Content: Tipo do Andamento Processual (field_tipo_andamento_processual) */
  $handler->display->display_options['sorts']['field_tipo_andamento_processual_value']['id'] = 'field_tipo_andamento_processual_value';
  $handler->display->display_options['sorts']['field_tipo_andamento_processual_value']['table'] = 'field_data_field_tipo_andamento_processual';
  $handler->display->display_options['sorts']['field_tipo_andamento_processual_value']['field'] = 'field_tipo_andamento_processual_value';
  /* Sort criterion: Content: Data (field_data) */
  $handler->display->display_options['sorts']['field_data_value']['id'] = 'field_data_value';
  $handler->display->display_options['sorts']['field_data_value']['table'] = 'field_data_field_data';
  $handler->display->display_options['sorts']['field_data_value']['field'] = 'field_data_value';
  /* Contextual filter: Content: Processo (field_processo) */
  $handler->display->display_options['arguments']['field_processo_target_id']['id'] = 'field_processo_target_id';
  $handler->display->display_options['arguments']['field_processo_target_id']['table'] = 'field_data_field_processo';
  $handler->display->display_options['arguments']['field_processo_target_id']['field'] = 'field_processo_target_id';
  $handler->display->display_options['arguments']['field_processo_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_processo_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_processo_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_processo_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_processo_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_processo_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_processo_target_id']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'andamento_processual' => 'andamento_processual',
  );
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Processo (field_processo) */
  $handler->display->display_options['arguments']['field_processo_target_id']['id'] = 'field_processo_target_id';
  $handler->display->display_options['arguments']['field_processo_target_id']['table'] = 'field_data_field_processo';
  $handler->display->display_options['arguments']['field_processo_target_id']['field'] = 'field_processo_target_id';
  $handler->display->display_options['arguments']['field_processo_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_processo_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_processo_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_processo_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_processo_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_processo_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_processo_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_processo_target_id']['not'] = 0;
  $translatables['andamento_processual'] = array(
    t('Master'),
    t('Andamento Processual'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Data'),
    t('Descrição'),
    t('Tipo do Andamento Processual'),
    t('Editar'),
    t('Deletar'),
    t('All'),
    t('Block'),
  );
  $export['andamento_processual'] = $view;

  $view = new view;
  $view->name = 'busca_pastas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Busca Pastas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Busca Pastas';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Buscar';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Limpar';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_advogado_responsavel_target_id' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_acao_target_id' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_cliente_target_id' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_escritorio_de_origem_target_id' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_escritorio_responsavel_target_id' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_natureza_target_id' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_n_inicial_value' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_n_principal_value' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_observacoes_value' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_parte_contraria_target_id' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_id_pasta_value' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_posicao_do_cliente_target_id' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_tabela_horas_target_id' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_advogado_responsavel' => 'field_advogado_responsavel',
    'field_acao' => 'field_acao',
    'field_cliente' => 'field_cliente',
    'field_escritorio_de_origem' => 'field_escritorio_de_origem',
    'field_escritorio_responsavel' => 'field_escritorio_responsavel',
    'field_natureza' => 'field_natureza',
    'field_n_inicial' => 'field_n_inicial',
    'field_n_principal' => 'field_n_principal',
    'field_observacoes' => 'field_observacoes',
    'field_parte_contraria' => 'field_parte_contraria',
    'field_id_pasta' => 'field_id_pasta',
    'field_posicao_do_cliente' => 'field_posicao_do_cliente',
    'field_tabela_horas' => 'field_tabela_horas',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_advogado_responsavel' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_acao' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cliente' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_escritorio_de_origem' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_escritorio_responsavel' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_natureza' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_n_inicial' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_n_principal' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_observacoes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_parte_contraria' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_id_pasta' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_posicao_do_cliente' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tabela_horas' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Dashboard';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titulo';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Advogado Responsável */
  $handler->display->display_options['fields']['field_advogado_responsavel']['id'] = 'field_advogado_responsavel';
  $handler->display->display_options['fields']['field_advogado_responsavel']['table'] = 'field_data_field_advogado_responsavel';
  $handler->display->display_options['fields']['field_advogado_responsavel']['field'] = 'field_advogado_responsavel';
  $handler->display->display_options['fields']['field_advogado_responsavel']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_advogado_responsavel']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_advogado_responsavel']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_advogado_responsavel']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_advogado_responsavel']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_advogado_responsavel']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_advogado_responsavel']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_advogado_responsavel']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_advogado_responsavel']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_advogado_responsavel']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_advogado_responsavel']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_advogado_responsavel']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_advogado_responsavel']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_advogado_responsavel']['element_type'] = '0';
  $handler->display->display_options['fields']['field_advogado_responsavel']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_advogado_responsavel']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_advogado_responsavel']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_advogado_responsavel']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_advogado_responsavel']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_advogado_responsavel']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_advogado_responsavel']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_advogado_responsavel']['field_api_classes'] = 1;
  /* Field: Content: Ação */
  $handler->display->display_options['fields']['field_acao']['id'] = 'field_acao';
  $handler->display->display_options['fields']['field_acao']['table'] = 'field_data_field_acao';
  $handler->display->display_options['fields']['field_acao']['field'] = 'field_acao';
  $handler->display->display_options['fields']['field_acao']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_acao']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_acao']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_acao']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_acao']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_acao']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_acao']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_acao']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_acao']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_acao']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_acao']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_acao']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_acao']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_acao']['element_type'] = '0';
  $handler->display->display_options['fields']['field_acao']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_acao']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_acao']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_acao']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_acao']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_acao']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_acao']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_acao']['field_api_classes'] = 1;
  /* Field: Content: Cliente */
  $handler->display->display_options['fields']['field_cliente']['id'] = 'field_cliente';
  $handler->display->display_options['fields']['field_cliente']['table'] = 'field_data_field_cliente';
  $handler->display->display_options['fields']['field_cliente']['field'] = 'field_cliente';
  $handler->display->display_options['fields']['field_cliente']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cliente']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cliente']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cliente']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cliente']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cliente']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cliente']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cliente']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cliente']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cliente']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cliente']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cliente']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cliente']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cliente']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cliente']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_cliente']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_cliente']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_cliente']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cliente']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cliente']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cliente']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_cliente']['field_api_classes'] = 1;
  /* Field: Content: Escritório de origem */
  $handler->display->display_options['fields']['field_escritorio_de_origem']['id'] = 'field_escritorio_de_origem';
  $handler->display->display_options['fields']['field_escritorio_de_origem']['table'] = 'field_data_field_escritorio_de_origem';
  $handler->display->display_options['fields']['field_escritorio_de_origem']['field'] = 'field_escritorio_de_origem';
  $handler->display->display_options['fields']['field_escritorio_de_origem']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['element_type'] = '0';
  $handler->display->display_options['fields']['field_escritorio_de_origem']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_escritorio_de_origem']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_escritorio_de_origem']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_escritorio_de_origem']['field_api_classes'] = 1;
  /* Field: Content: Escritório responsável */
  $handler->display->display_options['fields']['field_escritorio_responsavel']['id'] = 'field_escritorio_responsavel';
  $handler->display->display_options['fields']['field_escritorio_responsavel']['table'] = 'field_data_field_escritorio_responsavel';
  $handler->display->display_options['fields']['field_escritorio_responsavel']['field'] = 'field_escritorio_responsavel';
  $handler->display->display_options['fields']['field_escritorio_responsavel']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['element_type'] = '0';
  $handler->display->display_options['fields']['field_escritorio_responsavel']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_escritorio_responsavel']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_escritorio_responsavel']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_escritorio_responsavel']['field_api_classes'] = 1;
  /* Field: Content: Natureza */
  $handler->display->display_options['fields']['field_natureza']['id'] = 'field_natureza';
  $handler->display->display_options['fields']['field_natureza']['table'] = 'field_data_field_natureza';
  $handler->display->display_options['fields']['field_natureza']['field'] = 'field_natureza';
  $handler->display->display_options['fields']['field_natureza']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_natureza']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_natureza']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_natureza']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_natureza']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_natureza']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_natureza']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_natureza']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_natureza']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_natureza']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_natureza']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_natureza']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_natureza']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_natureza']['element_type'] = '0';
  $handler->display->display_options['fields']['field_natureza']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_natureza']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_natureza']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_natureza']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_natureza']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_natureza']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_natureza']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_natureza']['field_api_classes'] = 1;
  /* Field: Content: Nº Inicial */
  $handler->display->display_options['fields']['field_n_inicial']['id'] = 'field_n_inicial';
  $handler->display->display_options['fields']['field_n_inicial']['table'] = 'field_data_field_n_inicial';
  $handler->display->display_options['fields']['field_n_inicial']['field'] = 'field_n_inicial';
  $handler->display->display_options['fields']['field_n_inicial']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_n_inicial']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_n_inicial']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_n_inicial']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_n_inicial']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_n_inicial']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_n_inicial']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_n_inicial']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_n_inicial']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_n_inicial']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_n_inicial']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_n_inicial']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_n_inicial']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_n_inicial']['element_type'] = '0';
  $handler->display->display_options['fields']['field_n_inicial']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_n_inicial']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_n_inicial']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_n_inicial']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_n_inicial']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_n_inicial']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_n_inicial']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_n_inicial']['field_api_classes'] = 1;
  /* Field: Content: Nº Principal */
  $handler->display->display_options['fields']['field_n_principal']['id'] = 'field_n_principal';
  $handler->display->display_options['fields']['field_n_principal']['table'] = 'field_data_field_n_principal';
  $handler->display->display_options['fields']['field_n_principal']['field'] = 'field_n_principal';
  $handler->display->display_options['fields']['field_n_principal']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_n_principal']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_n_principal']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_n_principal']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_n_principal']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_n_principal']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_n_principal']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_n_principal']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_n_principal']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_n_principal']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_n_principal']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_n_principal']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_n_principal']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_n_principal']['element_type'] = '0';
  $handler->display->display_options['fields']['field_n_principal']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_n_principal']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_n_principal']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_n_principal']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_n_principal']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_n_principal']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_n_principal']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_n_principal']['field_api_classes'] = 1;
  /* Field: Content: Observações */
  $handler->display->display_options['fields']['field_observacoes']['id'] = 'field_observacoes';
  $handler->display->display_options['fields']['field_observacoes']['table'] = 'field_data_field_observacoes';
  $handler->display->display_options['fields']['field_observacoes']['field'] = 'field_observacoes';
  $handler->display->display_options['fields']['field_observacoes']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_observacoes']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_observacoes']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_observacoes']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_observacoes']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_observacoes']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_observacoes']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_observacoes']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_observacoes']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_observacoes']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_observacoes']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_observacoes']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_observacoes']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_observacoes']['element_type'] = '0';
  $handler->display->display_options['fields']['field_observacoes']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_observacoes']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_observacoes']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_observacoes']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_observacoes']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_observacoes']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_observacoes']['field_api_classes'] = 1;
  /* Field: Content: Parte Contrária */
  $handler->display->display_options['fields']['field_parte_contraria']['id'] = 'field_parte_contraria';
  $handler->display->display_options['fields']['field_parte_contraria']['table'] = 'field_data_field_parte_contraria';
  $handler->display->display_options['fields']['field_parte_contraria']['field'] = 'field_parte_contraria';
  $handler->display->display_options['fields']['field_parte_contraria']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_parte_contraria']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_parte_contraria']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_parte_contraria']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_parte_contraria']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_parte_contraria']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_parte_contraria']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_parte_contraria']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_parte_contraria']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_parte_contraria']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_parte_contraria']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_parte_contraria']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_parte_contraria']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_parte_contraria']['element_type'] = '0';
  $handler->display->display_options['fields']['field_parte_contraria']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_parte_contraria']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_parte_contraria']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_parte_contraria']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_parte_contraria']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_parte_contraria']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_parte_contraria']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_parte_contraria']['field_api_classes'] = 1;
  /* Field: Content: Pasta */
  $handler->display->display_options['fields']['field_id_pasta']['id'] = 'field_id_pasta';
  $handler->display->display_options['fields']['field_id_pasta']['table'] = 'field_data_field_id_pasta';
  $handler->display->display_options['fields']['field_id_pasta']['field'] = 'field_id_pasta';
  $handler->display->display_options['fields']['field_id_pasta']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_id_pasta']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_id_pasta']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_id_pasta']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_id_pasta']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_id_pasta']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_id_pasta']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_id_pasta']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_id_pasta']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_id_pasta']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_id_pasta']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_id_pasta']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_id_pasta']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_id_pasta']['element_type'] = '0';
  $handler->display->display_options['fields']['field_id_pasta']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_id_pasta']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_id_pasta']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_id_pasta']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_id_pasta']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_id_pasta']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_id_pasta']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_id_pasta']['field_api_classes'] = 1;
  /* Field: Content: Posição do Cliente */
  $handler->display->display_options['fields']['field_posicao_do_cliente']['id'] = 'field_posicao_do_cliente';
  $handler->display->display_options['fields']['field_posicao_do_cliente']['table'] = 'field_data_field_posicao_do_cliente';
  $handler->display->display_options['fields']['field_posicao_do_cliente']['field'] = 'field_posicao_do_cliente';
  $handler->display->display_options['fields']['field_posicao_do_cliente']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['element_type'] = '0';
  $handler->display->display_options['fields']['field_posicao_do_cliente']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_posicao_do_cliente']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_posicao_do_cliente']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_posicao_do_cliente']['field_api_classes'] = 1;
  /* Field: Content: Tabela de valores para horas trabalhadas */
  $handler->display->display_options['fields']['field_tabela_horas']['id'] = 'field_tabela_horas';
  $handler->display->display_options['fields']['field_tabela_horas']['table'] = 'field_data_field_tabela_horas';
  $handler->display->display_options['fields']['field_tabela_horas']['field'] = 'field_tabela_horas';
  $handler->display->display_options['fields']['field_tabela_horas']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tabela_horas']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tabela_horas']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tabela_horas']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tabela_horas']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tabela_horas']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tabela_horas']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tabela_horas']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tabela_horas']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tabela_horas']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tabela_horas']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tabela_horas']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tabela_horas']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tabela_horas']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tabela_horas']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_tabela_horas']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tabela_horas']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_tabela_horas']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tabela_horas']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tabela_horas']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tabela_horas']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_tabela_horas']['field_api_classes'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dados_da_pasta' => 'dados_da_pasta',
  );
  /* Filter criterion: Content: Advogado Responsável (field_advogado_responsavel) */
  $handler->display->display_options['filters']['field_advogado_responsavel_target_id']['id'] = 'field_advogado_responsavel_target_id';
  $handler->display->display_options['filters']['field_advogado_responsavel_target_id']['table'] = 'field_data_field_advogado_responsavel';
  $handler->display->display_options['filters']['field_advogado_responsavel_target_id']['field'] = 'field_advogado_responsavel_target_id';
  $handler->display->display_options['filters']['field_advogado_responsavel_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_advogado_responsavel_target_id']['expose']['operator_id'] = 'field_advogado_responsavel_target_id_op';
  $handler->display->display_options['filters']['field_advogado_responsavel_target_id']['expose']['label'] = 'Advogado Responsável';
  $handler->display->display_options['filters']['field_advogado_responsavel_target_id']['expose']['operator'] = 'field_advogado_responsavel_target_id_op';
  $handler->display->display_options['filters']['field_advogado_responsavel_target_id']['expose']['identifier'] = 'field_advogado_responsavel_target_id';
  $handler->display->display_options['filters']['field_advogado_responsavel_target_id']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Ação (field_acao) */
  $handler->display->display_options['filters']['field_acao_target_id']['id'] = 'field_acao_target_id';
  $handler->display->display_options['filters']['field_acao_target_id']['table'] = 'field_data_field_acao';
  $handler->display->display_options['filters']['field_acao_target_id']['field'] = 'field_acao_target_id';
  $handler->display->display_options['filters']['field_acao_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_acao_target_id']['expose']['operator_id'] = 'field_acao_target_id_op';
  $handler->display->display_options['filters']['field_acao_target_id']['expose']['label'] = 'Ação';
  $handler->display->display_options['filters']['field_acao_target_id']['expose']['operator'] = 'field_acao_target_id_op';
  $handler->display->display_options['filters']['field_acao_target_id']['expose']['identifier'] = 'field_acao_target_id';
  $handler->display->display_options['filters']['field_acao_target_id']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Cliente (field_cliente) */
  $handler->display->display_options['filters']['field_cliente_target_id']['id'] = 'field_cliente_target_id';
  $handler->display->display_options['filters']['field_cliente_target_id']['table'] = 'field_data_field_cliente';
  $handler->display->display_options['filters']['field_cliente_target_id']['field'] = 'field_cliente_target_id';
  $handler->display->display_options['filters']['field_cliente_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cliente_target_id']['expose']['operator_id'] = 'field_cliente_target_id_op';
  $handler->display->display_options['filters']['field_cliente_target_id']['expose']['label'] = 'Cliente';
  $handler->display->display_options['filters']['field_cliente_target_id']['expose']['operator'] = 'field_cliente_target_id_op';
  $handler->display->display_options['filters']['field_cliente_target_id']['expose']['identifier'] = 'field_cliente_target_id';
  $handler->display->display_options['filters']['field_cliente_target_id']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Escritório de origem (field_escritorio_de_origem) */
  $handler->display->display_options['filters']['field_escritorio_de_origem_target_id']['id'] = 'field_escritorio_de_origem_target_id';
  $handler->display->display_options['filters']['field_escritorio_de_origem_target_id']['table'] = 'field_data_field_escritorio_de_origem';
  $handler->display->display_options['filters']['field_escritorio_de_origem_target_id']['field'] = 'field_escritorio_de_origem_target_id';
  $handler->display->display_options['filters']['field_escritorio_de_origem_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_escritorio_de_origem_target_id']['expose']['operator_id'] = 'field_escritorio_de_origem_target_id_op';
  $handler->display->display_options['filters']['field_escritorio_de_origem_target_id']['expose']['label'] = 'Escritório de origem';
  $handler->display->display_options['filters']['field_escritorio_de_origem_target_id']['expose']['operator'] = 'field_escritorio_de_origem_target_id_op';
  $handler->display->display_options['filters']['field_escritorio_de_origem_target_id']['expose']['identifier'] = 'field_escritorio_de_origem_target_id';
  $handler->display->display_options['filters']['field_escritorio_de_origem_target_id']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Escritório responsável (field_escritorio_responsavel) */
  $handler->display->display_options['filters']['field_escritorio_responsavel_target_id']['id'] = 'field_escritorio_responsavel_target_id';
  $handler->display->display_options['filters']['field_escritorio_responsavel_target_id']['table'] = 'field_data_field_escritorio_responsavel';
  $handler->display->display_options['filters']['field_escritorio_responsavel_target_id']['field'] = 'field_escritorio_responsavel_target_id';
  $handler->display->display_options['filters']['field_escritorio_responsavel_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_escritorio_responsavel_target_id']['expose']['operator_id'] = 'field_escritorio_responsavel_target_id_op';
  $handler->display->display_options['filters']['field_escritorio_responsavel_target_id']['expose']['label'] = 'Escritório responsável';
  $handler->display->display_options['filters']['field_escritorio_responsavel_target_id']['expose']['operator'] = 'field_escritorio_responsavel_target_id_op';
  $handler->display->display_options['filters']['field_escritorio_responsavel_target_id']['expose']['identifier'] = 'field_escritorio_responsavel_target_id';
  $handler->display->display_options['filters']['field_escritorio_responsavel_target_id']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Natureza (field_natureza) */
  $handler->display->display_options['filters']['field_natureza_target_id']['id'] = 'field_natureza_target_id';
  $handler->display->display_options['filters']['field_natureza_target_id']['table'] = 'field_data_field_natureza';
  $handler->display->display_options['filters']['field_natureza_target_id']['field'] = 'field_natureza_target_id';
  $handler->display->display_options['filters']['field_natureza_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_natureza_target_id']['expose']['operator_id'] = 'field_natureza_target_id_op';
  $handler->display->display_options['filters']['field_natureza_target_id']['expose']['label'] = 'Natureza';
  $handler->display->display_options['filters']['field_natureza_target_id']['expose']['operator'] = 'field_natureza_target_id_op';
  $handler->display->display_options['filters']['field_natureza_target_id']['expose']['identifier'] = 'field_natureza_target_id';
  $handler->display->display_options['filters']['field_natureza_target_id']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Nº Inicial (field_n_inicial) */
  $handler->display->display_options['filters']['field_n_inicial_value']['id'] = 'field_n_inicial_value';
  $handler->display->display_options['filters']['field_n_inicial_value']['table'] = 'field_data_field_n_inicial';
  $handler->display->display_options['filters']['field_n_inicial_value']['field'] = 'field_n_inicial_value';
  $handler->display->display_options['filters']['field_n_inicial_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_n_inicial_value']['expose']['operator_id'] = 'field_n_inicial_value_op';
  $handler->display->display_options['filters']['field_n_inicial_value']['expose']['label'] = 'Nº Inicial';
  $handler->display->display_options['filters']['field_n_inicial_value']['expose']['operator'] = 'field_n_inicial_value_op';
  $handler->display->display_options['filters']['field_n_inicial_value']['expose']['identifier'] = 'field_n_inicial_value';
  $handler->display->display_options['filters']['field_n_inicial_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Nº Principal (field_n_principal) */
  $handler->display->display_options['filters']['field_n_principal_value']['id'] = 'field_n_principal_value';
  $handler->display->display_options['filters']['field_n_principal_value']['table'] = 'field_data_field_n_principal';
  $handler->display->display_options['filters']['field_n_principal_value']['field'] = 'field_n_principal_value';
  $handler->display->display_options['filters']['field_n_principal_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_n_principal_value']['expose']['operator_id'] = 'field_n_principal_value_op';
  $handler->display->display_options['filters']['field_n_principal_value']['expose']['label'] = 'Nº Principal';
  $handler->display->display_options['filters']['field_n_principal_value']['expose']['operator'] = 'field_n_principal_value_op';
  $handler->display->display_options['filters']['field_n_principal_value']['expose']['identifier'] = 'field_n_principal_value';
  $handler->display->display_options['filters']['field_n_principal_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Observações (field_observacoes) */
  $handler->display->display_options['filters']['field_observacoes_value']['id'] = 'field_observacoes_value';
  $handler->display->display_options['filters']['field_observacoes_value']['table'] = 'field_data_field_observacoes';
  $handler->display->display_options['filters']['field_observacoes_value']['field'] = 'field_observacoes_value';
  $handler->display->display_options['filters']['field_observacoes_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_observacoes_value']['expose']['operator_id'] = 'field_observacoes_value_op';
  $handler->display->display_options['filters']['field_observacoes_value']['expose']['label'] = 'Observações';
  $handler->display->display_options['filters']['field_observacoes_value']['expose']['operator'] = 'field_observacoes_value_op';
  $handler->display->display_options['filters']['field_observacoes_value']['expose']['identifier'] = 'field_observacoes_value';
  $handler->display->display_options['filters']['field_observacoes_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_observacoes_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Parte Contrária (field_parte_contraria) */
  $handler->display->display_options['filters']['field_parte_contraria_target_id']['id'] = 'field_parte_contraria_target_id';
  $handler->display->display_options['filters']['field_parte_contraria_target_id']['table'] = 'field_data_field_parte_contraria';
  $handler->display->display_options['filters']['field_parte_contraria_target_id']['field'] = 'field_parte_contraria_target_id';
  $handler->display->display_options['filters']['field_parte_contraria_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_parte_contraria_target_id']['expose']['operator_id'] = 'field_parte_contraria_target_id_op';
  $handler->display->display_options['filters']['field_parte_contraria_target_id']['expose']['label'] = 'Parte Contrária';
  $handler->display->display_options['filters']['field_parte_contraria_target_id']['expose']['operator'] = 'field_parte_contraria_target_id_op';
  $handler->display->display_options['filters']['field_parte_contraria_target_id']['expose']['identifier'] = 'field_parte_contraria_target_id';
  $handler->display->display_options['filters']['field_parte_contraria_target_id']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Pasta (field_id_pasta) */
  $handler->display->display_options['filters']['field_id_pasta_value']['id'] = 'field_id_pasta_value';
  $handler->display->display_options['filters']['field_id_pasta_value']['table'] = 'field_data_field_id_pasta';
  $handler->display->display_options['filters']['field_id_pasta_value']['field'] = 'field_id_pasta_value';
  $handler->display->display_options['filters']['field_id_pasta_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_id_pasta_value']['expose']['operator_id'] = 'field_id_pasta_value_op';
  $handler->display->display_options['filters']['field_id_pasta_value']['expose']['label'] = 'Pasta';
  $handler->display->display_options['filters']['field_id_pasta_value']['expose']['operator'] = 'field_id_pasta_value_op';
  $handler->display->display_options['filters']['field_id_pasta_value']['expose']['identifier'] = 'field_id_pasta_value';
  $handler->display->display_options['filters']['field_id_pasta_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Posição do Cliente (field_posicao_do_cliente) */
  $handler->display->display_options['filters']['field_posicao_do_cliente_target_id']['id'] = 'field_posicao_do_cliente_target_id';
  $handler->display->display_options['filters']['field_posicao_do_cliente_target_id']['table'] = 'field_data_field_posicao_do_cliente';
  $handler->display->display_options['filters']['field_posicao_do_cliente_target_id']['field'] = 'field_posicao_do_cliente_target_id';
  $handler->display->display_options['filters']['field_posicao_do_cliente_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_posicao_do_cliente_target_id']['expose']['operator_id'] = 'field_posicao_do_cliente_target_id_op';
  $handler->display->display_options['filters']['field_posicao_do_cliente_target_id']['expose']['label'] = 'Posição do Cliente';
  $handler->display->display_options['filters']['field_posicao_do_cliente_target_id']['expose']['operator'] = 'field_posicao_do_cliente_target_id_op';
  $handler->display->display_options['filters']['field_posicao_do_cliente_target_id']['expose']['identifier'] = 'field_posicao_do_cliente_target_id';
  $handler->display->display_options['filters']['field_posicao_do_cliente_target_id']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Tabela de valores para horas trabalhadas (field_tabela_horas) */
  $handler->display->display_options['filters']['field_tabela_horas_target_id']['id'] = 'field_tabela_horas_target_id';
  $handler->display->display_options['filters']['field_tabela_horas_target_id']['table'] = 'field_data_field_tabela_horas';
  $handler->display->display_options['filters']['field_tabela_horas_target_id']['field'] = 'field_tabela_horas_target_id';
  $handler->display->display_options['filters']['field_tabela_horas_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tabela_horas_target_id']['expose']['operator_id'] = 'field_tabela_horas_target_id_op';
  $handler->display->display_options['filters']['field_tabela_horas_target_id']['expose']['label'] = 'Tabela de valores para horas trabalhadas';
  $handler->display->display_options['filters']['field_tabela_horas_target_id']['expose']['operator'] = 'field_tabela_horas_target_id_op';
  $handler->display->display_options['filters']['field_tabela_horas_target_id']['expose']['identifier'] = 'field_tabela_horas_target_id';
  $handler->display->display_options['filters']['field_tabela_horas_target_id']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'busca-pastas';
  $translatables['busca_pastas'] = array(
    t('Master'),
    t('Busca Pastas'),
    t('more'),
    t('Buscar'),
    t('Limpar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Dashboard'),
    t('Titulo'),
    t('Advogado Responsável'),
    t('Ação'),
    t('Cliente'),
    t('Escritório de origem'),
    t('Escritório responsável'),
    t('Natureza'),
    t('Nº Inicial'),
    t('Nº Principal'),
    t('Observações'),
    t('Parte Contrária'),
    t('Pasta'),
    t('Posição do Cliente'),
    t('Tabela de valores para horas trabalhadas'),
    t('Page'),
  );
  $export['busca_pastas'] = $view;

  $view = new view;
  $view->name = 'contatos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contatos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contatos';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_cidade' => 'field_cidade',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cidade' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nome';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Cidade */
  $handler->display->display_options['fields']['field_cidade']['id'] = 'field_cidade';
  $handler->display->display_options['fields']['field_cidade']['table'] = 'field_data_field_cidade';
  $handler->display->display_options['fields']['field_cidade']['field'] = 'field_cidade';
  $handler->display->display_options['fields']['field_cidade']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cidade']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cidade']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cidade']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cidade']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cidade']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cidade']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cidade']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cidade']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cidade']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cidade']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cidade']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cidade']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cidade']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cidade']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cidade']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cidade']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cidade']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cidade']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['field_language'] = 'pt-br';
  $handler->display->display_options['path'] = 'contato/lista';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Lista de Contatos';
  $handler->display->display_options['menu']['description'] = 'Listagem de todos os contatos cadastrados';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['contatos'] = array(
    t('Master'),
    t('Contatos'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Nome'),
    t('Cidade'),
    t('Page'),
    t('Block'),
  );
  $export['contatos'] = $view;

  $view = new view;
  $view->name = 'lista_de_processos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lista de Processos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Processos';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Andamento processual';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Andamento processual';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'andamento-processual/novo?processo=[nid]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Pasta (field_pasta) */
  $handler->display->display_options['arguments']['field_pasta_target_id']['id'] = 'field_pasta_target_id';
  $handler->display->display_options['arguments']['field_pasta_target_id']['table'] = 'field_data_field_pasta';
  $handler->display->display_options['arguments']['field_pasta_target_id']['field'] = 'field_pasta_target_id';
  $handler->display->display_options['arguments']['field_pasta_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pasta_target_id']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'processo' => 'processo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'processos';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Processos';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'nid' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'processo' => 'processo',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Processo (field_processo) */
  $handler->display->display_options['arguments']['field_processo_target_id']['id'] = 'field_processo_target_id';
  $handler->display->display_options['arguments']['field_processo_target_id']['table'] = 'field_data_field_processo';
  $handler->display->display_options['arguments']['field_processo_target_id']['field'] = 'field_processo_target_id';
  $handler->display->display_options['arguments']['field_processo_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_processo_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_processo_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_processo_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_processo_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_processo_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_processo_target_id']['not'] = 0;
  $handler->display->display_options['path'] = 'processo';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Pasta (field_pasta) */
  $handler->display->display_options['arguments']['field_pasta_target_id']['id'] = 'field_pasta_target_id';
  $handler->display->display_options['arguments']['field_pasta_target_id']['table'] = 'field_data_field_pasta';
  $handler->display->display_options['arguments']['field_pasta_target_id']['field'] = 'field_pasta_target_id';
  $handler->display->display_options['arguments']['field_pasta_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_pasta_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_pasta_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_pasta_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pasta_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pasta_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pasta_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_pasta_target_id']['not'] = 0;
  $translatables['lista_de_processos'] = array(
    t('Master'),
    t('Processos'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Andamento processual'),
    t('andamento-processual/novo?processo=[nid]'),
    t('All'),
    t('Page'),
    t('Entity Reference'),
    t('Block'),
  );
  $export['lista_de_processos'] = $view;

  $view = new view;
  $view->name = 'pastas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pastas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pastas';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Footer: Broken/missing handler */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'Adicionar Pasta';
  $handler->display->display_options['footer']['area_text_custom']['empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pasta' => 'pasta',
  );
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'ver_pastas';
  $handler->display->display_options['menu']['title'] = 'Pastas';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['pastas'] = array(
    t('Master'),
    t('Pastas'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Adicionar Pasta'),
    t('Block'),
    t('Page'),
  );
  $export['pastas'] = $view;

  $view = new view;
  $view->name = 'processo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Processo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Processo';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view_processo';

  /* Display: Bloco */
  $handler = $view->new_display('block', 'Bloco', 'block_1');
  $translatables['processo'] = array(
    t('Master'),
    t('Processo'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('All'),
    t('Page'),
    t('Bloco'),
  );
  $export['processo'] = $view;

  return $export;
}
