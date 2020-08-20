#include <iostream>
using namespace std;

int main()
{
    int t;cin >> t;
    while (t--)
    {
        int a,b,k;cin >> a >> b;
        if (a>b)k=0;
        else if (a<b) k=1;
        else k=2;
        char as[3]={'>','<','='};
        cout << as[k] << "\n";
    }
}
