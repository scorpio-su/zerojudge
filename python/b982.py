# -*- coding: utf-8 -*-
"""
Created on Wed Jan  8 21:13:00 2020

@author: Username
"""

import math

for b in [input()]:
    b=b.replace('\n','')
    num=''
    n=0
    for i in range(len(b)):
        if b[i] == 'g':
            n+=int(num)*8000000000
            num=''
        elif b[i] == 'm': 
            n+=int(num)*8000000
            num=''
        elif b[i] == 'k':
            n+=float(num)*8000
            num=''
        elif b[i] == 'b':
            if i == len(b)-1: break
            elif b[i+1] == 'y': n+=float(num)*8
            else: n+=int(num)
            num=''
        else: num+=b[i]
    print(math.ceil(n))
            