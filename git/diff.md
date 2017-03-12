# diff 
I have two local branches, master and test.
I pushed test1 file to origin/master
I created test2.txt in master branch and committed.
I created test3.txt in master branch but yet committed. If I checkout to test, the test3 exists while test2 does not.
It seems like if I commit it to a certain branch, the file is invisible in other branches.

In master branch,
the results of git diff is,
`git diff master test` : test2 file deleted 
This means that `git diff A B` can be interpreted as:
"What is required for A to be identical with B?"

`git diff HEAD` 
If there is only one argument, it seems like it is indentical with `git diff HEAD <current working tree>`
In otherwords: "what are the differences between the current works and the last committed works?"
"What is required for HEAD to be added and deleted in order to be identical with `<current working tree>`?

It seems like, if you are in master branch, let us say,
then `git diff HEAD` is equal to `git diff master`, meaning that HEAD and the name of branch are pointing to the same records.
## How to know / show / list all the files that would be pushed?
Intuitively, `git diff origin/master HEAD` would give the correct answer.
If you want to specify a branch, `git diff origin/master master`.


