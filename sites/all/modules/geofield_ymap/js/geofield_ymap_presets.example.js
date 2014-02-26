ymaps.ready(function () {
  ymaps.option.presetStorage.add('custom#examplePreset', {
    iconLayout: 'default#image',
    iconImageHref: 'http://api.yandex.ru/maps/doc/jsapi/2.x/examples/images/myIcon.gif',
    iconImageSize: [30, 42],
    iconImageOffset: [-3, -42]
  });
});
