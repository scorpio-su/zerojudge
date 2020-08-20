#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int g,a,h,w;
    float x;
    cin >> g >> a >> h >> w;
    if (g) x=(13.7*w) + (5.0*h) - (6.8*a) + 66;
    else x=(9.6*w) + (1.8*h) - (4.7*a) + 655;
    cout << fixed << setprecision(2) << x << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    
}