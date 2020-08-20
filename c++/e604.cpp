#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int n;
    while (cin >> n)
    {
        int num=1;
        while (n--) num*=3;
        cout << 2*num-1 << endl;

    }
    return 0;
}
