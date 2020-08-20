import sys

for n in sys.stdin:
    n=int(n)
    if n<0:
        break
    elif n==0:
        print ('0')
    else:
        outpu=''
        pr=''
        while (n >0):
            outpu+= str(n % 3)
            n=n//3
        for i in range(len(outpu)-1,-1,-1):
            pr+=outpu[i]
        print (pr)
            
