# -*- coding: utf-8 -*-
"""
Created on Thu Apr  9 20:14:38 2020

@author: Username
"""

lis1=[1,1]
for i in range (1,45): lis1.append(lis1[i-1]+lis1[i])

for n in [input()]:
    n=int(n.replace('\n',''))
    print('{0}:{1}'.format(lis1[n-1],lis1[n]))
    