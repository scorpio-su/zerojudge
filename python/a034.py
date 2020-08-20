import sys

for s in sys.stdin:
    print (bin(int(s)).replace('0b',''))