#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int mi=1e4+1,ma=-1;
    int n,num; cin >> n;
    while (n--){
        cin >> num;
        if (num>ma) ma=num;
        if (num<mi) mi=num;
    }
    cout << ma << ' ' << mi << '\n';
}