<?php 

  /**
   * @page Defines variables required for session scripts
   */

/**
 * Define Database Information
 * 
 * @atributes
 * sessions_host: host address of the database
 * sessions_user: databae username
 * sessions_pass: database password
 * sessions_database_name: database name
 * sessions_table_user: name of the user table
 * sessions_field_username: name of the username field in the table
 * sessions_field_password: name of the password field in the table
 */
$sessions_host = 'localhost';
$sessions_user = 'root';
$sessions_pass = 'root';
$sessions_database_name = 'session_test'
$sessions_table_user = 'user';
$sessions_field_username = 'username';
$sessions_field_password = 'password';


/**
 * Define Session Experience
 * 
 * @atributes
 * session_login: relative URL of the logint page
 * session_success: relative URL of the success page
 * session_logout: relative URL of logout page (can be LOGIN)
 * session_timeout: time (in seconds) until session expires
 */
$session_login = '/login';
$session_success = '/dashboard';
$session_logout = '/login';
$session_timeout = '900';

require('functions.inc');
