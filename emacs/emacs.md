# emacs

## how to determine key to function, function to key?
```
C-h k <key-sequence>
```
END
## how to kill a buffer?
```
C-x k <tab>
```
END
## how to load init.el?
```
M-x load-file <cr><cr>
```
END
## how to maximize current buffer?
```
C-x 1
```
END
## how to minimize (kill) current buffer?
```
c-x 0
```
END
### select next window
```
C-x o
```
END
### Switch to another buffer
```
C-x b
```
END
## List of buffers
```
C-x C-b
```
END

## how to kill multiple buffers?
```
m-x kill-matching-buffers
m-x ibuffer <- preferred
m-x kill-some-buffers
m-x kill-matching-buffers
```
END

## How to get rid of mini buffer (small window)?
```
q
c-x 0
```
END

## How to kill all other buffers?
```
(global-set-key (kbd "C-x C-b") 'ibuffer)
m mark
t toggle
D kill all marked buffers

or
d, d, d ... to mark for deletion
x to delete the buffers marked for deletion
```