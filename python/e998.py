import sys

for n in sys.stdin:
    n=int(n)
    num=1
    for i in range(n) :
        if i%2:
            for j in range(n-1,-1,-1): print(num+j,end=' ')
        else: 
            for j in range(n): print(num+j,end=' ')
        num+=n
        print()
    print()
