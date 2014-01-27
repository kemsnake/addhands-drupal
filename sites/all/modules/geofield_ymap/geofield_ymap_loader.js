(function ($) {
  Drupal.behaviors.geofieldYmapLoader = {
    attach: function (context, settings) {
      if (!Drupal.geofieldYmap && !window.ymaps && $('div.geofield-ymap').length > 0) {
        $.getScript('//api-maps.yandex.ru/2.1-dev/?lang=ru-RU&load=package.full&coordorder=longlat', function() {
          $.getScript(Drupal.settings.geofieldYmap.modulePath + '/geofield_ymap.js', function() {
            Drupal.attachBehaviors(document);
          });
        });
      }
    }
  };
})(jQuery);
