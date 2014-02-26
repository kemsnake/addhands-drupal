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
})(jQuery);