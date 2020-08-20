import sys

for s in sys.stdin:
    s= s. replace('\n','')
    b= list(map(str,s.split(" ")))
    hool= str(input())
    for i in list(b):
        print(hool+',', i )