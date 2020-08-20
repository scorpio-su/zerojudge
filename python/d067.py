# -*- coding: utf-8 -*-
"""
Created on Tue Jan  7 16:50:54 2020

@author: Username
"""

num=int(input())
if num%400 == 0 or num%4 == 0 and num% 100 !=0: print('a leap year')
else: print('a normal year')