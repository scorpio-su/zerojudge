# -*- coding: utf-8 -*-
"""
Created on Mon Jan  6 20:03:59 2020

@author: Username
"""

for n in range(int(input())):
    lis1=list(map(int,input().replace('\n','').split(' ')))
    num=lis1[0]//2+1
    print('Case {0}: {1}'.format(n+1,lis1[num]))
    