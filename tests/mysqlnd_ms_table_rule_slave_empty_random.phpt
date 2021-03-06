--TEST--
table filter: no slave rule (random)
--SKIPIF--
<?php
require_once('skipif.inc');
require_once("connect.inc");

_skipif_check_extensions(array("mysqli"));
_skipif_check_feature(array("table_filter"));
_skipif_connect($master_host_only, $user, $passwd, $db, $master_port, $master_socket);
_skipif_connect($slave_host_only, $user, $passwd, $db, $slave_port, $slave_socket);

$settings = array(
	"myapp" => array(
		'master' => array(
			"master1" => array(
				'host' 		=> $master_host_only,
				'port' 		=> (int)$master_port,
				'socket' 	=> $master_socket,
			),
		),
		'slave' => array(
			"slave1" => array(
				'host' 	=> $slave_host_only,
				'port' 	=> (int)$slave_port,
				'socket' => $slave_socket,
			),
		 ),
		'lazy_connections' => 0,
		'filters' => array(
			"table" => array(
				"rules" => array(
					$db . ".%" => array(
					  "master" => array("master1"),
					),
				),
			),
			"random" => array(),
		),
	),

);
if ($error = mst_create_config("test_mysqlnd_ms_table_rule_slave_empty_random.ini", $settings))
	die(sprintf("SKIP %s\n", $error));
?>
--INI--
mysqlnd_ms.enable=1
mysqlnd_ms.config_file=test_mysqlnd_ms_table_rule_slave_empty_random.ini
--FILE--
<?php
	require_once("connect.inc");
	require_once("util.inc");

	/* shall use host = forced_master_hostname_abstract_name from the ini file */
	$link = mst_mysqli_connect("myapp", $user, $passwd, $db, $port, $socket);
	if (mysqli_connect_errno()) {
		printf("[001] [%d] %s\n", mysqli_connect_errno(), mysqli_connect_error());
	}

	mst_mysqli_query(2, $link, "DROP TABLE IF EXISTS test");

	printf("[003] Expecting Fatal error...\n");
	mst_mysqli_query(4, $link, "DROP TABLE IF EXISTS test", MYSQLND_MS_SLAVE_SWITCH);

	print "done!";
?>
--CLEAN--
<?php
	if (!unlink("test_mysqlnd_ms_table_rule_slave_empty_random.ini"))
	  printf("[clean] Cannot unlink ini file 'test_mysqlnd_ms_table_rule_slave_empty_random.ini'.\n");
?>
--EXPECTF--
[003] Expecting Fatal error...

Fatal error: mysqli::query(): (mysqlnd_ms) Couldn't find the appropriate slave connection. 0 slaves to choose from. Something is wrong in %s on line %d