#include <bits/stdc++.h>
#define _for(a,b,c) for(int (a)=(b);(a)<(c);(a)++)
using namespace std;

int main()
{
    int num;
    while (cin >> num){
        int a[num];
        _for(i,0,num) cin >> a[i];
        sort(a,a+num);
        _for(i,0,num)cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
