#include <iostream>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        if (n == 0) break;
        int sum = 0;
        for (int i=1;i<n;i++){ if (!(n%i)) sum += i;}
        if (sum == n) cout << '=' << n << endl;
        else {
            int sum1=0;
            //cout << sum<< endl;
            for (int i = 1; i <sum; i++) if (!(sum%i)) sum1+=i;
            //cout << sum1 << endl;
            if (sum1 == n) cout << sum << endl;
            else cout << "0\n";
        }
         // cout << sum << endl;
    }
}