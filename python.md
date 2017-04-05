# Python

## print without space

print(x, y, z, sep='')

## print without newline

print(x, y, z, end='')

## print in raw format (no \n interpretation)
`print(r"C:\foo\nbar") # r = raw`
Otherwise it will print
`
C:\foo
bar
`
as it interprets \n as a linebreak character.

## how to type a command in multiple lines?
`(?x) # Use free-spacing mode`
e.g.
```
line = re.sub(r"""
(?x)
<
/?
\[
\d+
>
>""", "", line)
```
[Checkout this so post.](http://stackoverflow.com/questions/5658369/how-to-input-a-regex-in-string-replace)

## regex substitute?
```
x = "hello how are you "
print(x)
import re
line = re.sub(r"\s+(\w+)\s+$",r"\1",x) # don't forget the r (raw) sign
print(line)
y = "wow"
print(x+y)
print(line+y)
```
output:
```
hello how are you 
hello low areyou
hello how are you wow
hello how areyouwow
```

## source python file inside interpreter
```
exec(open("./path/to/script.py").read(), globals())
```
