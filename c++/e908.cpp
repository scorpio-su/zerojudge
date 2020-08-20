#include <iostream>
#include <array>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    long long num; string s;
    while (cin >> s) {
        cin >> num, num%=7;
        for(int i=0;i<7;i++){
            if (a[i] == s) {num+=i; break;}
        }
        cout << a[num%7] << '\n';
    }
}