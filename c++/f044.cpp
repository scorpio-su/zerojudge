#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    while (cin >> a >> b){
        int i{};
        for (int j{1};j!=b/a+1;i++)j*=2;
        cout << i << '\n';
    }
}