import sys

for s in sys.stdin:
    s = s.replace("\n","")
    ns=""
    for i in range(len(s)):
        ns += chr(ord(s[i])-7) 
    print(ns)