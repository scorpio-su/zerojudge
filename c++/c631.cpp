#include <iostream>
using namespace std;

int main(){
    int n;  cin >> n;
    string s; cin >> s;
    long l,r;
    while (cin >> l >> r){
        for (int i=l-1;i<r;i++){
            cout << s[i];
        }
        cout << "\n";
    }
}
