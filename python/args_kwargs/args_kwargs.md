# what is *args and **kwargs?

## why star and double star?

I personally think it is a funny but somewhat reasonable and consistent syntax.

Suppose:
```python
def myfun(*args, **kwargs):
    for i in args:
        # blah blah
        pass

myfun(1, 2, 3)
```

as you can see, myfun receives an arbitrary number of arguments, and put them inside a list (or tuple?) called args.
This is fun because in c, when we put something inside an array, we use a similar syntax:

```c
int arr[10];
*(arr + 4) = 5;
```

like this.

It feels as if we are inserting multiple arguments (e.g. 1, 2, 3 in this case) inside list called args.

What about double stars in kwargs?

Well, kwargs is basically a dictionary, so it can be implemented with pointer to pointer.
