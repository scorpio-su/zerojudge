#include <iostream>
#include <set>
#define _for(i,a,b) for(int i=(a); i<(b);i++)
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t,n; cin >> t >> n;
    set<int> a;
    while (t--){
        a.clear();
        int num;
        _for(i,0,n) {
            cin >> num;
            a.insert(num);
        }
        int ans =0;
        _for(i,0,n) {
            cin >> num;
            if (a.count(num)) ans++;
        }
        cout << ans << '\n';
    }
}