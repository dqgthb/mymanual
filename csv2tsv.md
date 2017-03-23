# how to?
```
sed 's/,/\t/g' test.csv > test.tsv
# In macos, for \t, press <c-v> and literal <tab>
```
## alternative using 'tr'
```
cat test.csv | tr ',' '\t' > test.tsv
```
or
```
cat test.csv | tr "," "\\t" > test.tsv
```

