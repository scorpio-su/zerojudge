import sys

for num in sys.stdin:
    num=int(num.replace('\n',''))
    n=0
    for i in range(num):
        n+=1
        a,b,c=list(map(int,input().split(' ')))
        if (a>b and b>c) or (c>b and b>a):
            print ('Case {}:'.format(n),b)
        elif (b>a and a>c) or (c>a and a>b):
            print ('Case {}:'.format(n),a)
        else:
            print ('Case {}:'.format(n),c)