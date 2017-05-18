# const-pointer

```
const int *ptr;
int const *ptr;
int *const ptr;
```
The first and the second one is the same. The 'int' is constant and not modifiable. You cannot do `*ptr = 42`.
The third one is different. The 'int*' is constant. You cannot change the pointer itself and using pointer arithmetic is impossible. You cannot do `ptr++`.

```
const int* ptr; // can modify ptr, cannot modify *ptr (pointer to const int)
int* const ptr; // can modify *ptr, cannot modify ptr (const pointer to int)
```
END


