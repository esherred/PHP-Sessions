<?php 

function injectionProtect($string) {
  $string = stripslashes($string);
  $string = mysql_real_escape_string($string);
  return $string;
}

function sessionDestroy() {
  unset($_SESSION['logedin']);
  unset($_SESSION['activity_timer']);
  session_unset();
  session_destroy();
}
