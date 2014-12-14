<?php 

ob_start();

require('config.inc');

/**
 * Connect to server and select database
 */
mysql_connect("$sessions_host", "$sessions_user", "$sessions_pass")
or
die("Cannont Connect to server. Check server credentals or contact the webmaster."); 

mysql_select_db("$sessions_database_name")
or 
die("Cannot connect to database. Check credentals or contact the webmaster.");

/**
 * Define username and password for user and protect from injection then 
 */
$username = $_GET['username'];
$password = $_GET['password'];

$username = injectionProtect($username);
$password = injectionProtect($password);

/**
 * encrypt password for security
 */
// TODO Switch with password encriptions
$password = md5($password);

/**
 * SQL setup and execute
 */
$sql = "SELECT *
        FROM $sessions_table_user
        WHERE '$sessions_field_username'='$username'
          AND '$sessions_field_password'='$password'";

$result = mysql_query($sql);

/**
 * Parse SQL results and register session or pass 
 * failed session registration to login
 */
$count = mysql_num_rows($result);
if ($count == 1) {
  session_name('php_sessions');
  session_start();
  $_SESSION['logedin'] = true;
  $_SESSION['activity_timer'] = time();
  header('Location: '. $session_success);
} else {
  header('Location: '. $session_login . '?session=fail');
}

ob_end_flush();
