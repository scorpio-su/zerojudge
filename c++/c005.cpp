#include <bits/stdc++.h>
#define _for(a,b,c) for(int (a)=(b);(a)<(c);(a)++)
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        long long int area, num1,env,ge1,sum=0;
        cin >> num;
        while(num--){
            cin >> area >> num1 >> env;
            ge1=area*env;
            sum+=ge1;
        }
        cout << sum << endl;
    }
    return 0;
}
