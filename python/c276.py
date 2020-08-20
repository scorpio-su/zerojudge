num=str(input())
data =[i for i in num]
#print(data)
for _ in range(int(input())):
    a,b=0,0
    num=str(input())
    data2 =[i for i in num]
    for j in range(4): 
        if data2[j] == data[j]: 
            a+=1
            continue
        for k in range(4):
            if k == j: continue
            if data2[j] == data[k]: 
                b+=1
                break

    print('{}A{}B'.format(a,b))
