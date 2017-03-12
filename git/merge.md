# Git Merge

## How to get a list of conflicted, unmerged files?
```
git diff --name-only --diff-filter=U # here U stands for unmerged
git diff --diff-filter=U
```
or make an alias:
```
git config --global alias.conflicts "git diff --name-only --diff-filter=U"
git conflicts
```
or shell alias:
alias gcf='git diff --name-only --diff-filter=U'

