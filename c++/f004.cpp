#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    int data[7]={1000,500,100,50,10,5,1};
    int data2[7];
    memset(data2,0,sizeof(data2));
    cout << n << " = ";
    for (int i = 0; i < 7;++i){
        int y=n/data[i];
        data2[i]=y;
        n%=data[i];
    }
    bool tes=false;
    for (int i = 0; i < 7;++i){
        if (data2[i] == 0) continue;
        if (!tes) {cout << data[i] << '*' << data2[i]; tes=true;}
        else cout << " + " << data[i] << '*' << data2[i];
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n) {
        solve(n);
    }

}