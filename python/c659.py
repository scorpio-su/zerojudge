import sys

for s in sys.stdin:
    print(str(" "+s.split(" ")[0]+" ").join(s.split(" ")[1:]))