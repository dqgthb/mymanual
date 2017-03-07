# Shell manual!
#### If you want to save the current working directory and use it later:
```sh
$ pwd > ~/remember.pwd
$ cd `cat ~/remember.pwd`
or
$ cd $(cat ~/remember.pwd)

## Go to parent directory of a symlink
$ cd -P .. 
Here, -P stands for physical directory

## List directory information
ls -l -d <dirname>

## For Grep, go to
./grep.md

## If zsh ir loaded twice,
check if .zprofile and .zshrc both exist in your home directoy.
