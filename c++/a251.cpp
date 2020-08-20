#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;cin >> t;
    int a[20];
    while (t--)
    {
        memset(a,0,sizeof(a));
        int n;cin >> n;
        for (int i=0;i<4;i++) cin >> a[i];
        for (int i=4;i<n;i++) a[i]=a[i-4]+a[i-1];
        sort(a,a+n);
        cout << a[n/2] << "\n";
    }
}

