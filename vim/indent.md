indent
======

## Convert tabs to spaces, vice versa?
```
:set tabstop=4
:set noexpandtab
:%retab!
```
END

## Change indent level?
```
:set tabstop=2
```

## Change from n tab to 2*n tab?
```
" assume tabstop=4
:set expandtab
:%retab! " this converts a tab to 4 spaces
:set tabstop=2
:set noexpandtab
:%retab! " this converts 4 spaces to 2 tabs
:set tabstop=4

