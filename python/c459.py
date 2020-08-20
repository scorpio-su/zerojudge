def ex(x,b):
    num=0
    j=1
    #print(len(x),x)
    for i in range(len(x)-1,-1,-1):
        num+=int(x[i])*j
        #print(num,j,i)
        j*=b
    return num

n,b=list(map(int,input().replace('\n','').split()))
b,num=str(b),0
for i in range(len(b)): num+=int(b[i])**len(b)
'''
b=ex(b,n)
print(b,num)
'''
if ex(b,n) == num: print('YES')
else: print('NO')
