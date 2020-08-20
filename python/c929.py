import sys

for s in sys.stdin:
    s=s.replace('\n','')
    data=list(map(str,input().replace('\n','').split(s)))
    #print(data)
    print('\n'.join(data))