import sys
import math

for t in sys.stdin:
    t=int (t.replace('\n',''))
    for i in range (0,t):
        data = list(map(int,input().replace('\n','').split()))
        data.sort()
        max1=0
        for j in range(0,data.size()-1)
            for k in range(j+1,data.size()):
                max1=max(max1,math.gcd(data[k],data[j]))
        print (max1)
    
