#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int num; cin >> num;
        if (!(num%400) || !(num%4) && num%100) cout << "a leap year\n";
        else cout << "a normal year\n";
    }

}
