#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0); int n=10;
    int te[n];
    for (int i=0;i<n;i++) cin >> te[i];
    int num,sum=0;cin >> num; num+=30;
    for (int i=0;i<n;i++)
        if (te[i]<= num) sum+=1;
    cout << sum << endl;

}
