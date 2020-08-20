import sys

for s in sys.stdin:
    s=s.replace('\n','')
    v,r=list(map(float,s.split(' ')))
    print ('%.4f'%(v/r*1000))