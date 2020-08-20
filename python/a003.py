import sys

for s in sys.stdin:
    s= list (map(int, s.split()))
    m = (s[0]*2+s[1])%3
    if (m == 0):
        print ('普通')
    elif (m == 1):
        print ('吉')
    else:
        print ('大吉')    