# -*- coding: utf-8 -*-
"""
Created on Sun Jan 12 21:24:54 2020

@author: Username
"""
import sys
import math as m

for n in [input()]:
    n=int(n.replace('\n',''))
    b=int(input())
    #a,b=list(map(int,input().replace('\n','').split(' ')))
    print(round(m.exp(m.log(b)/n)))