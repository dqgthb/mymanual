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

But careful, since `--mirror` will also push my remotes <= ?

Use `--dry-run` to inspect what will happen.
