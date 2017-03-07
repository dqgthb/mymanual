# VIMSCRIPT
## how to create a command
```
function! MyFunction()
blah
endfunction

command! MyCom1 call MyFunction()
```

## How do I get a line string? getline?
```
let line = getline('.') " cursor
let line = getline('2') " 2nd line

```

## How to write at a certain line? setline?
```
call setline('.',line) "current line is overwritten by string stored in variable 'line')
```
