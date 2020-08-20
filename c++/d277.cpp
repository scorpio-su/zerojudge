#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long n;
    while (cin >> n){
      //cout << (n%2?n-1:n) << "\n";
      cout << n-(n%2) << "\n";
    }
}
