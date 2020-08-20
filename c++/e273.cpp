#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n)
    {
        int num;
        while (n--){
            cin >> num;
            if (n==0) break;
            cout << num*n << " ";
        }
        cout << endl;
    }
    return 0;
}
