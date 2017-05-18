# List all Git Repo

## List all git repos and save the result to ~/mygitrepos.txt
find ~ -type d \( -path ~/Downloads -o -path ~/Documents -o -path ~/Applications -o -path ~/Google\ Drive -o -path ~/Library \) -prune -o -name '.git' > ~/mygitrepos.txt
