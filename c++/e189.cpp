#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(0);
   long n;
   while (cin >> n) {
        if (!(n%3)) cout << "YES\n";
        else cout << "NO\n";
   }

}
