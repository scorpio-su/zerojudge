#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b;cin >> a >> b;
    if(a>b) swap(a,b);
    int num = 0;
    if (a%2) a++;
    for (int i =a;i<=b;i+=2) num+=i;
    cout << num << '\n';
}