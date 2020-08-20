import sys

for s in sys.stdin:
    s=s.replace('\n','')
    a,b,c,d=list(map(int,s.split(' ')))
    if b!=c:
        print ('Error')
        continue
    else:
        line1=[[0]*b]*a
        line2=[[0]*d]*c
        for i in range(a):
            line1[i]=list(map(int, input().split(' ')))
        for i in range(c):
            line2[i]=list(map(int, input().split(' ')))
        for i in range(a):
            outpu=''
            for j in range(d):
                e=0
                for k in range(b):
                    e += int(line1[i][k]*line2[k][j])
                outpu+=str(e)+' '
            print (outpu)