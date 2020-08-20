# -*- coding: utf-8 -*-
"""
Created on Tue Jan  7 11:16:56 2020

@author: Username
"""

for n in [input()]:
    lis1=list(map(int,input().replace('\n','').split(' ')))
    lis1.sort()
    print(' '.join(str(i) for i in lis1 ))
    