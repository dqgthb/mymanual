# Vim manual

## Install with brew?
In order to use neocomplete,
```
brew install vim --with-cscope --with-lua
brew install macvim --with-cscope --with-lua
brew linkapps macvim
```
It seems like `brew linkapps macvim` does not work properly for Mac Spotlight. I should manually option+command+drag (alias) the "/usr/local/Cellar/macvim/8.0-127/MacVim.app" to "/Applications/" directory and it works for spotlight.

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

## How to insert a timestamp or date?
	in normal mode type -> !!date
	in command mode type -> r!date

## Move to last latest buffer?
	<c-^>

## List all buffers?
	:buffers / :ls / :files

## How to insert a line? Repeat n times of #,-,*?
In normal mode,
    80a#<ESC>
As soon as the ESC is pressed, # will be appended 80 times to the line where the cursor is located.
It is interesting that, if <c-c> is pressed instead of <ESC>, the command does not work. 

## If indentation, comment, commenting does not work well (related to filetype, formatoptions, comments) 
It is probably due to cindent. Disable it.

## My vim is too slow. How do I check which plugin is making this lag?
    :profile start profile.log
    :profile func *
    :profile file *
    " At this point do slow actions
    :profile pause
    :noautocmd qall!

## temporarily quit vim and go to terminal (suspend)
    <c-z>
    # if you want to come back
    $ fg

## How to remember yanked text only, not (d/D/x/X/c/C/s/S)?
0 register would hold the yanked text only.

## How to check which file sets what? (e.g. set tw?)
`:verbose set textwidth`

## When using substitute(), if it does not work as expected
Replace " (double quote) into ' (single quote).
For example, for markdown checkbox function,
`"\(^\s*-\s\)"` does not work while `'\(^\s*-\s\)'` works.

## Replace / substitute from line 10 to line 15
`:10,15s/patt1/sub/gc`
