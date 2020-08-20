#include <iostream>
using namespace std;

int main()
{
    int t;cin >> t;
    int a[t];
    for (int i=0;i<t;i++) cin >> a[i];
    int n,x,y; cin >> n;
    while (n--){
        cin >> x >> y;
        cout << a[x]+a[y] << "\n";
    }

}
