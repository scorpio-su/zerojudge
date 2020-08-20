#include <iostream>
using namespace std;

char a[5]={'U','G','Y','T','I'};

int main()
{
    int n;
    while (cin >> n) cout << a[n%5] << "\n";

}
