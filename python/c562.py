# -*- coding: utf-8 -*-
"""
Created on Tue Jan  7 17:54:11 2020

@author: Username
"""

for n in [input()]:
    num=0
    n=n.replace('\n','')
    for i in range(len(n)):
        if n[i] =='0' or n[i] =='6' or n[i] == '9': 
            num+=1
            continue
        if n[i] == '8':
            num+=2
            continue
    print(num)