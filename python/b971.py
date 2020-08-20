# -*- coding: utf-8 -*-
"""
Created on Sat Jan  4 11:08:56 2020

@author: Username
"""

import sys

for n in [input()]:
    fr,en,di=list(map(int,n.replace('\n','').split(' ')))
    if en < fr : en-=1
    else : en+=1
    for i in range (fr,en,di):
        print(i,end=' ')
    print()