<?php
/**
 * @file
 * Plain layout template, simply printing the content areas in divs.
 */
?>
<div class="content-wrapper">
	<div class="top-wrapper">
		<?php print $content['top']; ?>
	</div>

	<div class="center-wrapper">
		<?php print $content['center']; ?>
	</div>
	<div class="bottom-wrapper">
		<?php print $content['bottom']; ?>
	</div>
</div>


