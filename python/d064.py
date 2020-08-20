import sys

for s in sys.stdin:
    s=s.replace('\n','')
    if int(s)%2 ==0:
        print ('Even')
    else:
        print ('Odd')