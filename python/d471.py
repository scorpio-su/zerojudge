# -*- coding: utf-8 -*-
"""
Created on Fri Jan  3 07:35:46 2020

@author: Username
"""

import sys

for n in [input()]:
    n=int(n)
    num=2**n
    for i in range(num):
        print(eval("format(int({0}),'0{1}b')".format(i,n)))