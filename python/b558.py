import sys

def h(n):
    if n==0:
        return 0
    else:
        return h(n-1)+n

for num in sys.stdin:
    num =int (num)
    print (h(num-1)+1)
    