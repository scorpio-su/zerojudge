# -*- coding: utf-8 -*-
"""
Created on Thu Jan  2 19:30:09 2020

@author: Username
"""

import sys

for l in [input()]:
    n,m=list(map(int, l.replace('\n','').split(' ')))
    c=str(input())
    for j in range(n):
        num=str(input())
        for i in range(len(num)):
            if num[i] == 'E': 
                num=int(num[0])
        else : num=int(num)
        num=bin(num).replace('0b','')
        '''
        try:
            int('')
        except ValueError:
            pass
        s=''
        for i in range(m):
            if num%2: s+='1'
            else: s+='0'
            num//=2
     '''
        #print(num)
        if len(num) != m:
            for i in range(m-len(num)): print('.',end=' ')
        print(num.replace("0",". ").replace("1",c+" "))
        
        