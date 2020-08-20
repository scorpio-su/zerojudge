import sys

for s in sys.stdin:
    s = list(map(int,s.split()))
    print(s[0]+s[1])