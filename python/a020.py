import sys

def chack(c):
    change = {
    'A':10,'I':34,'Q':24,
    'B':11,'J':18,'R':25,
    'C':12,'K':19,'S':26,
    'D':13,'L':20,'T':27,
    'E':14,'M':21,'U':28,
    'F':15,'N':22,'V':29,
    'G':16,'O':35,'W':32,
    'H':17,'P':23,'X':30,
    'Y':31,'Z':33}
    num = [1,9,8,7,6,5,4,3,2,1,1]
    code = str(change.get(c[0])) + c[1:len(c)]
    value =0
    for i in range (len(num)):
        value += int(code[i])*num[i]
    if (value %10 == 0):
        return True
    return False
    
for s in sys.stdin:
    if (chack(s)):
        print ('real')
    else:
        print ('fake')