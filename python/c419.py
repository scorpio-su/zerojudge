# -*- coding: utf-8 -*-
"""
Created on Tue Jan  7 16:59:35 2020

@author: Username
"""

n=int(input())
for i in range(n):
    for j in range(n-i-1):
        print('_',end='')
    for j in range(i+1):
        print('*',end='')
    print()