jQuery(function ($) {

	Drupal.behaviors.validator = {
			attach: function(context, settings) {
				/*
				 * Validation for form: contato
				 */
				$("#contato-node-form").validate({
					rules: {
						title: {
							minLength: 5,
							required: true
						},
						'field_email[und][0][value]':{
							email: true
						},
						'field_website[und][0][value]':{
							url: true
						}
					},
					messages: {
						title: {
							required: "Digite o nome do contato"
						},
						'field_email[und][0][value]': {
							email: "Email em formato inválido"
						},
						'field_website[und][0][value]':{
							url: "URL em formato inválido"
						}
					}
				});
				/*
				 * Validation for form: processo
				 */
				$("#processo-node-form").validate({
					rules: {
						title: {
							minLength: 5,
							required: true
						},
						'field_pasta[und][0][target_id]':{
							required: true
						}
					},
					messages: {
						title: {
							required: "Digite o nome do processo"
						},
						'field_pasta[und][0][target_id]': {
							required: "Digite o nome da pasta"
						}
					}
				});
			}
	};
	
	
	//Masks 
	Drupal.behaviors.masked_input = {
			attach: function(context, settings) {  
				/*
				 * Masks for form: contato-node-form
				 */
				$("#edit-field-insc-municipal-und-0-value").mask("9.999.999-9");
				$("#edit-field-insc-estadual-und-0-value").mask("999.999.999.999");
				$("#edit-field-cnpj-und-0-value").mask("99.999.999/9999-99");
				$("#edit-field-cep-und-0-value").mask("99999-999");
				$("#edit-field-telefone-1-und-0-value").mask("(99) 9999-9999");
				$("#edit-field-telefone-2-und-0-value").mask("(99) 9999-9999");
			}
	}
		
}(jQuery));



	
	
