# -*- coding: utf-8 -*-
"""
Created on Sat Jan 18 23:57:10 2020

@author: Username
"""

import sys

for n in [input()]:
    n=int(n.replace('\n',''))
    n=2*(((n+1)/2)**2-1)-1
    print('%d'%(3*n))