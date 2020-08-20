#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    //cin.tie(0); cout.tie(0);
    int a,b,c;
    while(cin >> a >> b >>c){
        int num=(a+b+c)/2;
        cout << num*(num-a)*(num-b)*(num-c) << "\n";
    }
}
