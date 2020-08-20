# -*- coding: utf-8 -*-
"""
Created on Tue Jan  7 22:09:48 2020

@author: Username
"""

n=int(input())
lis1=list(map(str,input().replace('\n','').split(' ')))
lis1.sort()
print(' '.join(k for k in lis1))