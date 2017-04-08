2017-Apr-06 Thu 23h
# malloc
returns pointer

## Never cast type to malloc in C.

## use sizeof this way
```
int *sieve = malloc (sizeof *sieve * length)
```
\*sieve is dereferencing while (\* length) is multiplication.

## malloc vs. calloc?
```
int *sieve = calloc(sizeof *sieve, length)
```
calloc makes all the memory zero. Slow





