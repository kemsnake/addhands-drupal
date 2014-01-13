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

            function resizeBl(){
                var w = $('body').width();
                if (w < 960) w = 960;
                var m = 0 - (w-960)/2;
                $('.front #block-block-5').css('width', w);
                $('.front #block-block-5').css('margin-left', m);
            }

        }
    };
})(jQuery);