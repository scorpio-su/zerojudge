import sys
for s in sys.stdin:
    s=s.replace('\n','')
    print('_'.join(str(ord(c)) for c in s))