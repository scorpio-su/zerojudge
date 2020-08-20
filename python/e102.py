import sys

for num in sys.stdin:
    num=int(num)
    for i in range(num):
        n,k=list(map(int,input().replace('\n','').split(' ')))
        ans=1
        for j in range(n,k,-1):
            ans*=j
        for j in range(1,n-k+1):
            ans/=j
        print (int(ans))
        