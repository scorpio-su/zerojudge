# -*- coding: utf-8 -*-
"""
Created on Sat Feb 22 22:56:10 2020

@author: Username
"""

import datetime


d1=datetime.datetime(2011,10,1)
d2=datetime.datetime(2011,10,20)
print(d1-d2)

'''
for s in [input()]:
    a,b,c=list(map(int,s.replace('\n','').split(' ')))
    d1=datetime.datetime(a,b,c)
    a,b,c=list(map(int,input().replace('\n','').split(' ')))
    d2=datetime.datetime(a,b,c)
    num=(d1-d2)
    print(abs((d1-d2).days))
'''