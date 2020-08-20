import sys

for s in sys.stdin:
    s=s.replace('\n','')
    ho1,mo1=list(map(int,s.split(' ')))
    ho2,mo2=list(map(int,input().split(' ')))
    num1=ho1*60+mo1
    num2=ho2*60+mo2
    num2-=num1
    if num2 <0:
        num2+=24*60
    print (num2//60,num2%60)