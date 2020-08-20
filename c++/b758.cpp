#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,m;
    while (cin >> h >> m){
        string ans="";
        int num=h*60+m+150;
        int h1=num/60,m1=num%60;
        if (h1>24) h1-=24;
        if (h1<10) ans+="0";
        ans+=":"+char(h1+'0');
        if
    }
    return 0;
}
