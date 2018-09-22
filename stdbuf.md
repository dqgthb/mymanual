# how to redirect (pipe) stdout to file even when I kill the process (ctrl-c)

https://unix.stackexchange.com/questions/348921/redirect-shell-output-to-file-even-when-i-kill-the-program

```
stdbuf -oL ./a.out
```
