# -*- coding: utf-8 -*-
"""
Created on Wed Jan  8 16:50:53 2020

@author: Username
"""


def f(x):
    x=int(x)
    if x == 1: return 1
    elif (x%2) ==0: return f(x//2)
    else: return f(x+1)+f(x-1) 
    
for i in [input()]:
    print(f(i))