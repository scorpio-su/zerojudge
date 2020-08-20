#include <bits/stdc++.h>
using namespace std;

int main()
{
    short t; cin >> t;
    while (t--)
    {
        short a,b,c; cin >> a >> b >> c;
        bool tes=false;
        for (int i=a+1;i<b;i++){
            if (i%c) { tes=true;cout << i << " ";}
        }
        if (tes) cout << "\n";
        else cout << "No free parking spaces.\n";
    }
}
