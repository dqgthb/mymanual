# brew
## how to use brew downloaded packages, commands instead of builtins?
The `/usr/local/bin` path variable should come before `/usr/bin`
If the command does not update, exit the shell and re-login.
If you want to see all the redundant packages
`type -a mycommand`
This will list all the packages available regardless of the order of path.

# brew update
update brew

# brew upgrade gcc
upgrade gcc

# brew unlink gcc & link gcc
link gcc. gcc does not replace the builtin gcc. You must use gcc-N where N is the version number.

# brew cleanup
remove all unnecessary legacy source codes after version up.
I didn't know this command for 2 years and, after I ran this code, I freed approx. 1.8 G of memory space, which was awesome.

# brew bundle
saves the
```
brew bundle dump
brew bundle
```
or
```
brew leaves > brew_leaves.txt
xargs brew install < 
```

# hello
