# -*- coding: utf-8 -*-
"""
Created on Wed Jan  8 09:40:27 2020

@author: Username
"""

import sys

for num in [input()]:
    num=int(num.replace('\n',''))
    if num<0: break
    print((1+num)*num//2+1)
