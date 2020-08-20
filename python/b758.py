import sys

for n in [input()]:
    ans='0'
    h,m=list(map(int,n.replace('\n','').split(' ')))
    num=60*h+m+150
    h1=num//60
    if h1 >=24: h1-=24
    m1=num%60
    if len(str(h1))==2: ans=str(h1)+':'
    else: ans+=str(h1)+':'
    if len(str(m1)) == 2: ans+=str(m1)
    else: ans+='0'+str(m1)
    print(ans)