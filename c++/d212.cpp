#include <bits/stdc++.h>
#define _for(a,b,c) for(int (a)=(b);(a)<(c);(a)++)
using namespace std;

long long int pos[102];

int main()
{
    pos[1]=1;
    pos[2]=2;
    _for(i,3,100) pos[i]=pos[i-1]+pos[i-2];
    int num;
    while (cin >> num){
        cout << pos[num] << endl;
    }
    return 0;
}
