# -*- coding: utf-8 -*-
"""
Created on Mon Jan  6 20:30:34 2020

@author: Username
"""

c,w=list(map(int,input().replace('\n','').split(' ')))
num=0
while c+w>=13:
    if c>=12:
        c-=11
        num+=1
    else:
        c+=1
        w-=1
            
print(num)