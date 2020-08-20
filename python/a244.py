import sys

for num in sys.stdin:
    for i in range (int (num)):
        a,b,c= list(map(int,input().split(" ")))
        if a==1:
            print (b+c)
        elif a==2:
            print (b-c)
        elif a == 3:
            print (b*c)
        else:
            print (b//c)