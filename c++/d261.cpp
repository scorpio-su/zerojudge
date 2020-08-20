#include <iostream>
using namespace std;

int main(){
    int n;
    const int ma=10001;
    int man[ma]={0},waman[ma]={1};
    for (int i=1; i<ma;i++){
        waman[i]=man[i-1]+1;
        man[i]=man[i-1]+waman[i-1];
    }
    ios::sync_with_stdio(false);
    cin.tie(0);
    while (cin >> n) {
        if (n ==-1) break;
        cout << man[n] << ' ' << (long)man[n]+waman[n] << '\n';
    }
}