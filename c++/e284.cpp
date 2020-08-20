#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n)
    {
        bool tes=true;
        if (n == 1) cout << "Yes" << endl;
        else{
            do {
                if(n%2) {tes=false; break;}
                n/=2;
            }while (n!=1);
            cout << ((tes)?"Yes":"No") << endl;
        }
    }
    return 0;

}
