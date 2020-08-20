#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    long a[101]; memset(a,0,sizeof(a));
    int t=2;
    while (t--){
        int n,num;
        while (cin >> n){
            if (n == -1) break;
            cin >> num; a[n]+= num;
        }
    }
    for (int i=0;i<101;i++) {
        if (!(a[i])) continue;
        cout << i << " " << a[i] <<"\n";
    }

}
