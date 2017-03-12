# Git push

## In order to push all my branches, run either
```
git push REMOTE '*:*'
git push REMOTE --all
```
For tags,
`git push REMOTE --tags`

All in one,
`git push --mirror`

But careful, since `--mirror` will also push my remotes (?)
Use `--dry-run` to inspect what will happen.

## How to know / show / list all the files that would be pushed?
See `git/diff.md`
Intuitively, `git diff origin/master HEAD` would give the correct answer, as it compares the difference between the remote origin/master and the local HEAD.
If you want to specify a branch, `git diff origin/master master`.
If you want to show filenames only, add --stat option.


