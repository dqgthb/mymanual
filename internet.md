In order to block website through terminal,

```
sudo nvim /etc/hosts
sudo dscacheutil -flushcache; sudo killall -HUP mDNSResponder
```
At hosts file, add twice
```
127.0.0.1   www.facebook.com // must be tab
127.0.0.1   www.facebook.com // must be tab
```

