import sys

for n in sys.stdin:
    n = list(map(int,n.replace('\n','').split(' ')))
    sum1 =0
    for i in range (1,n[0]+1):
        sum1 += n[i]
    if sum1/n[0] > 59: print ('no')
    else : print ('yes')