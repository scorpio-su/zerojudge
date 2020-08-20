# -*- coding: utf-8 -*-
"""
Created on Tue Jan  7 22:05:18 2020

@author: Username
"""

a,b=list(map(int,input().replace('\n','').split(' ')))
ans=0
for i in range(a,b+1):
    if i%400 == 0 or i%4 == 0 and i% 100 !=0: ans+=1
print(ans)
