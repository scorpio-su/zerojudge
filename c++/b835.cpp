#include <iostream>
using namespace std;

int main(){
    long long int a,b;
    ios::sync_with_stdio(false);
    cin.tie(0);
    while (cin >> b >> a){
        if(a==0) cout << "Go Kevin!!\n";
        else if((b-1)%a==0) cout << "Go Kevin!!\n";
        else cout << "No Stop!!\n";
    }
}