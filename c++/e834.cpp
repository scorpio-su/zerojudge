#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int num;
    cin >> num;
    int n ;
    while (cin >> n && n){
        if (n%num) cout << num-n%num << '\n';
        else cout << n/num << '\n';
    }
}