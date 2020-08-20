num,num1=1,1
for i in range(1,101):
    num1*=i
    num*=num1

print('\n'.join(i for i in str(num)))
#print(len(str(num)))