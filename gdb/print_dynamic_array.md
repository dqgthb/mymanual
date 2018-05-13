# how to print dynamic array
from art of debugging:
```
x = (int *) malloc(25 * sizeof (int));
x[3] = 12;
(gdb) p *x@25
```
