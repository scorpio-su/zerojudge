#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n,m;
    while (cin >> n >> m) cout << n*m*3+n*2+m*1 << "\n";
}
