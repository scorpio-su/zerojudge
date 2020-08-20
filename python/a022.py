import sys

for s in sys.stdin:
    s= s.replace('\n','')
    if s[::-1] == s:
        print ('yes')
    else:
        print ('no')