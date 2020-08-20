#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        long n1,n2,sum=0;
        cin >> n1 >> n2;
        for (int i=1; i<=n1 ;i++){
            for (int j=1;j<=n2;j++)
            {
                sum+=__gcd(i,j);
            }
        }
        cout << sum << endl;
    }
    return 0;
}
