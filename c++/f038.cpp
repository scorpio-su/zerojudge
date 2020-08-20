#include <bits/stdc++.h>
using namespace std;

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int t; 
    while(cin >> t){
        long long a[t];
        memset(a, 0, sizeof(a));
        for (int i = 0; i < t; i++) cin >> a[i];
        sort(a,a+t);
        long long int lim; cin >> lim;
        long long int max1=0;
        for (int i = t-1;i>t/2+1;i--){
            for (int j =i-1;j>=0;j--){
                if (a[i]*a[j] <= lim){
                    max1 = a[i]*a[j];break;
                }
                //cout << j ;
            }
             //cout << i ;
        }
        if (!max1) cout << "0\n";
        else cout << max1 << endl;
    }
}