#include <bits/stdc++.h>
using namespace std;

int main(){
    array<int,3> a,b;
    for (int i = 0; i <3;i++) cin >> a[i] >> b[i];
    int sum1{1},num{}; for(int i = 0; i <3;i++) sum1 *= a[i];
    //cout << sum1;
    for (int i{},j; i <3;i++) {
        j=sum1/a[i];
        num+=b[i]*(j%a[i])*j;
    }
    cout << num%sum1 << '\n';
}