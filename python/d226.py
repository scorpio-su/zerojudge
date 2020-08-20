# -*- coding: utf-8 -*-
"""
Created on Sun Jan 19 11:20:04 2020

@author: Username
"""

import sys

for n in [input()]:
    a,b=list(map(int,n.replace('\n','').replace('\t',' ').split(' ')))
    print(a*b*2)