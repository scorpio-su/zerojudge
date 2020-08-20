#include <iostream>
#include <cctype>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a;
    while (cin >> a) {
        a[0]=toupper(a[0]);
        cout << a << '\n';
    }
}
