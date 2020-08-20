import sys

n=int(input())

for i in range (n):
    sum=0
    fir=int(input())
    en=int(input())
    if fir %2:
        fir+=1
    for j in range (fir,en+1,2):
        sum+=j
    print ('Case {}:'.format(i+1) ,sum)