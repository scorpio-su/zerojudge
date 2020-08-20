import sys
import numpy as np

for s in sys.stdin:
    row, column= list(map(int, s.split(' ')))
    line1=np.zeros((row,column))
    for i in range(row):
        line1[i]=input().split(' ')
    print (line1)
    print (line1.T)