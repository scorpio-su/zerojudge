import sys

for s in sys.stdin:
    s=float(s.replace('\n',''))
    s=round(s,3)
    print ('%.2f' % (round(s*100)/100.0))