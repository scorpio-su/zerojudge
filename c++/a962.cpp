#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long num;
    while (cin >> num)
    {
        long sum=0,i=2;
        do{
            sum+=num%i;
            i++;
        }while(i!=num);
        cout << sum << endl;
    }
    return 0;
}
