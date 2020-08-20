#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,a,b;
    while (cin >> a >> b >> n)
    {
        string ans=".";
        cout << a/b;
        a%=b;
        while (n--){
            a*=10;
            ans+=char(a/b + '0');
            a%=b;
        }
        cout <<  ans << endl;
    }
    return 0;
}
