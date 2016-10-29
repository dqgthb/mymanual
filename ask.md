# askm command

"-----------------------------"
alias ask='grep -nir '
#alias ask='grep -nir -A 2'
function askman { 
    ask "$@" ~/mymanual/
}
function askhere { 
    ask "$@" . 
}
alias gotoman='cd ~/mymanual'
"-----------------------------"

## ask function? 
You should first ask the pattern "???" and then specify the directory path (recursive search)

## askman function?
It ask directly to mymanual directory

## askhere function?
It ask directly to the current directory

## gotoman?
It goes to mymanual directory

## How to display more than one line (multiple lines) when ask?
before asking the pattern "???" you should specify the lines with -A n(number)
