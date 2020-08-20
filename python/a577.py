# -*- coding: utf-8 -*-
"""
Created on Sat Nov 16 00:33:57 2019

@author: Username
"""
import sys

for num1 in sys.stdin:
    if num1 == '\n' : continue
    if num1 == 'EOF' : break
    num1 = int(num1)
    num2 = int(input().replace('\n',''))
    print (num1*num2)