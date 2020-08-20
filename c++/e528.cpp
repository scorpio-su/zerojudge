#include <bits/stdc++.h>
# include <stdio.h>
# include <stdlib.h>
#define _for(a,b,c) for(int (a)=(b);(a)<(c);(a)++)
#define _eap(a,b,c) for(int (a)=(b);(a)<=(c);(a)++)
using namespace std;

int main()
{
    string s;
    int t,num;
    cin >> t;
    while (t--)
    {
        s="";
        cin >> num;
        _eap(i,1,num){
            s+= str(i);
        }
        cout << s;

    }
    return 0;
}
