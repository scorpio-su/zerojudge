import sys

for num in sys.stdin:
    num=int(num.replace('\n',''))
    three=[0]*3
    for i in range (num):
        three[int(input())%3]+=1
    print(" ".join(list(map(str,three))))
    