# pointer

Short intuition:
    If you pass a variable to a function, its value is copied and passed to the function, not the address. This means that, you can do whatever you want except for affecting original variable. Likewise, if you pass a pointer to a function, you can modify it's dereferenced variable's value but not the pointer itself. In that case, you are using double pointer.

Remember this. If you pass something to a function, they are passed my value, not by address. Even if they are pointers, double pointers or whatever, it doesn't matter. Don't get confused when you are passing a pointer to a function. You are not passing a variable by address, but you are passing another variable and that variable's value happens to be the address of the variable you would like to modify. There is a clear difference in this. 
I'll remind you why.

If you declare a variable, a three things will be remembered by the compiler.
- name
- value
- address

For example, if you write
`int hello = 5`
then
- name: hello
- value: 5
- address: some random 0x123456

