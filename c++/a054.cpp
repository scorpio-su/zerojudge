#include <bits/stdc++.h>
#define _for(a,b,c) for(int (a)=(b);(a)<(c);(a)++)
using namespace std;

map<int,string> pos;

int main ()
{
    pos[0]="BNZ"; pos[1]="AMW"; pos[2]="KLY"; pos[3]="JVX"; pos[4]="HU";
    pos[5]="GT"; pos[6]="FS"; pos[7]="ER"; pos[8]="DOQ"; pos[9]="CIP";
    int cou[]={8,7,6,5,4,3,2,1,1};
    string s;
    while (cin >> s){
        int num=0;
        _for(i,0,9){
            num+=(s[i]-'0')*cou[i];
        }
        num=(10-num%10)%10;
        cout << pos[num] << endl;
    }
    return 0;
}
