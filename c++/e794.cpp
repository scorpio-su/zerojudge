#include <iostream>
using namespace std;

const int n=50;

int main()
{
    int a[n]={1,1};
    for (int i=2;i<n;i++)a[i]=a[i-1]+a[i-2];
    int num;
    while (cin >> num) cout << a[num-1] << ':' <<a[num] << "\n";
}
