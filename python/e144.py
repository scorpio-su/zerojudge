import sys
import math

g=9.8
pi=3.141592653589794
for s in sys.stdin:
    if s == "":
        break
    s=int(s.replace('\r',''))
    for i in range(0,s):
        v,d,t=0,0,0
        v,d,t=list(map(int,input().split(' ')))
        tnum=v*math.sin(d/180*pi)/g
        x=v*math.cos(d/180*pi)*t
        y=v*math.sin(d/180*pi)*t-(g*t*t)/2
        if tnum == t:
            print ('x: %.2f'%(x)+', y: %.2f'%(y),' at',str(t)+'(s)','rest')
        elif tnum > t:
            print ('x: %.2f'%(x)+', y: %.2f'%(y),' at',str(t)+'(s)','rising')
        else:
            print ('x: %.2f'%(x)+', y: %.2f'%(y),' at',str(t)+'(s)','falling')
        

