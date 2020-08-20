# -*- coding: utf-8 -*-
"""
Created on Tue Jan  7 10:56:43 2020

@author: Username
"""


for n in [input()]:
    lis1=list(map(str,input().replace('\n','').split(' ')))
    if lis1[-1] == '': del lis1[-1]
    #print(lis1)
    for i in range(int(n)):
        print(' '.join(k for k in lis1))
        del lis1[0]
        lis1.reverse()