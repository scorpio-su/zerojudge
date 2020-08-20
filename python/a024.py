import sys
import math as m

for s in sys.stdin:
    s=s.replace('\n','')
    a,b=s.split(' ')
    print (m.gcd(int(a),int(b)))