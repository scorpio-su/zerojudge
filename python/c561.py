# -*- coding: utf-8 -*-
"""
Created on Tue Jan  7 17:10:22 2020

@author: Username
"""

max1=-1
n=int(input())
lis1=list(map(str,input().replace('\n','').split(' ')))
if lis1[-1] == '': del lis1[-1]
for a in lis1:
    a=int(a)
    num=0
    while a>0: 
        num=num*10+a%10
        a//=10
    max1=max(num,max1)
print(max1)