/**
 * Created by IVAN on 14.12.13.
 */

(function ($) {

    /**
     * Resize block to full screen
     */
    Drupal.behaviors.resizeBlock = {
        attach: function (context) {
            $( window ).resize(function() {
                resizeBl();
            });
            $( window ).load(function() {
                resizeBl();
            });

            function resizeBl(){
                var w = $('body').width();
                if (w < 960) w = 960;
                var m = 0 - (w-960)/2;
                $('.front #block-block-5').css('width', w);
                $('.front #block-block-5').css('margin-left', m);
            }

        }
    };
    /**
     * Показываем|скрываем поля компании если выбрано соответсвующее значение
     * todo change to conditional fields
     */
    Drupal.behaviors.showCompanyFields = {
        attach: function (context) {
            $('select#edit-field-user-account-type-und').change(function(){
                if ($(this).val() == 'company'){
                    $('#user_user_form_group_company').show();
                }
                else {
                    $('#user_user_form_group_company').hide();
                }
            });
        }
    };

    Drupal.behaviors.YmapCustom = {
        attach: function (context) {

            if ( typeof ymaps == "undefined") return;
            ymaps.ready(function () {
                var map = Drupal.geofieldYmap.data['geofield-ymap-advert-search-page-1-map']['map'];
                // перерисовываем объекты на карте на основе видимой границы карты
                map.events.add('boundschange', function (event) {
                    // фильтруем блок с объявлениями на основе видимой границы карты
                    var bounds = event.originalEvent.newBounds;
                    var left = bounds[0][0];
                    var top  = bounds[0][1];
                    var right = bounds[1][0];
                    var bottom = bounds[1][1];
                    var type = window.location.search;
                    type = type.replace('?type=', '');
                    var update_url = '/reload-search-results/'+left+'/'+top+'/'+right+'/'+bottom+'/'+type;
                    jQuery.ajax({
                        url: update_url,
                        type: 'POST',
                        dataType: 'application/json',
                        success: function(data){
                            var jobj = jQuery.parseJSON(data);
                            jQuery('#block-views-advert-search-block-1 .content').html(jobj.block_html);
                            var adverts = jobj.adverts;
                            // Удаляем все объявления с карты
                            map.geoObjects.removeAll();
                            for (var i = 0; i < adverts.length; i++) {
                                var advert = adverts[i];
                                // Создает метку в центре Москвы
                                var placemark = new ymaps.Placemark(advert.coords, {
                                    // Чтобы балун и хинт открывались на метке, необходимо задать ей определенные свойства.
                                    balloonContentHeader: advert.baloon.img,
                                    balloonContentBody: advert.baloon.title,
                                    hintContent: advert.baloon.hint
                                });
                                map.geoObjects.add(placemark);
                            }

                        }
                    });
                });
                map.setZoom(9);
                $('.view-advert-search .pager li a').live('click', function(e){
                    e.preventDefault();
                    console.log(this)
                    jQuery.ajax({
                        url: this.href,
                        type: 'POST',
                        dataType: 'application/json',
                        success: function(data){
                            var jobj = jQuery.parseJSON(data);
                            jQuery('#block-views-advert-search-block-1 .content').html(jobj.block_html);
                            var adverts = jobj.adverts;
                            // Удаляем все объявления с карты
                            map.geoObjects.removeAll();
                            for (var i = 0; i < adverts.length; i++) {
                                var advert = adverts[i];
                                // Создает метку в центре Москвы
                                var placemark = new ymaps.Placemark(advert.coords, {
                                    // Чтобы балун и хинт открывались на метке, необходимо задать ей определенные свойства.
                                    balloonContentHeader: advert.baloon.img,
                                    balloonContentBody: advert.baloon.title,
                                    hintContent: advert.baloon.hint
                                });
                                map.geoObjects.add(placemark);
                            }

                        }
                    });
                });
            });

        }
    }
    Drupal.behaviors.ajaxPager = {
        attach: function (context) {



        }
    }

})(jQuery);