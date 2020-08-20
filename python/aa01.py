import sys

n=int(input())
outpu=''
if n !=0:    
    lis=list(map(int,input().replace('\n','').split(' ')))
    maxn=0
    max2=0
    for i in range(n):
        maxn=max(max2,lis[i])
        if lis[i] == max2:
            outpu += ' '+str(i)
            max2=maxn
        elif maxn > max2:
            max2=maxn
            outpu = str(i)
        else:
            continue

print (outpu)

