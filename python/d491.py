a,b =list(map(int, input().replace('\n','').split()))
if a>b: a,b=b,a
num=0
if a%2 ==1: a+=1
for i in range(a,b+1,2): num+=i
print(num)