# -*- coding: utf-8 -*-
"""
Created on Wed Jan  8 09:32:48 2020

@author: Username
"""


for t in range(int(input())):
    num=input().replace('\n','')
    time=0
    while True:
        time+=1
        num=str(int(num)+int(num[::-1]))
        if num == num[::-1]:
            print(time,num)
            break
        
    