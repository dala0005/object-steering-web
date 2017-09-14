<div class="container">	
    <div class="video_div">
    <video width=<?php echo '"' . VIDEO_WIDTH . '"' ?> height=<?php echo '"' . VIDEO_HEIGHT . '"' ?> controls>
        <source src="" type="video/mp4">
        Your browser does not support the video tag.
    </video> 
    </div>

    <div class="nickname_div">
        <h1>Nicknames</h1>
        <p>Placeholder for multiuser interface</p>
    </div>

    <div class="command_div clear">
        <h1>Keys</h1>
        <div class="btn-group" role="group" aria-label="Basic example">
            <button id="button_left" type="button" class="btn btn-secondary" style="font-size:100px">&larr;</button>
            <button id="button_up" type="button" class="btn btn-secondary" style="font-size:100px; margin-left:10px">&uarr;</button>
            <button id="button_down" type="button" class="btn btn-secondary" style="font-size:100px; margin-left:10px">&darr;</button>
            <button id="button_right" type="button" class="btn btn-secondary" style="font-size:100px; margin-left:10px">&rarr;</button>
        </div>		
    </div>
</div>