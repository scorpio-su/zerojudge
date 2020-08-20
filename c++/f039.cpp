#include <iostream>
using namespace std;

int main(){
    bool ok = true;
    int n,ans; cin >> n;
    int a[n];
    for(int i = 0; i < n;i++) cin >> a[i];
    cin >> ans;
    for (int i = 0; i < n-1;i++){
        for(int j = i; j < n;j++){
            if (a[j]-a[i]<0) continue;
            if (a[j]-a[i] == ans){
                ok=false;
                cout << "Yes\n" << i << ' ' << j << endl;
                break;
            }
        }
        if (!ok) break;
    }
    if(ok) cout << "No\n";
}