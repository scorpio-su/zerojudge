#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;cin >> t;
    while (t--)
    {
        int sum=0,n;cin >> n;
        for (int i=2;i<=n;i++){
            if (!(i%2)){ sum++; continue; }
            if (!(i%5)){ sum++; continue; }
        }
        cout << sum << "\n";
    }
}
