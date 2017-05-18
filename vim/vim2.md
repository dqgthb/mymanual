-   [Vim manual](#vim-manual)
    -   [Install with brew?](#install-with-brew)
    -   [Select mode?](#select-mode)
    -   [How to map ctrl tab?](#how-to-map-ctrl-tab)
    -   [How to check the full path of the current
        file?](#how-to-check-the-full-path-of-the-current-file)
    -   [How to undo arrange / align / tabularize in
        csv?](#how-to-undo-arrange-align-tabularize-in-csv)
    -   [How to tabularize after the matched pattern (not including the
        pattern)?](#how-to-tabularize-after-the-matched-pattern-not-including-the-pattern)
    -   [How to insert a timestamp or
        date?](#how-to-insert-a-timestamp-or-date)
    -   [Move to last latest buffer?](#move-to-last-latest-buffer)
    -   [List all buffers?](#list-all-buffers)
    -   [How to insert a line? Repeat n times of
        `#,-,*`?](#how-to-insert-a-line-repeat-n-times-of--)
    -   [If indentation, comment, commenting does not work well (related
        to filetype, formatoptions,
        comments)](#if-indentation-comment-commenting-does-not-work-well-related-to-filetype-formatoptions-comments)
    -   [My vim is too slow. How do I check which plugin is making this
        lag?](#my-vim-is-too-slow.-how-do-i-check-which-plugin-is-making-this-lag)
    -   [temporarily quit vim and go to terminal
        (suspend)](#temporarily-quit-vim-and-go-to-terminal-suspend)
    -   [How to remember yanked text only, not
        (d/D/x/X/c/C/s/S)?](#how-to-remember-yanked-text-only-not-ddxxccss)
    -   [How to check which file sets what? (e.g. set
        tw?)](#how-to-check-which-file-sets-what-e.g.-set-tw)
    -   [When using substitute(), if it does not work as
        expected](#when-using-substitute-if-it-does-not-work-as-expected)
    -   [Replace / substitute from line 10 to line
        15](#replace-substitute-from-line-10-to-line-15)
    -   [How to indent / unindent a line in insert mode?
        indentation?](#how-to-indent-unindent-a-line-in-insert-mode-indentation)
    -   [How to view help files in full
        screen?](#how-to-view-help-files-in-full-screen)
    -   [How to maximize current
        buffer?](#how-to-maximize-current-buffer)
    -   [How to switch to a specific
        buffer?](#how-to-switch-to-a-specific-buffer)
    -   [How to see all existing buffers including hidden
        buffers?](#how-to-see-all-existing-buffers-including-hidden-buffers)
    -   [How to execute one normal mode command in insert
        mode.](#how-to-execute-one-normal-mode-command-in-insert-mode.)
    -   [How to navigate cursor in insert
        mode.](#how-to-navigate-cursor-in-insert-mode.)
    -   [How to repeat find 'x' (fx)
        command?](#how-to-repeat-find-x-fx-command)
    -   [What is magic, very magic, nomagic in substitution regex ? (\v,
        \m, \M,
        \V)](#what-is-magic-very-magic-nomagic-in-substitution-regex)
    -   [How to add letters at the end of multiple
        lines?](#how-to-add-letters-at-the-end-of-multiple-lines)
    -   [How to use command line window? Edit command line history?
        Reuse?
        q:?](#how-to-use-command-line-window-edit-command-line-history-reuse-q)
    -   [When joining lines with J key, vim adds space in between. How
        to prevent
        this?](#when-joining-lines-with-j-key-vim-adds-space-in-between.-how-to-prevent-this)
    -   [subsitute, replace faster?](#subsitute-replace-faster)
    -   [How to stop highlighting search
        result?](#how-to-stop-highlighting-search-result)

Vim manual
==========

Install with brew?
------------------

In order to use neocomplete,

    brew install vim --with-cscope --with-lua
    brew install macvim --with-cscope --with-lua
    brew linkapps macvim

It seems like `brew linkapps macvim` does not work properly for Mac
Spotlight. I should manually option+command+drag (alias) the
"/usr/local/Cellar/macvim/8.0-127/MacVim.app" to "/Applications/"
directory and it works for spotlight.

Select mode?
------------

visual mode then <c-g>. If you type anything in that state all selected
letters would be deleted as if you selected on a normal editor.

How to map ctrl tab?
--------------------

It works for gvim, but not for terminal. <c-tab> can be used.

How to check the full path of the current file?
-----------------------------------------------

Press 1 followed by <c-g> to see the full path of the current file.
Pressing only <c-g> shows the path relative to Vim's current pwd.

How to undo arrange / align / tabularize in csv?
------------------------------------------------

    :unArrangeColumn (plugin csv.vim)
    :CSVUnArrangeColumn (plugin csv.vim)

How to tabularize after the matched pattern (not including the pattern)?
------------------------------------------------------------------------

    :Tabularize /,\zs (for comma separated)

How to insert a timestamp or date?
----------------------------------

    in normal mode type -> !!date
    in command mode type -> r!date

Move to last latest buffer?
---------------------------

    <c-^>

List all buffers?
-----------------

    :buffers / :ls / :files

How to insert a line? Repeat n times of `#,-,*`?
------------------------------------------------

In normal mode, `80a#<ESC>` As soon as the ESC is pressed, \# will be
appended 80 times to the line where the cursor is located. It is
interesting that, if `<c-c>` is pressed instead of `<ESC>`, the command
does not work.

If indentation, comment, commenting does not work well (related to filetype, formatoptions, comments)
-----------------------------------------------------------------------------------------------------

It is probably due to cindent. Disable it.

My vim is too slow. How do I check which plugin is making this lag?
-------------------------------------------------------------------

    :profile start profile.log
    :profile func *
    :profile file *
    " At this point do slow actions
    :profile pause
    :noautocmd qall!

temporarily quit vim and go to terminal (suspend)
-------------------------------------------------

        <c-z>
        # if you want to come back
        $ fg

How to remember yanked text only, not (d/D/x/X/c/C/s/S)?
--------------------------------------------------------

0 register would hold the yanked text only.

How to check which file sets what? (e.g. set tw?)
-------------------------------------------------

`:verbose set textwidth`

When using substitute(), if it does not work as expected
--------------------------------------------------------

Replace " (double quote) into ' (single quote). For example, for
markdown checkbox function, `"\(^\s*-\s\)"` does not work while
`'\(^\s*-\s\)'` works.

Replace / substitute from line 10 to line 15
--------------------------------------------

`:10,15s/patt1/sub/gc`

How to indent / unindent a line in insert mode? indentation?
------------------------------------------------------------

`<c-t>` indents a line while `<c-d>` unindents a line. This is useful
for markdown listing.

How to view help files in full screen?
--------------------------------------

`:only` `:h <helpfile> | only`

How to maximize current buffer?
-------------------------------

`:only`

How to switch to a specific buffer?
-----------------------------------

    :buffer <name> or <number>
    :b
    :bu 
    :buf
    :e #1 <- buffer number

How to see all existing buffers including hidden buffers?
---------------------------------------------------------

    :ls!
    :files!
    :buffers!

How to execute one normal mode command in insert mode.
------------------------------------------------------

ctrl o will allow you to execute one normal mode command in insert mode.

How to navigate cursor in insert mode.
--------------------------------------

ctrl o will allow you to execute one normal mode command in insert mode.
Just press ctrl and 'o' at the same time and press normal mode command.

How to repeat find 'x' (fx) command?
------------------------------------

; repeats f, , reverses f

What is magic, very magic, nomagic in substitution regex ? (\v, \m, \M, \V)
---------------------------------------------------------------------------

:h magic It is basically a set of different ways to interpret a symbol.

How to add letters at the end of multiple lines?
------------------------------------------------

visual select lines and `:s/$/foo/gc` or macro

How to use command line window? Edit command line history? Reuse? q:?
---------------------------------------------------------------------

q: and it will lead to command line history window. You navigate as if
normal mode, edit, and enter insert mode and edit, and press enter to
repeat the command.

When joining lines with J key, vim adds space in between. How to prevent this?
------------------------------------------------------------------------------

`set nojoinspaces` this not works `gJ` This works

subsitute, replace faster?
--------------------------

    /{ searchword } <cr>
    cgn
    { replaceword }
    . {dot}
    . ...

How to stop highlighting search result?
---------------------------------------

`:noh`
