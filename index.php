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
			var key = {
				LEFT: 37,
				UP: 38,
				RIGHT: 39,
				DOWN: 40
			};

			var command = {
				LEFT: 0x08,
				UP: 0x04,
				RIGHT: 0x01,
				DOWN: 0x02
			}

			key_value = 0;

			$(document).keypress(function(e) {
				
				/* KEY PRESSED */
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

	<div class="container">	
		<div class="video_div" style="float:left; border-style:solid; border-width:5px; width:650px; height:490px; margin:0px; background-color:#C0C0C0">
		<video width="640" height="480" controls>
  			<source src="" type="video/mp4">
			Your browser does not support the video tag.
		</video> 
		</div>

		<div class="nickname_div" style="float:right; border-style:solid; border-width:5px 5px 5px 0px; margin:0px; width:490px; height:490px; background-color:#C0C0C0">
			<h1>Nicknames</h1>
		</div>

		<div class="command_div clear" style="border-style:solid; border-width:0px 5px 5px 5px;">
			<h1>Keys</h1>
			<div class="btn-group" role="group" aria-label="Basic example">
				<button id="button_left" type="button" class="btn btn-secondary" style="font-size:100px">&larr;</button>
				<button id="button_up" type="button" class="btn btn-secondary" style="font-size:100px; margin-left:10px">&uarr;</button>
				<button id="button_down" type="button" class="btn btn-secondary" style="font-size:100px; margin-left:10px">&darr;</button>
				<button id="button_right" type="button" class="btn btn-secondary" style="font-size:100px; margin-left:10px">&rarr;</button>
			</div>		
		</div>
   </div>
</body>
</html>
