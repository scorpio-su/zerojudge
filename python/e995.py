import sys
s=''
for i in range(1000): s+=str(i)
for n in sys.stdin: 
    print(s[int(n)])