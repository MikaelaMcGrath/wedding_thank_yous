<?php

/**
 * @file
 * Defines a naked two-column layout with a subcolumn bar.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Thankyou naked'),
  'category' => t('Thankyou'),
  'icon' => 'thankyou_naked.png',
  'theme' => 'thankyou-naked',
  'regions' => array(
  	'top' => t('Top'),
    'center' => t('Center'),
    'bottom' => t('Bottom'),
  ),
);
