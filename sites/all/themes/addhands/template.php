<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */


function  addhands_form_user_login_block_alter(&$form, &$form_state) {
	$form['name']['#size'] = 29;
	$form['pass']['#size'] = 29;

	$form['links']['#markup'] = l(t('Request new password'), 'user/password', array('attributes' => array('title' => t('Request new password via e-mail.'))));
	$form['links']['#weight'] = 5;
	$form['fbconnect_button']['#weight'] = -3;
}

function addhands_process_page(&$vars) {
  if (arg(0) == 'user'){
    //скрываем заголовки
    $vars['title'] = FALSE;
    //скрываем табы от обычных пользователей на странице личного кабинета
    if (isset($vars['tabs']) && !user_access('administer users')){
      $vars['tabs'] = array();
    }
  }
}