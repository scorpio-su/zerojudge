#include <bits/stdc++.h>
using namespace std;
const double cap=1e-5;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int m,p;
        cin >> m >> p;
        double rat=(double)(p-m)/m*100;
        if (rat>=0.0) cout << fixed << setprecision(2) <<rat+cap;
        else cout << fixed << setprecision(2) <<rat-cap;
        if (rat >= 10.0 || rat <= -7.0) cout << "% dispose\n";
        else cout << "% keep\n";
    }

}
