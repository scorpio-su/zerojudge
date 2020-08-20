#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;
    int num,ans=0;
    while (t--){
        cin >> num;
        if (num<=10) ans++;
    }
    cout << ans << '\n';

}