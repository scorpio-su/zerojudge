#include <bits/stdc++.h>
using namespace std;

int main()
{

    int h1,h2,m1,m2;
    while (cin >> h1 >> m1 >> h2 >> m2)
    {
        int num=60*(h2-h1)+(m2-m1);
        if (num <0) num+=24*60;
        cout << num/60 << " " << num%60 << endl;

    }

}
