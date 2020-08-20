import sys
sys.setrecursionlimit(1005)

def h(nu):
    if nu == 1:
        return 1;
    else:
        return nu+h(nu-1)
    
for num in sys.stdin:
    print (h(int(num)))

