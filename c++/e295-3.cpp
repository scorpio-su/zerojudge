#include <bits/stdc++.h>
using namespace std;

inline int readin() {
    int ret = 0,f = 0;char ch = getchar();
    if (ch == EOF) return -1;
    while (isdigit (ch)) {
        ret = ret*10  + ch - 48;
        ch = getchar();
    }
    return ret;
}
inline void print(int x) {
    if(x<0) {putchar('-');x=-x;}
    int y=10,len=1;
    while(y<=x)    {y*=10;len++;}
    while(len--){y/=10;putchar(x/y+48);x%=y;}
}
int main()
{
    int n1,n2;
    while (true) {
     n1=readin(); n2=readin();
     if (n1==0&&n2 ==0) break;
     print(n1+n2);
     cout << endl;
    }
    return 0;

}
