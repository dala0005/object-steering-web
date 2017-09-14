<?php
/* check if data from index.php is sent */
if(isset($_POST["key_value"]))
{
        $command_to_object = $_POST["key_value"];

       /* sending key_value to command.log */
        $command = "echo " . $command_to_object . " >> command.log";

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