# Shell manual!
## If you want to save the current working directory and use it later:
```sh
$ pwd > ~/remember.pwd
$ cd `cat ~/remember.pwd`
or
$ cd $(cat ~/remember.pwd)
```

## Go to parent directory of a symlink
```
 cd -P .. 
```
Here, -P stands for physical directory

## List directory information
ls -l -d <dirname>

## For Grep, go to
./grep.md

## If zsh ir loaded twice,##

check if .zprofile and .zshrc both exist in your home directoy.

## check, find, list all commands available for sh for all path
`type -a mycommand`
e.g.
```
type -a gcc
type -a ctags
```
## check the exit status
```
$ echo $?
```
END

## run as background process
```
$ command &
```

## exclamation mark (history expansion, substitution and interaction)
```
!! (the most recent command)
!* (the most recent arguments)
!$ (the last argument of the previous command)
```

## Run a script everytime a command is execute (like in rupa/z)
use PROMPT_COMMAND
https://unix.stackexchange.com/questions/255367/how-to-call-a-script-after-every-bash-command
