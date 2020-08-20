import sys

sys.getrecursionlimit(10000)

def f(n):
    if n==0: return 0
    elif n==1: return 1
    else: return f(n-1)+f(n-2)

def tw(n): 
    if n==0: return 1
    else: return tw(n-1)*2

for num in sys.stdin:
    n,m=list(map(int,num.replace('\n','').split()))
    #n=f(n)%tw(m)
    print(f(n)%tw(m))

