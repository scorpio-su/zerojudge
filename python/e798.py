a=[]

def fourmax(x,y):
    temp=a[x][y]
    for i in range(2):
        for j in range(2):
            if (a[i+x][j+y]>temp): temp = a[i+x][j+y]
    return temp

n =int(input())
for i in range(n): a.append(list(map(int,input().replace('\n','').split())))
for i in range(0,n,2):
    for j in range(0,n,2):
        print(fourmax(i,j),end=' ')
    print()