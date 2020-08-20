#include <bits/stdc++.h>
using namespace std;

/*int f(int n){
    if (n<=1) return 1;
    else if(2<=n && n<=3) return 2;
    else return f(n-2)+f(n-3);
}*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int num;
    int n[77]={1,1,2,2,3};
    for (int i=5;i<77;i++) n[i]=n[i-2]+n[i-3];
    while (cin >> num){
        cout << n[num] << endl;
    }
    return 0;
}
