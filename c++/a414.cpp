#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long num;
    while (cin >> num)
    {
        if (!num) break;
        int coun=0;
        while(num%2){
            coun++;
            num/=2;
        }
        cout << coun << endl;
    }
}
