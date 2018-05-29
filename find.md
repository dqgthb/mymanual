# find

## find name
Let us say, you would like to find files which contains 'blah' in their names.
    $ find {directory} -name '*blah*'
*If 'blah', then the file named exactly blah will be found.*

## exclude git
If you want to exclude .git,
    $ find {directory} -type f -not -path "*.git*"

## delete ".DS_Store"
find . -name ".DS_Store" # dry run
find . -name ".DS_Store" -delete # actually delete

