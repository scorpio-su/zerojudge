# -*- coding: utf-8 -*-
"""
Created on Sat Jan  4 00:29:15 2020

@author: Username
"""

import sys

for t in [input()]:
    if t == 'EOF': break
    t=t.replace('\n','')
    while int(t)//10:
        num=0
        for i in range(len(t)): num+=int(t[i])
        t=str(num)
    print(t)