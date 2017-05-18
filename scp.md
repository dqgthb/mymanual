# scp

## how to copy a file in remote dir to my place?
`scp myremote@myremote.com:~/mydir/myfile.txt .`

## how to copy a file from my local machine to remote?
```
scp ./hello.txt myremote@myremote.com:~/mydir
```

## how to change port?
```
scp -P 2222 blahblah
```

