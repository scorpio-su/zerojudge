import sys

pos=['水瓶座','雙魚座','牡羊座','金牛座','雙子座','巨蟹座',
     '獅子座','處女座','天秤座','天蠍座','射手座','摩羯座']
for i in sys.stdin:
    m,n=list(map(int,i.replace('\n','').split('/')))
    if m==1:
        if n<21: print(pos[11])
        else: print(pos[0])
    elif m==2:
        if n<20: print(pos[0])
        else: print(pos[1])
    elif m==3:
        if n<21: print(pos[1])
        else: print(pos[2])
    elif m==4:
        if n<21: print(pos[2])
        else: print(pos[3])
    elif m==5:
        if n<22: print(pos[3])
        else: print(pos[4])
    elif m==6:
        if n<22: print(pos[4])
        else: print(pos[5])
    elif m==7:
        if n<23: print(pos[5])
        else: print(pos[6])
    elif m==8:
        if n<22: print(pos[6])
        else: print(pos[7])
    elif m==9:
        if n<24: print(pos[7])
        else: print(pos[8])
    elif m==10:
        if n<24: print(pos[8])
        else: print(pos[9])
    elif m==11:
        if n<23: print(pos[9])
        else: print(pos[10])
    else:
        if n<23: print(pos[10])
        else: print(pos[11])
        
