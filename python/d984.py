# -*- coding: utf-8 -*-
"""
Created on Sun Jan 19 10:58:46 2020

@author: Username
"""

import sys

dic=['A','B','C']
for n in [input()]:
    lis1=list(map(int,n.replace('\n','').split(' ')))
    num2=sorted(lis1)[-2]
    lis1[lis1.index(num2)]+=min(lis1)
    print(dic[lis1.index(max(lis1))])
