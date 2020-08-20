import sys

for num in sys.stdin:
    num=int(num.replace('\n',''))
    for i in range(num):
        m,p=list(map(int,input().split(' ')))
        x=((p/m)-1)*100
        x=round(x*100)/100.0
        if -7.00 >= x or x>= 10.00:
            print ('%.2f'%x+'% dispose')
        else:
            print ('%.2f'%x+'% keep')