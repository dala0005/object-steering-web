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
				<button type="button" class="btn btn-secondary" style="font-size:100px">&larr;</button>
				<button type="button" class="btn btn-secondary" style="font-size:100px; margin-left:10px">&uarr;</button>
				<button type="button" class="btn btn-secondary" style="font-size:100px; margin-left:10px">&darr;</button>
				<button type="button" class="btn btn-secondary" style="font-size:100px; margin-left:10px">&rarr;</button>
			</div>		
		</div>
   </div>
</body>
</html>
