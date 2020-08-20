# -*- coding: utf-8 -*-
"""
Created on Thu Apr  9 20:42:25 2020

@author: Username
"""

a=[]
n = int(input())
for i in range(n):
  b=input().split()
  b.append(int(b[1])*int(b[4])*int(b[3])/int(b[2]))
  a.append(b)
a.sort(key=lambda x:x[5], reverse=True)
print('\n'.join(a[i][0] for i in range(n))) 
