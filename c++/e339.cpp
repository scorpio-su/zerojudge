#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n)
    {
        long num,sum=0;
        while (n--)
        {
            cin >> num;
            sum+=num;
            cout << sum  << " ";
        }
        cout << endl;
    }
    return 0;
}
