#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    while (cin >> t)
    {
        long long lis[t];
        for (int i=0;i<t;i++) cin >> lis[i];
        int n,f,en; cin >> n;
        while(n--)
        {
            long long sum=0;
            cin >> f >> en;
            for (int i=f-1;i<en;i++) sum+=lis[i];
            cout << sum << '\n';
        }
    }

}
