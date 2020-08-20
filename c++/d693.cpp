#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    while (cin >> t && t){
        long a,b; cin>>a;
        for (int i=1;i<t;i++)
        {
            cin >> b;
            a=a*b/__gcd(a,b);
        }
        cout << a << "\n";
    }
}
