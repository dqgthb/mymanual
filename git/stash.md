# Stash

Assume you've been working on your master branch for a while and haven't commited any. Your working directory shown by `git status` must be quite dirty.
If you type `git stash`, all the dirty results are gone, and you recover the clean state of your last commit. You know one command which does similar: `git checkout -- .`. The difference is, however, `git stash` would save the unsaved, unstaged edits and allow you to reapply them sooner or later.

```
git stash
git stash list
git stash apply
git stash apply stash@{1}
git stash drop
git stash pop

```

## Un-applying a Stash
`$ git stash show -p stash@{0} | git apply -R`
Retrieve the patch associated with a stash and apply it in reverse.
Alias example:
`$ git config --global alias.stash-unapply '!git stash show -p | git apply`

## If you have a merge conflict,
`git stash branch testchanges`



