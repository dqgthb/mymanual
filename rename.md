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
