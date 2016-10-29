# Use Grep?

### If you want to find 'blah' in a certain file
    $ grep 'blah' {filename}

### If you want to find 'blah', case-insensitive, recursive in a certain directory with line numbers specified
    $ grep -nir 'blah' {directory}
*There is no difference between -r and -R*

## Multiple Grep
### Multiple grep : OR operation 
    $ grep "string1 \| string2" <filename>
or
    $ grep -E (or egrep) "string1|string2"  <filename> (recommended) 
or
    $ grep -e "string1" -e "string2" <filename>

### Multiple grep: AND operation
    $ grep "string1" <filename> | grep "string2"

## Not Grep
    $ grep -v "string" <filename>


