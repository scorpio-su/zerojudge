# -*- coding: utf-8 -*-
"""
Created on Tue Feb 18 00:45:03 2020

@author: Username
"""

import sys

for s in [input()]:
    if len(s)%2 != 0: 
        print('NO')
        continue
    num=len(s)//2
    tes=0
    #print(s[:num])
    #print(s[:num-1:-1])
    if s[:num] == s[:num-1:-1]: tes=1
    if tes==1:
        print('YES')
        print(s[:num])
    else: print('NO')
