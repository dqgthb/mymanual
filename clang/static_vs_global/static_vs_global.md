# what is the difference between static and global?

``` c
#include <stdio.h>

static int static_var;
int just_global_var;

int main(){
    static_var = 4;

    return 0;
}
```

Summary:
- global variables are accessible across different modules as well via extern keyword.
- However, if static keyword is declared, you tell the linker that the variable will be used only within this file.

Summary in terms of scope:
- global variable's scope is all; it includes other files (translation units).
- static keyword limits the variable's scope to the current file (translation unit) only.
