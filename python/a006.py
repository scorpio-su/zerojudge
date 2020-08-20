import sys
import math

for s in sys.stdin:
    a,b,c= list(map(int,s.split(' ')))
    num=b*b-4*a*c
    if num == 0:
        print ('Two same roots x='+str(int(-b//(2*a))))
    elif num <0:
        print ('No real root')
    else:
        big= (-b+math.sqrt(num))//(2*a)
        small= (-b- math.sqrt(num))//(2*a)
        print ('Two different roots x1='+str(int(big)),', x2='+str(int(small)))
        
    
    