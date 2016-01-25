$(document).ready(function(){
	// editMode
	var editMode = ($('#MSOLayout_InDesignMode').val() == 1) ? true : false;

	// Carousel
	if(!editMode){
		if($('.carouselItem').length > 0) { // run carousel script
			$('#carousel').cycle({
				speed: 500,
				slides: '.carouselItem',
				next: '#carouselNext',
				prev: '#carouselPrev',
				pauseOnHover: true
			});
		}
	}
});