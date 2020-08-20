import sys

for s in sys.stdin:
    for i in range (int(s)):
        a,b,c,d= list(map(int,input().split(' ')))
        if (b-a == c-b and d-c == c-b):
            print(a,b,c,d,d+(d-c))
        else:
            print(a,b,c,d,d*(d//c))