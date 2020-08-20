# -*- coding: utf-8 -*-
"""
Created on Tue Jan  7 17:26:35 2020

@author: Username
"""

sk=['甲','乙','丙','丁','戊','己','庚','辛','壬','癸']
bu=['子','丑','寅','卯','辰','巳','午','未','申','酉','戌','亥']

for i in [input()]:
    n=int(i.replace('\n',''))+56
    n%=60
    print(sk[n%10]+bu[n%12])