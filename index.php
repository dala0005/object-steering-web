<?php include('constant_variables.php') ?>
<!DOCTYPE HTML>
<html>
<head>
	<title>Control robot</title>
	<meta charset="utf-8">
  	<meta name="viewport" content="width=device-width, initial-scale=1">
  	<link rel="stylesheet" href="./bootstrap-3.3.4-dist/css/bootstrap.min.css">
  	<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.12.2/jquery.min.js"></script>
  	<link rel="stylesheet" type="text/css" href="css.css">
	  <script src="bootstrap-3.3.4-distjs/bootstrap.min.js"></script>
	  
  	<script>
		$(document).ready(function()
		{
			/* javascript keybinding */
			var key = {
				LEFT: 37,
				UP: 38,
				RIGHT: 39,
				DOWN: 40
			};

			/* keybinding to the object */
			var command = {
				LEFT: 0x08,
				UP: 0x04,
				RIGHT: 0x01,
				DOWN: 0x02
			}

			key_value = 0;


			/* KEY PRESSED */
			$(document).keypress(function(e) {
				
				if(e.keyCode == key.LEFT) {
					if((key_value & command.RIGHT) != command.RIGHT) {
						$('#button_left').css({'background-color': '#ffff'});
						key_value = (key_value | command.LEFT);
					}
				}


				if(e.keyCode == key.RIGHT) {
					if((key_value & command.LEFT) != command.LEFT) {
						$('#button_right').css({'background-color': '#ffff'});
						key_value = (key_value | command.RIGHT);
					}
				}


				if(e.keyCode == key.UP) {
					if((key_value & command.DOWN) != command.DOWN) {
						$('#button_up').css({'background-color': '#ffff'});
						key_value = (key_value | command.UP);
					}
				}


				if(e.keyCode == key.DOWN) {
					if((key_value & command.UP) != command.UP) {
						$('#button_down').css({'background-color': '#ffff'});
						key_value = (key_value | command.DOWN);
					}
				}

				if(key_value != 0) {
					$.post("send_command.php", {key_value:key_value}, function(){
						
					});
				}	
				
			});


			/* KEY RELEASED */
			$(document).keyup(function(e) {
				if(e.keyCode == key.LEFT) {
					if((key_value & command.LEFT) == command.LEFT) {
						$('#button_left').css({'background-color': '#eeee'});
						key_value = (key_value ^ command.LEFT);
					}
				}

				if(e.keyCode == key.RIGHT) {
					if((key_value & command.RIGHT) == command.RIGHT) {
						$('#button_right').css({'background-color': '#eeee'});
						key_value = (key_value ^ command.RIGHT);
					}
				}


				if(e.keyCode == key.UP) {
					if((key_value & command.UP) == command.UP) {
						$('#button_up').css({'background-color': '#eeee'});
						key_value = (key_value ^ command.UP);
					}
				}

				if(e.keyCode == key.DOWN) {
					if((key_value & command.DOWN) == command.DOWN) {
						$('#button_down').css({'background-color': '#eeee'});
						key_value = (key_value ^ command.DOWN);
					}
				}
				
			});

		});
	</script>
</head>

<body>
<?php include('content.php') ?>
</body>
</html>
