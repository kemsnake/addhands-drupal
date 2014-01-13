<?php

/**
 * @file
 * Implementation to display a single Drupal page while offline.
 *
 * All the available variables are mirrored in page.tpl.php.
 *
 * @see template_preprocess()
 * @see template_preprocess_maintenance_page()
 * @see bartik_process_maintenance_page()
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xml:lang="ru" xmlns="http://www.w3.org/1999/xhtml" lang="ru">
<head>
    <title>AddHands</title>
</head>
<body>
<div style="width:100%;text-align:center;">
    <img src="<?php print drupal_get_path('theme', 'addhands') . '/images/maintenance.jpg'?>">
</div>
</body>
</html>
