#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long a,b,sum=0;cin >> a >> b;
    if (a%2) a++;
    while(a<=b){
        sum+=a; a+=2;//cout << a << endl;
    }
    cout << sum << endl;
}
