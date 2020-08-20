import sys

for n in sys.stdin:
    n=list(map(str,n.replace('\n','').split()))
    #num=int(input())
    print(n[-int(input())])