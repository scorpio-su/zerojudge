#include <bits/stdc++.h>
using namespace std;

void solve(int be){
    array<int ,12> a;
    for (int i{}; i<12; i++ ) cin >> a[i];
    int num;
    for (auto i:a){
        cin >> num;
        if (be<num) cout << "No problem. :(\n";
        else{
            be-=num;
            cout << "No problem! :D\n";
        }
        be+=i;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,i{1};
    while (cin >> n) { 
        if (n<0) break;
        cout << "Case "<< i++ << ":\n";
        solve(n);
    }
}