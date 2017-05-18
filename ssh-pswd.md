# SSH-PSWD

## ssh-keygen
```
# at local machine
ssh-keygen -t rsa
# at remote machine, create .ssh directory
mkdir ~/.ssh
# append local machine's public key to remote machine
cat .ssh/id_rsa.pub | ssh b@B 'cat >> .ssh/authorized_keys'
```

## key-gen not work. What to do?
```
ssh-add -D
cp ~/.ssh/id_rsa.pub ~/.ssh/authorized_keys #don't know why but works
ssh-add
```

## doesn't work.. Why?
`chmod 600 ~/.ssh/authorized_keys` does not work, because of NTFS. Maybe this is the reason.

## Another solution?
Dangerous for security but this works.

```
#!/usr/bin/expect -f
spawn ssh -p 1004 s2016112648@linux.mme.dongguk.edu
expect "assword:"
send "lee950324\r"
interact
```
Then
```
$ expect ~/exp.sh
```
