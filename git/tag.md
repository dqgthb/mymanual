# Git TAG

## Annotated tag vs. lightweight tag

## How to create a tag
`$ git tag -a v1.0.1 -m "this is my first tag!"`

## How to push tags to remote
`$ git push --tags`
`$ git push <remote> tag <tagname>`

According to Mateusz Konieczny from [SO](http://stackoverflow.com/a/2988099), we should avoid --tags and use:
`git push origin <tagname>`


## How to remove a tag
`$ git tag -d v1.0`
`$ git push origin :v1.0`
Then it is gone!
