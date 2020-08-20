import sys

def f(n):
    if n <=1 : return 1
    elif 2<=n<=3: return 2
    else: return f(n-2)+f(n-3)

for n in [input()]:
    n=int(n)
    print(f(n))