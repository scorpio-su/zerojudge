# -*- coding: utf-8 -*-
"""
Created on Sat Jan  4 11:29:33 2020

@author: Username
"""

import sys

for n in [input()]:
    lis1=list(map(int,n.replace('\n','').split(' ')))
    mi=int(input())+30
    num=0
    for i in lis1: 
        if i<=mi: num+=1
    print(num)