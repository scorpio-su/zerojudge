import sys

for num in sys.stdin:
    a,b=list(map(int,num.replace('\n','').split(' ')))
    num=0
    for i in range (a,b+1):
        if i%2==0:
            num+=1
    print (num)