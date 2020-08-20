# -*- coding: utf-8 -*-
"""
Created on Wed Jan  8 20:41:33 2020

@author: Username
"""

for t in [input()]:
    t=t.replace('\n','')
    num=''
    n=0
    for i in range(len(t)):
        if t[i] == 'h':
            n+=int(num)*3600000
            num=''
            if t[i+1] == 'o': break
        elif t[i] == 'm':
            if i+1 == len(t)-1 or i+2 == len(t)-1:
                if t[i+1] == 's': 
                    n+=int(num)
                    break
                elif t[i+1] == 'i': 
                    n+=int(num)*60000
                    break
                else:
                    n+=int(num)*60000
                    num=''
            else: 
                n+=int(num)*60000
                num=''
        elif t[i] == 's':
            n+=float(num)*1000
            num=''
        else: num+=t[i]
    print(int(n))
            