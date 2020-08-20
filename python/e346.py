# -*- coding: utf-8 -*-
"""
Created on Sat Jan  4 00:39:21 2020

@author: Username
"""

import sys

for n in [input()]:
    lis1=list(map(int,input().replace('\n','').split(' ')))
    for k in range(int(input())):
        fr,en=list(map(int,input().replace('\n','').split(' ')))
        sum1=0
        for i in range(fr-1,en): sum1+=lis1[i]
        print(sum1)