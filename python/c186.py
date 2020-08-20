# -*- coding: utf-8 -*-
"""
Created on Sat Feb 22 23:20:20 2020

@author: Username
"""

import sys

for s in [input()]:
    lis1=list(map(str,s.replace('\n','').split(' ')))
    print('\n'.join(k for k in lis1))
    