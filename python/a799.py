import sys

for s in sys.stdin:
    s=int(s.replace('\n',''))
    if s<0:
        print (-s)
    else:
        print (s)
    