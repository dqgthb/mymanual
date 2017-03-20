# Clisp


## format for 3 decimals
(format t "10 Percent ~,3f ~%" .10 ) 

## format for percent, 3 decimals
(format t "10 Percent ~,3,2f ~%" .10 ) 
## format for *n, m decimals
(format t "10 Percent ~,m,nf ~%" .10 ) 
