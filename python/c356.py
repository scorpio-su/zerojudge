import sys

for num in sys.stdin:
    num=int(num)+1
    s=str(input().replace('\n',''))
    outpu=''
    for i in range (len(s)):
        if i%num==0:
            outpu+=s[i]
    print (outpu)