#include <bits/stdc++.h>
#define _for(a,b,c) for(int (a)=(b);(a)<(c);(a)++)
using namespace std;

int main()
{
    bool ans[2001];
    int num,n;
    while (cin >> num){
        memset(ans,0,sizeof(ans));
        while (num--){
            cin >> n;
            ans[n]=true;
        }
        _for(i,1,2001){
            if (!ans[i]){ cout << i << endl; break;}
        }
    }
    return 0;
}
