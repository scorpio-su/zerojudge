import sys

for s in sys.stdin:
    s=s.replace('\n','')
    if len(s.split('.')[1]) <=1:
        if '%.2f'%float(s) == '-0.00':
            print ('%.2f'%abs(float(s)))
        else:
            print ('%.2f'%float(s))
    else:
        if '%.2f'%float(s) == '-0.00':
            print ('%.2f'%abs(float(s)))
        else:
            print ('%.2f'%float(str(s)+'1'))
        