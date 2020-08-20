# -*- coding: utf-8 -*-
"""
Created on Wed Jan  8 17:24:59 2020

@author: Username
"""

import math
import sys

for t in [input()]:
    t=int(t.replace('\n',''))
    if t == 0: break
    lis1=list(map(int,input().replace('\n','').split(' ')))
    a=lis1[0]
    for i in range(1,t): a=a*lis1[i]//math.gcd(lis1[i],a)
    print(a)
    
    