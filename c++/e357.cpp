#include <iostream>
using namespace std;

int f(int x){
    if (x == 1) return 1;
    else if (!(x%2)) return f(x/2);
    else return f(x+1)+f(x-1);
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    while (cin >> n) cout << f(n) << "\n";
}
