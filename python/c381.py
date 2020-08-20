import sys

for s in sys.stdin:
    n,m=list(map(int,s.split(' ')))
    if n == 0 and m ==0:
        break
    inpu=''
    outpu=''
    for i in range (n):
        inpu+=str(input())
    needpu=list(map(int,input().split(' ')))
    for j in needpu:
        outpu+=inpu[j-1]
    print (outpu)