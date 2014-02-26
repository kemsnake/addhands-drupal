(function ($) {
  Drupal.behaviors.geofieldYmap = {
    attach: function (context, settings) {
      $('div.geofield-ymap', context).once('geofield-ymap', function () {
        var mapId = this.id;
        if (!mapId) {
          mapId = this.id = Drupal.geofieldYmap.generateMapId();
        }
        ymaps.ready(function () {
          Drupal.geofieldYmap.mapInit(mapId);
        });
      });
    }
  };

  Drupal.geofieldYmap = Drupal.geofieldYmap || {
    data: {},

    defaultSettings: {
      type: 'yandex#map',
      center: [0, 0],
      zoom: 0,
      auto_centering: false,
      auto_zooming: false,
      controls: ['mediumMapDefaultSet'],
      editable: false,
      multiple: false,
      input_id: '',
      object_types: [],
      object_preset: '',
      objects: '',
      clusterize: false,
    },

    // Initialize map
    mapInit: function (mapId, settings) {
      var dataSettings = Drupal.geofieldYmap.getDataSettings(mapId);
      settings = $.extend({}, Drupal.geofieldYmap.defaultSettings, dataSettings, settings);

      // Create map
      var map = Drupal.geofieldYmap.createMap(mapId, settings);

      // Set geo objects global options
      var globalOptions = {strokeWidth: 4};
      if (Drupal.settings.geofieldYmap.preset) {
        globalOptions.preset = Drupal.settings.geofieldYmap.preset;
      }
      if (settings.object_preset) {
        globalOptions.preset = settings.object_preset;
      }
      map.geoObjects.options.set(globalOptions);

      // Add geo objects
      if (settings.objects) {
        Drupal.geofieldYmap.addObject(map, settings.objects, settings.editable, settings.clusterize);
      }
      else if (settings.editable && settings.input_id) {
        var objects = $('#' + settings.input_id).val();
        Drupal.geofieldYmap.addObject(map, objects, settings.editable);
      }

      // Auto centering
      if (settings.auto_centering || (settings.center[0] == 0 && settings.center[1] == 0)) {
        Drupal.geofieldYmap.autoCentering(map);
      }

      // Auto zooming
      if ((settings.auto_zooming && map.geoObjects.getLength()) || !settings.zoom) {
        Drupal.geofieldYmap.autoZooming(map);
      }
      else if (settings.auto_zooming) {
        map.setZoom(settings.zoom);
      }

      // Editing features
      if (settings.editable) {
        // Add custom controls
        Drupal.geofieldYmap.addCustomControls(map, settings.object_types);

        // Objects remove handler
        map.geoObjects.events.add('remove', Drupal.geofieldYmap.objectsChangeEvent);

        // Map click handler
        map.events.add('click', Drupal.geofieldYmap.mapClickEvent);
      }

      $('#' + mapId).trigger('yandexMapInit', [map]);

      return map;
    },

    // Create map
    createMap: function (mapId, settings) {
      var map = new ymaps.Map(mapId, {
        type:     settings.type,
        center:   settings.center,
        zoom:     settings.auto_zooming ? 1 : settings.zoom,
        controls: settings.controls
      });
      map.mapId = mapId;

      Drupal.geofieldYmap.data[mapId] = {
        map: map,
        settings: settings,
        controls: {}
      };

      return map;
    },

    // Return map data-* settings
    getDataSettings: function (mapId) {
      var settings = {};
      if (mapId && $('#' + mapId).length) {
        var $map = $('#' + mapId);
        $.each(Drupal.geofieldYmap.defaultSettings, function (key, value) {
          var dataAttrName = 'map-' + key.replace('_', '-');
          var dataAttrValue = $map.data(dataAttrName);
          if (dataAttrValue !== undefined && dataAttrValue !== '') {
            settings[key] = ($.type(value) === 'array') ? dataAttrValue.split(',') : dataAttrValue;
          }
        });
      }
      return settings;
    },

    // Add custom controls
    addCustomControls: function(map, customControlsType) {
      if (!customControlsType) return;

      var map = Drupal.geofieldYmap.data[map.mapId].map;
      var customControlsData = {
        point:   Drupal.t('Add point'),
        line:    Drupal.t('Add line'),
        polygon: Drupal.t('Add polygone'),
      }

      $.each(customControlsType, function (index, controlType) {
        var button = new ymaps.control.Button({
          data: {
            image: Drupal.settings.geofieldYmap.modulePath + '/images/icon-' + controlType + '.png',
            title: customControlsData[controlType]
          }
        });
        button.events.add('click', Drupal.geofieldYmap.customControlClickEvent);
        map.controls.add(button);
        Drupal.geofieldYmap.data[map.mapId].controls[controlType] = button;
      });
      
      return Drupal.geofieldYmap.data[map.mapId].controls;
    },

    // Deselect controls
    deselectControls: function (map) {
      // Deselect custom controls
      $.each(Drupal.geofieldYmap.data[map.mapId].controls, function (index, control) {
        control.deselect();
      });
      
      // Deselect ruler
      var rulerControl = Drupal.geofieldYmap.getControl(map, 'rulerControl');
      if (rulerControl) {
        rulerControl.deselect();
      }
    },

    // Return control by name
    getControl: function (map, controlName) {
      var returnControl;
      map.controls.each(function (control) {
        if (control.options.getName() == controlName) {
          returnControl = control;
        }
      });
      return returnControl;
    },

    // Add geo object
    addObject: function (map, object, editMode, clusterize) {
      if (!object) return;

      if ($.type(object) === 'string')  {
        object = JSON.parse(object);
      }

      var geoQueryResult = ymaps.geoQuery(object);

      // Clusterize placemarks
      if (clusterize) {
        var points = geoQueryResult.search('geometry.type = "Point"');
        var notPoints = geoQueryResult.search('geometry.type != "Point"');
        map.geoObjects.add(points.clusterize({
          hasBalloon: false,
          hasHint: false,
          margin: 15
        }));
        notPoints.addToMap(map);
      }
      else {
        geoQueryResult.addToMap(map);
      }

      // Enable edit mode
      if (editMode) {
        geoQueryResult.addEvents(
          ['mapchange', 'editorstatechange', 'dragend', 'geometrychange'],
          Drupal.geofieldYmap.objectsChangeEvent
        );
        geoQueryResult.addEvents('dblclick', Drupal.geofieldYmap.objectsDblclickEvent);
        geoQueryResult.setOptions({draggable: true});
        geoQueryResult.each(function (object) {
          object.editor.startEditing();
        });
      }
    },

    // Add geo object by type
    addObjectByType: function (map, objectType, coordinates, editMode) {
      // Placemark (point)
      if (objectType == 'point') {
        var placemark = new ymaps.Placemark(coordinates);
        Drupal.geofieldYmap.addObject(map, placemark, editMode);
      }
      // Line
      else if (objectType == 'line') {
        var line = new ymaps.Polyline([coordinates]);
        Drupal.geofieldYmap.addObject(map, line, editMode);
        line.editor.startDrawing();
      }
      // Polygon
      else if (objectType == 'polygon') {
        var polygon = new ymaps.Polygon([[coordinates]]);
        Drupal.geofieldYmap.addObject(map, polygon, editMode);
        polygon.editor.startDrawing();
      }
    },

    // Return map.geoObjects in GeoJSON format
    getObjectsInGeoJson: function (map) {
      var objects = {
        type: 'FeatureCollection',
        features: []
      };
      map.geoObjects.each(function(object) {
        var feature = {
          type: 'Feature',
          geometry: {
            type: object.geometry.getType(),
            coordinates: object.geometry.getCoordinates()
          }
        };
        objects.features.push(feature);
      });
      return JSON.stringify(objects);
    },

    // Auto centering map
    autoCentering: function(map) {
      if (map.geoObjects.getLength() == 0) return;
      var centerAndZoom = ymaps.util.bounds.getCenterAndZoom(
        Drupal.geofieldYmap.getGeoObjectsBounds(map),
        map.container.getSize()
      );
      map.setCenter(centerAndZoom.center);
    },

    // Auto zooming map
    autoZooming: function(map) {
      if (map.geoObjects.getLength() == 0) return;
      var mapSize = map.container.getSize();
      var centerAndZoom = ymaps.util.bounds.getCenterAndZoom(
        Drupal.geofieldYmap.getGeoObjectsBounds(map),
        mapSize,
        ymaps.projection.wgs84Mercator,
        {margin: 30}
      );
      map.setZoom(centerAndZoom.zoom <= 16 ? centerAndZoom.zoom : 16);
    },

    // Return new map id
    generateMapId: function (number) {
      if (!number) number = 1;
      var mapId = 'geofield-ymap-' + number;
      if ($('#' + mapId).length > 0) {
        return Drupal.geofieldYmap.generateMapId(number + 1);
      }
      return mapId;
    },

    // Return bounds of map.geoObjects
    getGeoObjectsBounds: function (map) {
      var boundsCollection = [map.geoObjects.getBounds()];
      map.geoObjects.each(function (object) {
        if (object.options.getName() == 'clusterer') {
          boundsCollection.push(object.getBounds());
        }
      });
      return Drupal.geofieldYmap.getTotalBounds(boundsCollection);
    },

    // Return total bounds by bounds collection
    getTotalBounds: function (boundsCollection) {
      var totalBounds;

      $.each(boundsCollection, function (index, bounds) {
        if (!bounds) {
          return;
        }
        if (!totalBounds) {
          totalBounds = bounds;
          return;
        }

        // Min
        if (totalBounds[0][0] > bounds[0][0]) totalBounds[0][0] = bounds[0][0];
        if (totalBounds[0][1] > bounds[0][1]) totalBounds[0][1] = bounds[0][1];
        // Max
        if (totalBounds[1][0] < bounds[1][0]) totalBounds[1][0] = bounds[1][0];
        if (totalBounds[1][1] < bounds[1][1]) totalBounds[1][1] = bounds[1][1];
      });

      return totalBounds;
    },

    // Custom control click handler
    customControlClickEvent: function (event) {
      var control = event.originalEvent.target;
      var map = event.originalEvent.target.getMap();

      if (!control.state.get('selected')) {
        Drupal.geofieldYmap.deselectControls(map);
        map.cursors.push('arrow');
      }
      else {
        map.cursors.push('grab');
      }
    },

    // Objects change handler
    objectsChangeEvent: function (event) {
      var map = event.originalEvent.target.getMap();
      if (map) {
        var $map = $('#' + map.mapId);
        var $input = $('#' + $map.data('map-input-id'));
        $input.val(Drupal.geofieldYmap.getObjectsInGeoJson(map));
      }
    },

    // Object dblclick handler
    objectsDblclickEvent: function (event) {
      var object = event.originalEvent.target;
      var map = object.getMap();
      map.geoObjects.remove(object);
      event.stopPropagation();
    },

    // Map click handler
    mapClickEvent: function (event) {
      var map = event.originalEvent.target;
      var settings = Drupal.geofieldYmap.data[map.mapId].settings;

      $.each(Drupal.geofieldYmap.data[map.mapId].controls, function (controlName, control) {
        if (control.state.get('selected')) {
          if (!settings.multiple) {
            map.geoObjects.removeAll();
          }
          Drupal.geofieldYmap.addObjectByType(map, controlName, event.get('coords'), true);
        }
      });
    },
  };
})(jQuery);
