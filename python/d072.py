# -*- coding: utf-8 -*-
"""
Created on Tue Jan  7 16:43:51 2020

@author: Username
"""


for i in range(int(input())):
    num=int(input())
    print('Case {0}: '.format(i+1),end='')
    if num%400 == 0 or num%4 == 0 and num% 100 !=0: print('a leap year')
    else: print('a normal year')