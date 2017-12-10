# Rename manual
## change extension
### For macOS
    $ brew install ren
    $ ren '*.txt' '#1.md'

## Rename, delete a certain patterns for multiple files
### For macOS
    $ brew install rename
    $ ls
    praccpp/    pracc/  pracpy
    $ rename 's/^prac//'
    $ ls
    cpp/ c/ py/k

## Use regex
```
rename -n 's/(\w+) - (\d{1})x(\d{2}).*$/S0$2E$3\.srt/' *.srt
```
-n stands for dryrun