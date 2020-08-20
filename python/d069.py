# -*- coding: utf-8 -*-
"""
Created on Mon Jan  6 12:35:18 2020

@author: Username
"""

import sys

for n in [input()]:
    n=n.replace('\n','')
    for i in range(int(n)):
        num=int(input())
        if num%400 == 0 or num%4 == 0 and num% 100 !=0:
            print('a leap year')
        else: print('a normal year')
