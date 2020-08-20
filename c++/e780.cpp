#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    int init1=0,ans=0;
    while (t--){
        string c; cin >> c;
        if (c[0] == 'L') init1--;
        else if (c[0] == 'R') init1++;
        else{ 
            int n;cin >> n;
            if (n == init1) ans++;
        }
    }
    cout << ans << '\n';

}