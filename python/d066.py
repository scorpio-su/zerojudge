import sys

for s in sys.stdin:
    s=int(s.replace('\n','').replace(' ',''))
    if 730<=s<1700:
        print ('At School')
    else:
        print ('Off School')