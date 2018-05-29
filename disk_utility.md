# disk utility
## show total usage of the current directory
du -sh .
## show list of usages of each directory present on current director
du -sh *

## show list of usages of each directory (including hidden directories) and sort them by usage size.
du -s | $(ls -A) | sort -n

