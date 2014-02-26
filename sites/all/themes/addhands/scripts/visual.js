/**
 * Created by IVAN on 14.12.13.
 */

(function ($) {
    Drupal.behaviors.dropdown_click = {
        attach: function (context, settings) {
            var ddl = $("#block-custom-addhands-user-header-dropdown-menu #dropdown_link");
            if (ddl.length > 0) {
                hd = $( '#block-custom-addhands-user-header-dropdown-menu .header-dropdown');
                hd.css('display', 'block');
                var v = hd.width();
                ddl.width(v);
                hd.css('display', 'none');
                ddl.removeClass('active');
                // По клику на ссылку меню - показываем попап
                ddl.click(function() {
                    if (ddl.hasClass('active')){
                        hd.hide();
                        ddl.removeClass('active');
                        hd.css('position', 'relative');
                    }
                    else{
                        hd.width(v);
                        hd.show();
                        ddl.addClass('active');
                        $(document).click(function(event) {
                            if ($(event.target).closest("#block-custom-addhands-user-header-dropdown-menu").length) return;
                            hd.css('display', 'none');
                            ddl.removeClass('active');
                            hd.css('position', 'relative');
                            event.stopPropagation();
                            $(document).unbind('click');
                        });
                    }
                    return false;
                });
            }
        }
    };

    Drupal.behaviors.publish_slider_chg = {
        attach: function (context, settings) {
            var sl = $(".publish-link-block:not(.publish-slider-processed)");
            $.each(sl, function(key, value) {
                var sl_current = $(this);
                $(this).addClass('publish-slider-processed');
                var nid = sl_current.attr('id');
                if (Drupal.settings['publish_slider_' + nid] !== undefined) {
                    var value = Drupal.settings['publish_slider_' + nid];
                }
                else {
                    var value = 0;
                }
                sl_current.slider({
                    min: 0,
                    max: 1,
                    step: 1,
                    value: value,
                    stop: function(event, ui){
                        if (ui.value == 0){
                            $.post('/node/' + nid + '/unpublish/ajax', function(data){
                                if (data.code > 0){
                                    $('#' + nid + '.publish-link-block').removeClass("publish-slider-published");
                                    $('#' + nid + '.publish-link-block').addClass("publish-slider-unpublished");
                                    $('#' + nid + '.publish-link-block .publish-slider-text').html(Drupal.t('Не опубликовано'));
                                }
                                else {
                                    alert(data.error);
                                    $('.advert-manage-links #' + nid).slider("value", 1);
                                }
                            });
                        }
                        else{
                            $.post('/node/' + nid + '/publish/ajax', function(data){
                                if (data.code > 0){
                                    $('#' + nid + '.publish-link-block').removeClass("publish-slider-unpublished");
                                    $('#' + nid + '.publish-link-block').addClass("publish-slider-published");
                                    $('#' + nid + '.publish-link-block .publish-slider-text').html(Drupal.t('Опубликовано'));
                                }
                                else {
                                    alert(data.error);
                                    $('.advert-manage-links #' + nid).slider("value", 0);
                                }
                            });
                        }
                    }
                });
                $("a.publish-slider-link-nojs").hide();
            });

        }
    }
})(jQuery);













