import sys

tabel = {
    'M': 1000,
    'D': 500,
    'C':100,
    'L': 50,
    'X': 10,
    'V': 5,
    'I':1
}
table2={
     900 : 'CM',
        800 : 'DCCC',
        700 : 'DCC',
        600 : 'DC',
        500 : 'D',
        400 : 'CD',
        300 : 'CCC',
        200 : 'CC',
        100 : 'C',
        90 : 'XC',
        80 : 'LXXX',
        70 : 'LXX',
        60 : 'LX',
        50 : 'L',
        40 : 'XL',
        30 : 'XXX',
        20 : 'XX',
        10 : 'X',
        9 : 'IX',
        8 : 'VIII',
        7 : 'VII',
        6 : 'VI',
        5 : 'V',
        4 : 'IV',
        3 : 'III',
        2 : 'II',
        1 : 'I',
        0 : ''
}

def romanto(num):
    if num == 0:
        return 'ZERO'
    th=int (str(int (num/1000))[-1])
    hu=int (str(int (num/100))[-1])*100
    ten=int (str(int (num/10))[-1])*10
    inv=int (str(int (num))[-1])
    value='M'*th
    value += table2[hu]+table2[ten]+table2[inv]
    return value

for s in sys.stdin:
    s=s.replace("\n","")
    if s == '#' :
        continue
    in1,in2 =s.split(" ")
    maxn = tabel[in1[-1]]
    tot =0
    for i in range(len(in1)-1,-1,-1):
        if tabel[in1[i]] < maxn:
            tot -=tabel[in1[i]]
        else :
            tot +=tabel[in1[i]]
        maxn=max(maxn,tabel[in1[i]])
    maxn=tabel[in2[-1]]
    for i in range(len(in2)-1,-1,-1):
        if tabel[in2[i]] < maxn:
            tot +=tabel[in2[i]]
        else :
            tot -=tabel[in2[i]]
        maxn=max(maxn,tabel[in2[i]])
    print (romanto(tot))
    