# -*- coding: utf-8 -*-
"""
Created on Wed Dec 11 07:51:21 2019

@author: Username
"""

import math

for t in [input()]:
    t=int(t)
    for _ in range (t):
        sum1=0
        n1,n2=list(map(int,input().replace('\n','').split(' ')))
        for i in range(1,n1+1):
            for j in range(1,n2+1):
                sum1+=math.gcd(i,j)
        print(sum1)
