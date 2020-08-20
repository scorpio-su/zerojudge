#include <iostream>
using namespace std;

int main(){
    long long int n,m;
    ios::sync_with_stdio(false);
    cin.tie(0);
    while (cin >> n >> m){
        if (m == 0){cout << "Go Kevin!!\n"; continue;}
        do{
            n-=m;
            if (n==1) break;
        }while (n>0);
        if (n==1) cout << "Go Kevin!!\n";
        else cout << "No Stop!!\n";
    }
}