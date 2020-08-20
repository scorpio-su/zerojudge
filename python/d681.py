# -*- coding: utf-8 -*-
"""
Created on Wed Jan  8 17:07:26 2020

@author: Username
"""



for n in [input()]:
    n=n.replace('\n','').replace('and','&&').replace('or','||').replace(' ','')
    s=int(n[:5])
    for i in range(5,len(n)):
        s2=''
        if n[i] == '|': 
            for j in range(i,i+6):
                if n[j] == '|' or n[j] == '&': 
                    i+=j
                    break
                s2+=n[j]
            s=s|int(s2.replace(' ',''))
        
        if n[i] == '&': 
            for j in range(i,i+6):
                if n[j] == '|' or n[j] == '&': 
                    i+=j
                    break
                s2+=n[j]
            s=s&int(s2.replace(' ',''))
        
    print(n,s)
    