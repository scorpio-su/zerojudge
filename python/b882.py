h,m,s =list(map(int,input().replace('\n','').split()))
ans=''
m+=s//60
s%=60
h+=m//60
m%=60
if h>24: h%=24
if h<10: ans+='0'
ans+=str(h)+':'
if m<10: ans+='0'
ans+=str(m)+':'
if s<10: ans+='0'
ans+=str(s)
print(ans)