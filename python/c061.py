import sys
'''
def d(num):
    if num <= 1:
        return 1
    else:
        return d(num-1)*num
'''
def f(num):
    sum=1
    for i in range(num,1,-1):
        sum*=i
    return sum
    
for s in sys.stdin:
    s=s.replace('\n','')
    n,m=list(map(int ,s.split(' ')))
    if n==0 and m==0:
        break
    t=f(n-m)
    n=f(n)
    m=f(m)
    print (int(n/m/t))
    
    
    