# function pointers

## if a function returns int and takes two `int` parameters as argument,
``` c
// declare function pointers
int (*funcPointer)(int,int) = &myfunction;
```

## Why &myfunc, myfunc, *myfunc all work?
It turns out that the results of the following are the same:
``` c
printf("%p %p %p\n", &myfunc, myfunc, *myfunc);
```
