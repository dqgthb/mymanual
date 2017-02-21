# Anki

## one by one, sequential cloze reveal

	<script>
		var clozes = document.getElementsByClassName("cloze");
		var clr = window.getComputedStyle(clozes[0]).color;
		var bg = window.getComputedStyle(clozes[0]).background;
		for (i=1; i<clozes.length; ++i) {
		  clozes[i].style.background = clr;
			clozes[i].onclick = function() {this.style.background=bg ;}
		}
	</script>

Append the above code to 'browse'->'cards'-> back template
Mouse click would reveal the answers
	

