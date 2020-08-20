def main():
    num=str(input())
    tes=[0]*10
    for i in num: tes[int(i)]+=1
    #print(' '.join(str(i) for i in tes))
    sum,n,i=0,0,9
    for i in range(9,-1,-1):
        if tes[i] >=2 and n!=1: 
            sum +=i*i+i*i
            n=2
        elif tes[i] != 0:
            sum+=i*i
            n+=1
        if n==2: break
    #print(num[-3:])
    #print(sum)
    if sum == int(num[-3:]): print('Good Morning!')
    else: print('SPY!')

main()