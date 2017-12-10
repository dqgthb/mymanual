# Tmux 

## About Session

## create new session
    $ tmux new -s <sesion-name>

## edit session name
    ctrl + b, $

## session termination
    exit

## kill session
    tmux kill-session [-a] [-t session_name]

## session halt (detached)
    ctrl + b, d

## list session
    $ tmux ls

## restart session (attach)
    $ tmux attach -t <session-number or session-name>

## next session
    prefix )

## previous session
    prefix (

## About Window
## create new window
    <ctrl>+b, c

## next window 
    prefix n

## previous window
    prefix p

## last window
    prefix l

## choose window
    prefix w

    1# About Pane

## last pane
    prefix ;

## horizontal split
    prefix %


## vertical split 
    prefit "

## break pane (make a new one?)  
    prefix !

## join pane (opposite of break pane)
    :join-pane -s :1 (achieve window 1 to the current window)
    :join-pane -t :1 (send the current window to window 1)

## rotate window (pane) 
    prefix C-o

## select next pane 
    prefix o 

## automated layout
    prefix space

## How to reposition, move, swap window
    swap-window -t 0
If not working,
    move-window -t 0
    swap-window -s 3 -t 1
    bind-key T swap-window -t 0

## How to: create, launch rc or tmux configuration start up control?
Session will do.
Tmuxinator
tmux-ressurect

## How to: close all windows and panes? (quit session?)
You can detach the session with prefix+d, or, if you want to completely terminate the session, you might use prefix:kill-session<cr> or type
$tmux kill-session

## How to resize with arrow keys?
<prefix> followed by <c + arrow key>
