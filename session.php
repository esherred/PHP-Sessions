<?php

session_name('php_sessions');
session_start();

require('config.inc');

if (!isset($_SESSION['logedin']) ||
  !$_SESSION['logedin'] ||
  !isset($_SESSION['activity_timer'])
  ) {
  sessionDestroy();
  header('Location: ' . $session_login . '?session=false');
} elseif (time() - $_SESSION['activity_timer'] > $session_timeout) {
  sessionDestroy();
  header('Location: ' . $session_logout . '?session=expired');
} else {
  $_SESSION['activity_timer'] = time();
}
