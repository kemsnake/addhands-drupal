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

            ymaps.ready(function () {
                var map = Drupal.geofieldYmap.data['geofield-ymap-advert-search-page-1-map']['map'];
                map.events.add('boundschange', function (event) {
                    // фильтруем блок с объявлениями на основе видимой границы карты
                    var bounds = event.originalEvent.newBounds;
                    var left = bounds[0][0];
                    var top  = bounds[0][1];
                    var right = bounds[1][0];
                    var bottom = bounds[1][1];
                    var update_url = '/reload-search-results/'+left+'/'+top+'/'+right+'/'+bottom;
                    console.log(update_url);
                    jQuery.ajax({
                        url: update_url,
                        type: 'POST',
                        dataType: 'application/json',
                        success: function(data){
                            var jobj = jQuery.parseJSON(data);
                            jQuery('#block-views-advert-search-block-1 .content').html(jobj.block_html);
                            var adverts = jobj.adverts;
                            //map.geoObjects.re
                            for (var i = 0; i < adverts.length; i++) {
                                var advert = adverts[i];

                                var balloon = new ymaps.Balloon(map);
                                balloon.options.setParent(map.options);
                                balloon.setPosition(advert.coords);
                                balloon.contentLayout = 'sdgsdfg';
                                // Создает метку в центре Москвы
                                var placemark = new ymaps.Placemark(advert.coords, {
                                    // Чтобы балун и хинт открывались на метке, необходимо задать ей определенные свойства.
                                    balloonContentHeader: "Балун метки",
                                    balloonContentBody: "Содержимое <em>балуна</em> метки",
                                    balloonContentFooter: "Подвал",
                                    hintContent: "Хинт метки"
                                });
                                console.log(map.geoObjects);
                                /*placemark.name = "Москва";
                                placemark.description = "Столица Российской Федерации";*/
                                //placemark.baloon = balloon;
                                // Добавляет метку на карту
                                map.geoObjects.add(placemark);
                                ymaps.geoQuery(placemarks).searchIntersect(map).each(function(pm) {
                                        map.geoObjects.remove(pm);
                                });

                            }

                        }
                    });

                    // перерисовываем объекты на карте на основе видимой границы карты

                });
            });

            function resizeMap(){

                console.log(map.getBounds());
                map.setBounds([37.13268871914181, 55.55945544545429],[38.085747336675574, 55.946698202860325]);
                map.ZoomRangeChange;
            }

            //console.log(map.getBounds());
            // Область Москвы и Московской области
            //var ym = window.ymaps;
            /*map.setBounds(
                [38, 55],
                [38, 55]
            );*/
            //map.addOverlay(new Drupal.geofieldYmap.Geocoder("победы", {boundedBy : moscowBounds, strictBounds : true, results : 1}));
        }
    }

})(jQuery);