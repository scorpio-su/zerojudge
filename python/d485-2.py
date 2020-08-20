import sys

for num in sys.stdin:
    a,b=list(map(int,num.replace('\n','').split(' ')))
    if (b-a) %2:
        num=(b-a)//2+1
    else:
        num=(b-a)//2
    if a%2==0 and b%2==0:
        print (num+1)
    else:
        print (num)
