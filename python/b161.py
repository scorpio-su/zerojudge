# -*- coding: utf-8 -*-
"""
Created on Sat Jan 18 23:26:32 2020

@author: Username
"""

import sys

def f(x):
    if x==0: return 0
    else: return 2*f(x-1)+2

for n in [input()]:
    if n=='\n':continue
    n=int(n.replace(' ','').replace('\n',''))
    print(f(n),end='\n\n')