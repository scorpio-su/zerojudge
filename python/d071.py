# -*- coding: utf-8 -*-
"""
Created on Tue Jan  7 16:39:13 2020

@author: Username
"""

import sys

for n in [input()]:
    num=int(n)
    if num%400 == 0 or num%4 == 0 and num% 100 !=0: print('a leap year')
    else: print('a normal year')
