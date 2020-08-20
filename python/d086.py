# -*- coding: utf-8 -*-
"""
Created on Wed Jan  8 09:46:45 2020

@author: Username
"""

dic={'hardwork':98,'knowledge':96,'attitude':100}

for s in [input()]:
    s=s.replace('\n','').replace(' ','')
    #if s[-1] == '':s=s[:-1]
    if s == '0': break
    num=0
    s=s.lower()
    
    for i in range(len(s)):
        k=''
        if s[i]=='a' or s[i]=='h': k=s[i:i+8]
        if s[i]=='k': k=s[i:i+9]
        #print(k)
        if dic.get(k):num+=dic.get(k)
    if num!=0: print(num)
    else: print('Fail')

#hardwork KNOWLEDGE aTtitUdE C++
#hardworkKNOWLEDGEaTtitUdEC++