import sys

for s in sys.stdin:
    s = s.replace('\n','')
    for y in range (len(s)):
        print(s)
        s= s[1:]+s[0]