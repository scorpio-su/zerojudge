#include <bits/stdc++.h>
#define _for(a,b,c) for(int (a)=(b);(a)<(c);(a)++)
using namespace std;

int main()
{
    long king[57]={1,2};
    _for(i,2,57) king[i]=king[i-1]*2;
    int i,j;
    while (cin >> i >> j)
    {
        cout << king[(i-1)*8+(j-1)] << endl;
    }
    return 0;
}
