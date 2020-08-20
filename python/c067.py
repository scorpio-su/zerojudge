import sys

n=0
for num in sys.stdin:
    num=int(num.replace('\n',''))
    if num ==0:
        break
    lin=list(map(int,input().split(' ')))
    n+=1
    sum=0
    for i in range(num):
        sum+=lin[i]
    av=sum/num
    sum =0
    for i in range(num):
        if lin[i] >av:
            sum +=lin[i]-av
    print ('Set #'+str(n))
    print ('The minimum number of moves is',str(int(sum))+'.')