#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<int> pos;
    int a[25]{},nofl[25]{};
    for (int i = 0; i < n;i++){
        cin >> a[i];
        if (a[i] == 1) pos.push_back(i);
        if (a[i] == 9) nofl[i-1]=nofl[i+1]=1;
    }
    int num{};
    if (!pos.empty()){
        for (int i = pos.front(); i<pos.back();i++){
            if (nofl[i]!=1 && a[i]== 0) num++;
        }
    }
    cout << num << '\n';
}


