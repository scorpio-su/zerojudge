import sys

for s in sys.stdin:
    s=s.replace('\n','')
    lin=input().split(' ')
    num=0
    for i in lin:
        if num < int(i):
            num=int (i)
    print (num)
        