import sys

for s in sys.stdin:
    s=s.replace('\n','')
    n,m=list(map(int,s.split(' ')))
    h = [0]*2*n
    tr=input().split(' ')
    for i in tr:
        h[int(i)] +=1
        if h[int(i)] == 2:
            n-=1
        else:
            continue
    print (n)