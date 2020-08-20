import sys

for s in sys.stdin:
    row, column= list(map(int, s.split(' ')))
    line1=[[0]*column]*row
    output=''
    for i in range(row):
        line1[i]=input().split(' ')
    #print (line1)
    '''
    for i in range(row):
        print(" ".join(line1[i]))
    '''
    for i in range(column):
        for j in range(row):
            if j !=0:
                output +=' '
            output += line1[j][i]
        print (output)
        output = ''