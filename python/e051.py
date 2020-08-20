# -*- coding: utf-8 -*-
"""
Created on Mon Jan  6 19:47:25 2020

@author: Username
"""

s=str(input())
an=str(s[0])
for i in range(1,len(s)-1): an+='_'
an+=s[-1]
print(an)