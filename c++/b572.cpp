#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin >> t;
    while (t--)
    {
        int h,m,h1,m1,te1;
        cin >> h >> m >> h1 >> m1 >> te1;
        int sum1=(h1*60+m1)-(h*60+m);
        if (sum1>=te1) cout << "Yes\n";
        else cout << "No\n";
    }
}
