# Vim manual

## Select mode?
visual mode then <c-g>. If you type anything in that state all selected letters would be deleted as if you selected on a normal editor. 

## How to map ctrl tab?
It works for gvim, but not for terminal. <c-tab> can be used.

## How to check the full path of the current file?
Press 1 followed by <c-g> to see the full path of the current file.
Pressing only <c-g> shows the path relative to Vim's current pwd.

## How to undo arrange / align / tabularize in csv?
	:unArrangeColumn (plugin csv.vim)
	:CSVUnArrangeColumn (plugin csv.vim)

## How to tabularize after the matched pattern (not including the pattern)?
	:Tabularize /,\zs (for comma separated)

