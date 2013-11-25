(function ($) {

function accordeonShowHideRules() {
  $('#edit-field-tipo-de-pessoa-und-fisica').click(function() {
    $('h3.accordion-item:contains("Dados Pessoais")').show();
    $('h3.accordion-item:contains("Dados da Empresa / Órgão")').hide();
    $('h3.accordion-item:contains("Dados da Empresa / Órgão")').next().hide();
  });
  $('#edit-field-tipo-de-pessoa-und-juridica').click(function() {
    $('h3.accordion-item:contains("Dados da Empresa / Órgão")').show();
    $('h3.accordion-item:contains("Dados Pessoais")').hide();
    $('h3.accordion-item:contains("Dados Pessoais")').next().hide();
  });
}

$(document).ready(function() {
  if ($('body.page-add-contato').length > 0) {
    $('h3.accordion-item:contains("Dados da Empresa / Órgão")').hide();
    $('h3.accordion-item:contains("Dados da Empresa / Órgão")').next().hide();

    accordeonShowHideRules();
  }

});

})(jQuery);
