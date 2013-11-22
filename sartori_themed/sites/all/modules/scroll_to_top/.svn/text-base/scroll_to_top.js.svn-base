(function(jQuery){
/**
* Toggle the visibility of the scroll to top link.
*/

Drupal.behaviors.scroll_to_top = {
 attach: function (context, settings) {
// append  back to top link top body
jQuery("body").append("<p id='back-top'><a href='#top'><span id='button'></span><span id='link'>"+Drupal.t("Back to Top")+"</span></a></p>");
jQuery("#back-top").hide();
jQuery(function () {
jQuery(window).scroll(function () {
if (jQuery(this).scrollTop() > 100) {
jQuery('#back-top').show();
} else {
jQuery('#back-top').hide();
}
});

// scroll body to 0px on click
jQuery('#back-top a').click(function () {
jQuery('body,html').stop().animate({
scrollTop: 0
}, 800);
return false;
});
});
}
};
})(jQuery);