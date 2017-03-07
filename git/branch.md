# Git branch

## Check existing branches
`$ git branch`

## normal workflow
* create branch `git branch develop` from master branch
* The new branch would resemble the branch where the above command was typed in. If new branch is created from develop branch, then the new branch would have files that develop branch has, not the files of master branch.
* checkout to the new branch created.
    `$ git checkout develop`
    The above two commands can be simplified as following:
    `$ git checkout -b develop`
* If merge needed, checkout to the directory you would like to retain, then use `git merge`.
    `$ git checkout master`
    `$ git merge develop`

## how to delete a branch?
After ensuring that the data is all pushed,
`$ git branch -d develop`
