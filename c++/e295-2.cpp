#include <bits/stdc++.h>
using namespace std;

inline unsigned int readin(){
    unsigned int a=0;
    char c='0';
    while (c>='0'&&c<='9'&&c!=EOF){
        a=(a<<3)+(a<<1)+c-'0';
        c=getchar();
    }
    return a;
}

/*inline void print(int d){
    if(d==0){
        putchar('0');
        return;
    }
    int len=0;
    char n[20];
    while(d>0){
        n[len]=d%10+48;
        len++;
        d/=10;
    }
    for(int i=len-1;i>=0;i--) putchar(n[i]);
}*/

int main()
{
    int n1,n2;
    while (true) {
     n1=readin(); n2=readin();
     if (n1==0&&n2 ==0) break;
     int c=n1+n2;
     if(c==0){
        putchar('0');
    }
    int len=0;
    char n[20];
    while(c>0){
        n[len]=c%10+48;
        len++;
        c/=10;
    }
    for(int i=len-1;i>=0;i--) putchar(n[i]);
     cout << endl;
    }
    return 0;

}
