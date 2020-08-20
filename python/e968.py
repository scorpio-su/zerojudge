n=int(input())
data =list(map(int,input().replace('\n','').split()))

for i in range(n,0,-1):
    for j in data:
        if i==j:break
    else:print('No. {}'.format(i))

