# Git reset

git reset HEAD means that the current index is reset to the last committed status (the HEAD), while the working directory is unaffected.

If --hard option is added, not only the index but also the working directory is reset to HEAD. Since the unsaved changes cannot be reverted, this is the reason `--hard option` is considered dangerous.

## Difference between checkout and reset

Let us say, HEAD is currently pointed to master branch.
If `git checkout 9e5e6a4`, the HEAD moves to the specified commit while master stays the same.
If `git reset 9e5e6a4`, not only the HEAD but also the master branch itself move to the specified commit, no matter what form of `reset`.
For `--soft`, this is the only thing you do.

### git reset --soft HEAD~
`git reset --soft HEAD~` moves both the HEAD & master back to the previous commit, forgetting the latest commit. 
```
git reset --soft HEAD~
git commit -c ORIG_HEAD
```
is identical with 
`git commit --amend`.
in some sense. [Refer to this document.](https://git-scm.com/book/en/v2/Git-Tools-Reset-Demystified)


