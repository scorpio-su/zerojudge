# -*- coding: utf-8 -*-
"""
Created on Fri Jan  3 00:26:51 2020

@author: Username
"""

import sys

for t in range(sys.stdin):
    a,b,c=list(map(int, input().replace('\n','').split(' ')))
    tes=False
    for i in range(a+1,b):
        if i%c:
            tes=True
            print(i,end=' ')
    if tes: print()
    else: print('No free parking spaces.')