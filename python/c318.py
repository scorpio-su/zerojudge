def main():
    n,t=list(map(int,input().replace('\n','').split()))
    lis=[]
    for i in range(n):  lis.append(list(map(int ,input().split())))
    lis.sort(key = lambda s: s[0],reverse = True)
    n1,num=0,0
    while t!=0:
        if n1 == n: n1 = 0
        num+=lis[n1][0]
        #print(lis[n1][0])
        lis[n1][0]-=lis[n1][1]
        if lis[n1][0] <0: lis[n1][0]=0
        n1+=1
        t-=1
    print(num)

def main1():
    n,t=list(map(int,input().replace('\n','').split()))
    lis=[]
    for i in range(n):
        si,di=list(map(int,input().split()))
        while si>0:
            lis.append(si)
            si-=di
    lis.sort(reverse=True)
    #print(lis)
    num=0
    for i in range(t): num+=lis[i]
    print(num)
main1()