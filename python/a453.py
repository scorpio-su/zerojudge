# -*- coding: utf-8 -*-
"""
Created on Tue Feb 18 01:16:34 2020

@author: Username
"""

import sys
import math as m

for n in [input()]:
    if n=='\n':continue
    for i in range(int(n)):
        a,b,c=list(map(int,input().replace('\n','').split(' ')))
        num=b*b-4*a*c
        if m.sqrt(num) == int(m.sqrt(num)): print('Yes')
        else: print('No')
        