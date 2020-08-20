while True:
    x,y=list(map(str, input().replace('\n','').split(' ')))
    if x == '0' and y == '0': break
    x=x+y
    num=0
    for i in range (len(x)//2):
        if (int(x[i])+int(x[-i]) >=10):  num+=1
    if num == 0: print ('No carry operation')
    else: print (num,'carry operation')
