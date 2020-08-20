# -*- coding: utf-8 -*-
"""
Created on Tue Jan  7 20:56:59 2020

@author: Username
"""

import sys

for n in [input()]:
    a,b,c=list(map(int,n.replace('\n','').split(' ')))
    if a>=10 and c>=2:
        #b+=min(c//2,a//10)
        if a//10 >= c//2: b+=(c//2)
        else: b+=(a//10)
    print('{0} 個餅乾，{1} 盒巧克力，{2} 個蛋糕。'.format(a,b,c))
    