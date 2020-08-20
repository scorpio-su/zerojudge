import sys

for num in sys.stdin:
    num=int(num.replace('\n',''))
    if num ==0:
        break
    outpu=''
    for i in range(1,num):
        if i%7==0:
            continue
        else:
            outpu+=str(i)+' '
    print (outpu)