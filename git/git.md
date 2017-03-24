# Git 

## ignore staged files using .gitignore not working. How to fix?
http://stackoverflow.com/questions/28101020/git-status-is-showing-changes-not-staged-for-commit-for-files-listed-in-gitig

    git update-index --skip-worktree file1 file2 ...

## How to clone to a specific directory?
```
git clone git@github.com:whatever folder-name
```

## If git does not detect rename of files or directory (mv initvimfiles nvimfiles)
Revert back the names and use `git mv`

## How to automatically push after commit
Create `.git/hooks/post-commit`
with contents of
```
#!/bin/sh
git push origin master
```

## Edit git config --global global
```
git config --global --edit
git config --global --unser core.excludesfile
```
