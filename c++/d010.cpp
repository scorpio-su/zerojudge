#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;while (cin >> n){
        long sum1=1;
        for (int i=2;i<n;i++){
            if(!(n%i)) sum1+=i;
        }
        if (sum1>n) cout << "盈數\n";
        else if(sum1<n) cout << "虧數\n";
        else cout << "完全數\n";
    }

}
