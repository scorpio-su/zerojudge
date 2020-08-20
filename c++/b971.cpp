#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long long int fr,en,di;
    while (cin >> fr >> en >> di)
    {
        if (fr>en)
            for (int i=fr;i>=en;i+=di) cout << i << " ";
        else
            for (int i=fr;i<=en;i+=di) cout << i << " ";
        cout << endl;
    }

}
