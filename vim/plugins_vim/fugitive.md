# Fugitive

## New workflow
```VIM
<leader>gap  : stands for :Git add -p %<cr>
s or e : seperate or edit patch
<leader>gco : stands for :Gcommit --verbose<cr>
```

## Typical workflow (now depricated)

    :gst<tab><cr> # this would open the git status window
    <c-n> # to move the cursor to the next listed file (<c-p> to move to thet previous one)
    p for add patch
    - for add
    cvc for commit verbal
    cc for commit
    dv for vertical git diff
    do for obtaining diff from git diff mode
    1 followed by <c-g> to see the full path of the current file
    ]c (or ]h) for searcing hunks # [c for opposite direction

## If Error (with Neovim but not vim)
Don't forget to change git core editor to nvim instead of vim
```
git config --global core.editor "nvim"
```

## How to exit gitdiff (vimdiff) in fugitive?
Some say `<c-w><c-o>`, others say <c-w>h<c-w>c
Not sure yet.

## How to type general git commands? e.g. git add -p?
Just use `:Git`
```
:Git add -p %<cr>
```
