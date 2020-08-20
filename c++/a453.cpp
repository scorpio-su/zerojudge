#include <iostream>
#include <cmath>
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    int d{b*b-4*a*c};
    if (d<0) cout << "No\n";
    else{
        float q = sqrt(d);
        int t = int(q);
        if(t*t == d)
            cout << "Yes" << endl;
        else cout << "No\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    while (cin >> n) {
        for (int i = 0; i < n;i++) solve();
    }
}