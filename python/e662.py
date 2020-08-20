# -*- coding: utf-8 -*-
"""
Created on Mon Jan  6 20:15:11 2020

@author: Username
"""

import sys

for n in [input()]:
    a,b=list(map(str,n.replace('\n','').split(' ')))
    if a == '0' and b == '0': break
    b=b.replace(a,'')
    if b == '':b='0'
    print(int(b))