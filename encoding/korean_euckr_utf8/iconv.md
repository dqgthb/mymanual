## encoding solution

convert encoding from euc-kr to utf-8

$ iconv -c -f EUC-KR -t UTF-8 file1 > file2

where -c stands for "continue on error: omit invalid characters from output"
