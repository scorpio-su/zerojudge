import sys

for num in sys.stdin:
    num = int (num.replace('\n',''))
    if num ==0:
        break
    for i in range(num):
        outpu=''
        for j in range(num-i-1):
            outpu+='_'
        for j in range (i+1):
            outpu+='+'
        print (outpu)