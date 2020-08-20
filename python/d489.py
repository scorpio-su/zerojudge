# -*- coding: utf-8 -*-
"""
Created on Tue Jan  7 16:15:27 2020

@author: Usernameo
"""

import sys

for n in [input()]:
    a,b,c=list(map(int,n.replace('\n','').split(' ')))
    num=(a+b+c)/2
    print(int(num*(num-a)*(num-b)*(num-c)))