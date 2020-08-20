# -*- coding: utf-8 -*-
"""
Created on Tue Jan  7 20:03:00 2020

@author: Username
"""

import sys

for s in [input()]:
    if s == '0': continue
    nums=input()
    if nums[-1] == ' ': nums=nums[:-1]
    nums=list(map(int,nums.split(' ')))
    nums.sort()
    print(' '.join(str(k) for k in nums))
    nums=list((sorted(set(nums)))[::-1])
    print(' '.join(str(k) for k in nums))