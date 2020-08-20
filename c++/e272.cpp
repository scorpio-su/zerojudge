#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    unsigned long long ans[10001]={0,1,1};
    for (int i=3;i<10001;i++) ans[i]=ans[i-1]+ans[i-2];
    int n,m;
    while ( cin >> n >> m){
        //cout << n << m << endl;
        cout << ans[__gcd(n,m)] << endl;
    }
    return 0;
}
