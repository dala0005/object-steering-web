<?php
/* check if data from index.php is sent */
if(isset($_POST["led_status"]))
{
	/* $led_status can contain 0 or 1 */
	$led_status = $_POST["led_status"];

	/* a command to send 0 or 1 to nc (netcat - terminal program for tcp) that sends 0 or 1 to IP and Port */
	$command = "echo " . $led_status . " | nc 192.168.0.9 8888";
	
	/* execute */
	shell_exec($command); 
}

/* no data sent from index.php */
else
{
	/* redirect user to index.php */
	header('Location: index.php');
}


?>