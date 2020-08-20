import sys

def main():
    for n in sys.stdin:
        if n == '\n': continue
        if len(n) > 8:  n,s=n.split()
        else: s=str(input().replace('\n',''))
        n,ans,i=int(n),'',0
        while i!=n:
            c,num=s[i],0
            while s[i] == c:
                num+=1
                i+=1
                if i==n: break
            ans+=str(num)+c
            #if i==n: break
        #print(i if len(s) <= len(ans): i=s else: i=ans)
        if len(ans) >=len(s):print(s)
        else: print(ans)

main()
