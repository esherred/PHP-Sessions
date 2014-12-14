<?php 

  /**
   * @page Defines variables required for session scripts
   */

/**
 * Define Database Information
 * 
 * @atributes
 * HOST: host address of the database
 * USER: databae username
 * PASS: database password
 * NAME: database name
 * UTABLE: name of the user table
 */
const HOST = 'localhost';
const USER = 'root';
const PASS = 'root';
const NAME = 'session_test'
const UTABLE = 'user';

/**
 * Define Session Experience
 * 
 * @atributes
 * LOGIN: relative URL of the logint page
 * SUCCESS: relative URL of the success page
 * LOGOUT: relative URL of logout page (can be LOGIN)
 * TIMEOUT: time (in seconds) until session expires
 */
const LOGIN = '/login';
const SUCCESS = '/dashboard';
const LOGOUT = '/login';
const TIMEOUT = '900';

?>