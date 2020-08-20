import sys

for n in [input()]:
    n = int(n.replace('\n',''))
    sum1 =0
    for i in range (n):
        sum1+= int(input())
    if sum1//n > 59: print ('yes')
    else : print ('no')