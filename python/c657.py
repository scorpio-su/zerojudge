import sys

for s in sys.stdin:
    s = str(s.replace('\n',''))
    lis=''
    numlis=[]
    hendnu=[]
    maxn=0
    max2=0
    for i in range (len(s)):
        nee=False
        for j in range (len(lis)):
            if s[i] == lis[j]:
                nee =True
                numlis[j]+=1
                maxn=max(max2,numlis[j])
                if maxn >max2:
                    index=j
                    max2=maxn
        if not nee:
            lis+=s[i]
            numlis.append(1)
            hendnu.append(i)
        
    print (lis[index],numlis[index])
    