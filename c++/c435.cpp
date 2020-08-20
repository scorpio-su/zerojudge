#include <iostream>
using namespace std;


/*
void solve(int n){
    long ans{-1};
    int indx{0},max1{-1};
    long a[n];
        for (int i = 0; i < n; ++i) {cin >> a[i]; if (max1<a[i]) {max1=a[i]; indx=i;}}
        for (int i = indx+1; i <n ; i++){
            if (ans<max1-a[i]) ans = max1-a[i];    
        }
     cout << ans <<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n){
        solve(n);
    }
}*/

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long ansma{-1},max1{-1};
    int n;
    while (cin >> n) {
        long a[n];
        for (int i = 0; i < n;i++){
            cin >> a[i];
            if (a[i]>max1) {max1 = a[i];continue;}
            if (ansma<max1-a[i]) ansma = max1-a[i];
        }
        cout << ansma << '\n';
    }
}